/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51526 TY51526;
typedef struct TY89028 TY89028;
typedef struct TY78011 TY78011;
typedef struct TY74267 TY74267;
typedef struct TY74263 TY74263;
typedef struct TY72013 TY72013;
typedef struct TY51552 TY51552;
typedef struct TY43539 TY43539;
typedef struct TY51548 TY51548;
typedef struct TY50011 TY50011;
typedef struct TY51520 TY51520;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY73015 TY73015;
typedef struct TY74281 TY74281;
typedef struct TY51550 TY51550;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51544 TY51544;
typedef struct TY39013 TY39013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY89013[3];
typedef NimStringDesc* TY89017[4];
struct TY78011 {
TY74267* Lex;
TY74263* Tok;
};
struct TY89028 {
NU8 Skin;
TY78011 Parser;
};
struct TY43539 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY51526 {
TY51552* Typ;
NimStringDesc* Comment;
TY43539 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY51548* Sym;
} S4;
struct {TY50011* Ident;
} S5;
struct {TY51520* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
typedef NimStringDesc* TY42331[1];
struct TY72013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY73015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY72013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY74267 {
  TY73015 Sup;
NimStringDesc* Filename;
TY74281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY74263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY50011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY74263* Next;
};
struct TY51540 {
NU8 K;
NU8 S;
NU8 Flags;
TY51552* T;
TY48008* R;
NI A;
};
struct TY51552 {
  TY50005 Sup;
NU8 Kind;
TY51550* Sons;
TY51526* N;
NU8 Flags;
NU8 Callconv;
TY51548* Owner;
TY51548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY51540 Loc;
};
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
};
struct TY51548 {
  TY50005 Sup;
NU8 Kind;
NU8 Magic;
TY51552* Typ;
TY50011* Name;
TY43539 Info;
TY51548* Owner;
NU32 Flags;
TY51530 Tab;
TY51526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY51540 Loc;
TY51544* Annex;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY51544 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51526* Path;
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY74281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Open_4017)(FILE** F_4020, NimStringDesc* Filename_4021, NU8 Mode_4022, NI Bufsize_4023);
N_NIMCALL(void, Rawmessage_43560)(NU8 Msg_43562, NimStringDesc* Arg_43563);
N_NIMCALL(void, Openparsers_89034)(TY89028* P_89037, NimStringDesc* Filename_89038, TY72013* Inputstream_89039);
N_NIMCALL(TY51526*, Parsepipe_89122)(NimStringDesc* Filename_89124, TY72013* Inputstream_89125);
N_NIMCALL(TY72013*, Llstreamopen_72032)(NimStringDesc* Filename_72034, NU8 Mode_72035);
N_NIMCALL(NimStringDesc*, Llstreamreadline_72048)(TY72013* S_72050);
N_NIMCALL(NI, Utf8bom_89077)(NimStringDesc* S_89079);
N_NIMCALL(NIM_BOOL, Containsshebang_89087)(NimStringDesc* S_89089, NI I_89090);
N_NIMCALL(void, Openparser_78018)(TY78011* P_78021, NimStringDesc* Filename_78022, TY72013* Inputstream_78023);
N_NIMCALL(TY72013*, Llstreamopen_72025)(NimStringDesc* Data_72027);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(TY51526*, Parseall_78014)(TY78011* P_78017);
N_NIMCALL(void, Closeparser_78024)(TY78011* P_78027);
N_NIMCALL(void, Llstreamclose_72040)(TY72013* S_72042);
N_NIMCALL(TY72013*, Evalpipe_89374)(TY89028* P_89377, TY51526* N_89378, NimStringDesc* Filename_89379, TY72013* Start_89380);
N_NIMCALL(NIM_BOOL, Identeq_50028)(TY50011* Id_50030, NimStringDesc* Name_50031);
N_NIMCALL(TY72013*, Applyfilter_89337)(TY89028* P_89340, TY51526* N_89341, NimStringDesc* Filename_89342, TY72013* Stdin_89343);
N_NIMCALL(TY50011*, Getcallee_89258)(TY51526* N_89260);
N_NIMCALL(NimStringDesc*, Rendertree_82042)(TY51526* N_82044, NU8 Renderflags_82047);
N_NIMCALL(NU8, Getfilter_89184)(TY50011* Ident_89186);
N_NIMCALL(NU8, Getparser_89221)(TY50011* Ident_89223);
N_NIMCALL(TY72013*, Filtertmpl_88001)(TY72013* Stdin_88003, NimStringDesc* Filename_88004, TY51526* Call_88005);
N_NIMCALL(TY72013*, Filterstrip_87009)(TY72013* Stdin_87011, NimStringDesc* Filename_87012, TY51526* Call_87013);
N_NIMCALL(TY72013*, Filterreplace_87004)(TY72013* Stdin_87006, NimStringDesc* Filename_87007, TY51526* Call_87008);
N_NIMCALL(void, Rawmessage_43564)(NU8 Msg_43566, NimStringDesc** Args_43568, NI Args_43568Len0);
N_NIMCALL(void, Messageout_43557)(NimStringDesc* S_43559);
N_NIMCALL(TY72013*, Llstreamopen_72028)(FILE** F_72031);
N_NIMCALL(TY51526*, Parseall_89044)(TY89028* P_89047);
N_NIMCALL(TY51526*, Parseall_80004)(TY78011* P_80007);
N_NIMCALL(void, Internalerror_43578)(NimStringDesc* Errmsg_43580);
N_NIMCALL(void, Closeparsers_89040)(TY89028* P_89043);
N_NIMCALL(TY51526*, Parsetoplevelstmt_78028)(TY78011* P_78031);
N_NIMCALL(TY51526*, Parsetoplevelstmt_80008)(TY78011* P_80011);
STRING_LITERAL(TMP89020, "standard", 8);
STRING_LITERAL(TMP89021, "braces", 6);
STRING_LITERAL(TMP89022, "endx", 4);
NIM_CONST TY89013 Parsernames_89012 = {((NimStringDesc*) &TMP89020),
((NimStringDesc*) &TMP89021),
((NimStringDesc*) &TMP89022)}
;
STRING_LITERAL(TMP89023, "none", 4);
STRING_LITERAL(TMP89024, "stdtmpl", 7);
STRING_LITERAL(TMP89025, "replace", 7);
STRING_LITERAL(TMP89026, "strip", 5);
NIM_CONST TY89017 Filternames_89016 = {((NimStringDesc*) &TMP89023),
((NimStringDesc*) &TMP89024),
((NimStringDesc*) &TMP89025),
((NimStringDesc*) &TMP89026)}
;
STRING_LITERAL(TMP192742, "|", 1);
STRING_LITERAL(TMP192865, "parser to implement", 19);
extern NI Gverbosity_42085;
N_NIMCALL(NI, Utf8bom_89077)(NimStringDesc* S_89079) {
NI Result_89080;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
Result_89080 = 0;
LOC3 = ((NU8)(S_89079->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(S_89079->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)(S_89079->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
Result_89080 = 3;
goto LA1;
LA6: ;
Result_89080 = 0;
LA1: ;
return Result_89080;
}
N_NIMCALL(NIM_BOOL, Containsshebang_89087)(NimStringDesc* S_89089, NI I_89090) {
NIM_BOOL Result_89091;
NIM_BOOL LOC2;
NI J_89096;
Result_89091 = 0;
LOC2 = ((NU8)(S_89089->data[I_89090]) == (NU8)(35));
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(S_89089->data[(NI64)(I_89090 + 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_89096 = 0;
J_89096 = (NI64)(I_89090 + 2);
while (1) {
if (!(((NU8)(S_89089->data[J_89096])) == ((NU8)(32)) || ((NU8)(S_89089->data[J_89096])) == ((NU8)(9)) || ((NU8)(S_89089->data[J_89096])) == ((NU8)(11)) || ((NU8)(S_89089->data[J_89096])) == ((NU8)(13)) || ((NU8)(S_89089->data[J_89096])) == ((NU8)(10)) || ((NU8)(S_89089->data[J_89096])) == ((NU8)(12)))) goto LA6;
J_89096 += 1;
} LA6: ;
Result_89091 = ((NU8)(S_89089->data[J_89096]) == (NU8)(47));
LA4: ;
return Result_89091;
}
N_NIMCALL(TY51526*, Parsepipe_89122)(NimStringDesc* Filename_89124, TY72013* Inputstream_89125) {
TY51526* Result_89126;
TY72013* S_89127;
NimStringDesc* Line_89139;
NI I_89140;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY78011 Q_89180;
NimStringDesc* LOC14;
TY72013* LOC15;
Result_89126 = 0;
S_89127 = 0;
S_89127 = Llstreamopen_72032(Filename_89124, ((NU8) 0));
if (!!((S_89127 == NIM_NIL))) goto LA2;
Line_89139 = 0;
Line_89139 = Llstreamreadline_72048(S_89127);
I_89140 = 0;
I_89140 = Utf8bom_89077(Line_89139);
LOC5 = Containsshebang_89087(Line_89139, I_89140);
if (!LOC5) goto LA6;
Line_89139 = Llstreamreadline_72048(S_89127);
I_89140 = 0;
LA6: ;
LOC9 = ((NU8)(Line_89139->data[I_89140]) == (NU8)(35));
if (!(LOC9)) goto LA10;
LOC9 = ((NU8)(Line_89139->data[(NI64)(I_89140 + 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
I_89140 += 2;
while (1) {
if (!(((NU8)(Line_89139->data[I_89140])) == ((NU8)(32)) || ((NU8)(Line_89139->data[I_89140])) == ((NU8)(9)) || ((NU8)(Line_89139->data[I_89140])) == ((NU8)(11)) || ((NU8)(Line_89139->data[I_89140])) == ((NU8)(13)) || ((NU8)(Line_89139->data[I_89140])) == ((NU8)(10)) || ((NU8)(Line_89139->data[I_89140])) == ((NU8)(12)))) goto LA13;
I_89140 += 1;
} LA13: ;
memset((void*)&Q_89180, 0, sizeof(Q_89180));
LOC14 = 0;
LOC14 = copyStr(Line_89139, I_89140);
LOC15 = 0;
LOC15 = Llstreamopen_72025(LOC14);
Openparser_78018(&Q_89180, Filename_89124, LOC15);
Result_89126 = Parseall_78014(&Q_89180);
Closeparser_78024(&Q_89180);
LA11: ;
Llstreamclose_72040(S_89127);
LA2: ;
return Result_89126;
}
N_NIMCALL(TY50011*, Getcallee_89258)(TY51526* N_89260) {
TY50011* Result_89261;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
Result_89261 = 0;
LOC2 = ((*N_89260).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
LOC2 = ((*(*N_89260).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
Result_89261 = (*(*N_89260).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_89260).Kind == ((NU8) 2))) goto LA6;
Result_89261 = (*N_89260).KindU.S5.Ident;
goto LA1;
LA6: ;
LOC8 = 0;
LOC8 = Rendertree_82042(N_89260, 0);
Rawmessage_43560(((NU8) 160), LOC8);
LA1: ;
return Result_89261;
}
N_NIMCALL(NU8, Getfilter_89184)(TY50011* Ident_89186) {
NU8 Result_89187;
NU8 I_89218;
NU8 Res_89220;
NIM_BOOL LOC3;
Result_89187 = 0;
I_89218 = 0;
Res_89220 = 0;
Res_89220 = ((NU8) 0);
while (1) {
if (!(Res_89220 <= ((NU8) 3))) goto LA1;
I_89218 = Res_89220;
LOC3 = Identeq_50028(Ident_89186, Filternames_89016[(I_89218)-0]);
if (!LOC3) goto LA4;
Result_89187 = I_89218;
goto BeforeRet;
LA4: ;
Res_89220 += 1;
} LA1: ;
Result_89187 = ((NU8) 0);
BeforeRet: ;
return Result_89187;
}
N_NIMCALL(NU8, Getparser_89221)(TY50011* Ident_89223) {
NU8 Result_89224;
NU8 I_89255;
NU8 Res_89257;
NIM_BOOL LOC3;
Result_89224 = 0;
I_89255 = 0;
Res_89257 = 0;
Res_89257 = ((NU8) 0);
while (1) {
if (!(Res_89257 <= ((NU8) 2))) goto LA1;
I_89255 = Res_89257;
LOC3 = Identeq_50028(Ident_89223, Parsernames_89012[(I_89255)-0]);
if (!LOC3) goto LA4;
Result_89224 = I_89255;
goto BeforeRet;
LA4: ;
Res_89257 += 1;
} LA1: ;
Rawmessage_43560(((NU8) 28), (*Ident_89223).S);
BeforeRet: ;
return Result_89224;
}
N_NIMCALL(TY72013*, Applyfilter_89337)(TY89028* P_89340, TY51526* N_89341, NimStringDesc* Filename_89342, TY72013* Stdin_89343) {
TY72013* Result_89344;
TY50011* Ident_89345;
NU8 F_89346;
TY42331 LOC7;
TY42331 LOC8;
Result_89344 = 0;
Ident_89345 = 0;
Ident_89345 = Getcallee_89258(N_89341);
F_89346 = 0;
F_89346 = Getfilter_89184(Ident_89345);
switch (F_89346) {
case ((NU8) 0):
(*P_89340).Skin = Getparser_89221(Ident_89345);
Result_89344 = Stdin_89343;
break;
case ((NU8) 1):
Result_89344 = Filtertmpl_88001(Stdin_89343, Filename_89342, N_89341);
break;
case ((NU8) 3):
Result_89344 = Filterstrip_87009(Stdin_89343, Filename_89342, N_89341);
break;
case ((NU8) 2):
Result_89344 = Filterreplace_87004(Stdin_89343, Filename_89342, N_89341);
break;
}
if (!!((F_89346 == ((NU8) 0)))) goto LA2;
if (!(2 <= Gverbosity_42085)) goto LA5;
memset((void*)&LOC7, 0, sizeof(LOC7));
Rawmessage_43564(((NU8) 233), LOC7, 0);
Messageout_43557((*Result_89344).S);
memset((void*)&LOC8, 0, sizeof(LOC8));
Rawmessage_43564(((NU8) 234), LOC8, 0);
LA5: ;
LA2: ;
return Result_89344;
}
N_NIMCALL(TY72013*, Evalpipe_89374)(TY89028* P_89377, TY51526* N_89378, NimStringDesc* Filename_89379, TY72013* Start_89380) {
TY72013* Result_89381;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_89470;
NI Res_89538;
Result_89381 = 0;
Result_89381 = Start_89380;
if (!(N_89378 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
LOC6 = ((*N_89378).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*N_89378).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
LOC5 = Identeq_50028((*(*N_89378).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP192742));
LA8: ;
if (!LOC5) goto LA9;
I_89470 = 0;
Res_89538 = 0;
Res_89538 = 1;
while (1) {
if (!(Res_89538 <= 2)) goto LA11;
I_89470 = Res_89538;
if (!((*(*N_89378).KindU.S6.Sons->data[I_89470]).Kind == ((NU8) 27))) goto LA13;
Result_89381 = Evalpipe_89374(P_89377, (*N_89378).KindU.S6.Sons->data[I_89470], Filename_89379, Result_89381);
goto LA12;
LA13: ;
Result_89381 = Applyfilter_89337(P_89377, (*N_89378).KindU.S6.Sons->data[I_89470], Filename_89379, Result_89381);
LA12: ;
Res_89538 += 1;
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_89378).Kind == ((NU8) 101))) goto LA15;
Result_89381 = Evalpipe_89374(P_89377, (*N_89378).KindU.S6.Sons->data[0], Filename_89379, Result_89381);
goto LA4;
LA15: ;
Result_89381 = Applyfilter_89337(P_89377, N_89378, Filename_89379, Result_89381);
LA4: ;
BeforeRet: ;
return Result_89381;
}
N_NIMCALL(void, Openparsers_89034)(TY89028* P_89037, NimStringDesc* Filename_89038, TY72013* Inputstream_89039) {
TY72013* S_89545;
TY51526* Pipe_89546;
S_89545 = 0;
(*P_89037).Skin = ((NU8) 0);
Pipe_89546 = 0;
Pipe_89546 = Parsepipe_89122(Filename_89038, Inputstream_89039);
if (!!((Pipe_89546 == NIM_NIL))) goto LA2;
S_89545 = Evalpipe_89374(P_89037, Pipe_89546, Filename_89038, Inputstream_89039);
goto LA1;
LA2: ;
S_89545 = Inputstream_89039;
LA1: ;
switch ((*P_89037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
Openparser_78018(&(*P_89037).Parser, Filename_89038, S_89545);
break;
}
}
N_NIMCALL(TY51526*, Parseall_89044)(TY89028* P_89047) {
TY51526* Result_89067;
Result_89067 = 0;
switch ((*P_89047).Skin) {
case ((NU8) 0):
Result_89067 = Parseall_78014(&(*P_89047).Parser);
break;
case ((NU8) 1):
Result_89067 = Parseall_80004(&(*P_89047).Parser);
break;
case ((NU8) 2):
Internalerror_43578(((NimStringDesc*) &TMP192865));
break;
}
return Result_89067;
}
N_NIMCALL(void, Closeparsers_89040)(TY89028* P_89043) {
Closeparser_78024(&(*P_89043).Parser);
}
N_NIMCALL(TY51526*, Parsefile_89031)(NimStringDesc* Filename_89033) {
TY51526* Result_89055;
TY89028 P_89056;
FILE* F_89057;
NIM_BOOL LOC2;
TY72013* LOC5;
Result_89055 = 0;
memset((void*)&P_89056, 0, sizeof(P_89056));
F_89057 = 0;
LOC2 = Open_4017(&F_89057, Filename_89033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
Rawmessage_43560(((NU8) 2), Filename_89033);
goto BeforeRet;
LA3: ;
LOC5 = 0;
LOC5 = Llstreamopen_72028(&F_89057);
Openparsers_89034(&P_89056, Filename_89033, LOC5);
Result_89055 = Parseall_89044(&P_89056);
Closeparsers_89040(&P_89056);
BeforeRet: ;
return Result_89055;
}
N_NIMCALL(TY51526*, Parsetoplevelstmt_89048)(TY89028* P_89051) {
TY51526* Result_89074;
Result_89074 = 0;
switch ((*P_89051).Skin) {
case ((NU8) 0):
Result_89074 = Parsetoplevelstmt_78028(&(*P_89051).Parser);
break;
case ((NU8) 1):
Result_89074 = Parsetoplevelstmt_80008(&(*P_89051).Parser);
break;
case ((NU8) 2):
Internalerror_43578(((NimStringDesc*) &TMP192865));
break;
}
return Result_89074;
}
N_NOINLINE(void, syntaxesInit)(void) {
}

