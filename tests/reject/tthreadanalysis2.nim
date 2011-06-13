discard """
  file: "tthreadanalysis2.nim"
  line: 45
  errormsg: "possible inconsistency of thread local heaps"
  cmd: "nimrod cc --hints:on --threads:on $# $#"
"""

import os

const
  noDeadlocks = defined(system.deadlocksPrevented)

var
  thr: array [0..5, TThread[tuple[a, b: int]]]

proc doNothing() = nil

type
  PNode = ref TNode
  TNode = object {.pure.}
    le, ri: PNode
    data: string

var
  root: PNode

proc buildTree(depth: int): PNode =
  if depth == 3: return nil
  new(result)
  result.le = buildTree(depth-1)
  result.ri = buildTree(depth-1)
  result.data = $depth

proc echoLeTree(n: PNode) =
  var it = n
  while it != nil:
    echo it.data
    it = it.le

proc threadFunc(interval: tuple[a, b: int]) {.procvar.} = 
  doNothing()
  for i in interval.a..interval.b: 
    var r = buildTree(i)
    echoLeTree(r) # for local data
  root = buildTree(2) # BAD!
  echoLeTree(root) # and the same for foreign data :-)

proc main =
  root = buildTree(5)
  for i in 0..high(thr):
    createThread(thr[i], threadFunc, (i*100, i*100+50))
  joinThreads(thr)

main()

