/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY52008 TY52008;
typedef struct TY105006 TY105006;
typedef struct TY105002 TY105002;
typedef struct TY55548 TY55548;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY93031 TY93031;
typedef struct TY55526 TY55526;
typedef struct TY186010 TY186010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY11002 TY11002;
typedef struct TY11014 TY11014;
typedef struct TY11396 TY11396;
typedef struct TY11018 TY11018;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
typedef struct TY55552 TY55552;
typedef struct TY47539 TY47539;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY38661 TY38661;
typedef struct TY54005 TY54005;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55540 TY55540;
typedef struct TY55544 TY55544;
typedef struct TY39221 TY39221;
typedef struct TY93029 TY93029;
typedef struct TY60220 TY60220;
typedef struct TY60218 TY60218;
typedef struct TY60216 TY60216;
typedef struct TY55564 TY55564;
typedef struct TY55562 TY55562;
typedef struct TY55560 TY55560;
typedef struct TY55550 TY55550;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_NIMCALL_PTR(TY105002*, TY105007) (TY55548* Module_105008, NimStringDesc* Filename_105009);
typedef N_NIMCALL_PTR(TY105002*, TY105012) (TY55548* Module_105013, NimStringDesc* Filename_105014, TY93031* Rd_105015);
typedef N_NIMCALL_PTR(TY55526*, TY105018) (TY105002* P_105019, TY55526* N_105020);
typedef N_NIMCALL_PTR(TY55526*, TY105023) (TY105002* P_105024, TY55526* Toplevelstmt_105025);
struct TY105006 {
TY105007 Open;
TY105012 Opencached;
TY105018 Close;
TY105023 Process;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY105002 {
  TNimObject Sup;
};
struct TY186010 {
  TY105002 Sup;
TY55548* Module;
NimStringDesc* Filename;
};
struct TY11002 {
NI Refcount;
TNimType* Typ;
};
struct TY11018 {
NI Len;
NI Cap;
TY11002** D;
};
struct TY11014 {
NI Counter;
NI Max;
TY11010* Head;
TY11010** Data;
};
struct TY11394 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11396 {
TY11018 Zct;
TY11018 Decstack;
TY11014 Cycleroots;
TY11018 Tempstack;
TY11394 Stat;
};
struct TY47539 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55526 {
TY55552* Typ;
NimStringDesc* Comment;
TY47539 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55548* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55520* Sons;
} S6;
} KindU;
};
struct TY38661 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef TY52008* TY175845[2];
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
};
struct TY55548 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55552* Typ;
TY54011* Name;
TY47539 Info;
TY55548* Owner;
NU32 Flags;
TY55530 Tab;
TY55526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55540 Loc;
TY55544* Annex;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY60216 {
NI Key;
NI Val;
};
struct TY60220 {
NI Counter;
TY60218* Data;
};
struct TY93029 {
NI Lastidxkey;
NI Lastidxval;
TY60220 Tab;
TY52008* R;
NI Offset;
};
struct TY55560 {
TY54005* Key;
TNimObject* Val;
};
struct TY55564 {
NI Counter;
TY55562* Data;
};
struct TY93031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY39221* Moddeps;
TY39221* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY93029 Index;
TY93029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY55564 Syms;
};
typedef NI TY9014[8];
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
};
struct TY55552 {
  TY54005 Sup;
NU8 Kind;
TY55550* Sons;
TY55526* N;
NU8 Flags;
NU8 Callconv;
TY55548* Owner;
TY55548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55540 Loc;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY60218 {
  TGenericSeq Sup;
  TY60216 data[SEQ_DECL_SIZE];
};
struct TY55562 {
  TGenericSeq Sup;
  TY55560 data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_105031)(TY105006* P_105034);
N_NIMCALL(TY105002*, Myopen_186126)(TY55548* Module_186128, NimStringDesc* Filename_186129);
N_NIMCALL(void*, newObj)(TNimType* Typ_14110, NI Size_14111);
static N_INLINE(void, asgnRef)(void** Dest_13414, void* Src_13415);
static N_INLINE(void, Incref_13402)(TY11002* C_13404);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NIM_BOOL, Canbecycleroot_11816)(TY11002* C_11818);
static N_INLINE(void, Rtladdcycleroot_12452)(TY11002* C_12454);
N_NOINLINE(void, Incl_11280)(TY11014* S_11283, TY11002* Cell_11284);
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814);
static N_INLINE(void, Decref_13201)(TY11002* C_13203);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803);
N_NOINLINE(void, Addzct_11801)(TY11018* S_11804, TY11002* C_11805);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18912);
N_NIMCALL(TY55526*, Adddotdependency_186025)(TY105002* C_186027, TY55526* N_186028);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38660, TY38661* Result);
N_NIMCALL(NimStringDesc*, Getmodulefile_110013)(TY55526* N_110015);
N_NIMCALL(void, Adddependencyaux_186016)(NimStringDesc* Importing_186018, NimStringDesc* Imported_186019);
N_NIMCALL(void, Appf_52071)(TY52008** C_52074, NimStringDesc* Frmt_52075, TY52008** Args_52077, NI Args_52077Len0);
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048);
N_NIMCALL(void, Writerope_52055)(TY52008* Head_52057, NimStringDesc* Filename_52058);
N_NIMCALL(TY52008*, Ropef_52066)(NimStringDesc* Frmt_52068, TY52008** Args_52070, NI Args_52070Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38820, NimStringDesc* Ext_38821);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_38730);
STRING_LITERAL(TMP197483, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP197484, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP197485, "", 0);
STRING_LITERAL(TMP197486, "dot", 3);
TY52008* Gdotgraph_186015;
extern TNimType* NTI186012; /* PGen */
extern TNimType* NTI186010; /* TGen */
extern TY11396 Gch_11414;
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405) {
NI Result_8007;
Result_8007 = 0;
(*Memloc_3404) += X_3405;
Result_8007 = (*Memloc_3404);
return Result_8007;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11816)(TY11002* C_11818) {
NIM_BOOL Result_11819;
Result_11819 = 0;
Result_11819 = !((((*(*C_11818).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11819;
}
static N_INLINE(void, Rtladdcycleroot_12452)(TY11002* C_12454) {
Incl_11280(&Gch_11414.Cycleroots, C_12454);
}
static N_INLINE(void, Incref_13402)(TY11002* C_13404) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3401(&(*C_13404).Refcount, 8);
LOC3 = Canbecycleroot_11816(C_13404);
if (!LOC3) goto LA4;
Rtladdcycleroot_12452(C_13404);
LA4: ;
}
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814) {
TY11002* Result_11815;
Result_11815 = 0;
Result_11815 = ((TY11002*) ((NI64)((NU64)(((NI) (Usr_11814))) - (NU64)(((NI) (((NI)sizeof(TY11002))))))));
return Result_11815;
}
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410) {
NI Result_8206;
Result_8206 = 0;
(*Memloc_3409) -= X_3410;
Result_8206 = (*Memloc_3409);
return Result_8206;
}
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803) {
Addzct_11801(&Gch_11414.Zct, C_12803);
}
static N_INLINE(void, Decref_13201)(TY11002* C_13203) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3406(&(*C_13203).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12801(C_13203);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11816(C_13203);
if (!LOC5) goto LA6;
Rtladdcycleroot_12452(C_13203);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13414, void* Src_13415) {
TY11002* LOC4;
TY11002* LOC8;
if (!!((Src_13415 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11812(Src_13415);
Incref_13402(LOC4);
LA2: ;
if (!!(((*Dest_13414) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11812((*Dest_13414));
Decref_13201(LOC8);
LA6: ;
(*Dest_13414) = Src_13415;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419) {
TY11002* C_13420;
NI LOC4;
TY11002* C_13422;
NI LOC9;
if (!!((Src_13419 == NIM_NIL))) goto LA2;
C_13420 = 0;
C_13420 = Usrtocell_11812(Src_13419);
LOC4 = Atomicinc_3401(&(*C_13420).Refcount, 8);
LA2: ;
if (!!(((*Dest_13418) == NIM_NIL))) goto LA6;
C_13422 = 0;
C_13422 = Usrtocell_11812((*Dest_13418));
LOC9 = Atomicdec_3406(&(*C_13422).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12801(C_13422);
LA10: ;
LA6: ;
(*Dest_13418) = Src_13419;
}
N_NIMCALL(TY105002*, Myopen_186126)(TY55548* Module_186128, NimStringDesc* Filename_186129) {
TY105002* Result_186130;
TY186010* G_186131;
Result_186130 = 0;
G_186131 = 0;
G_186131 = (TY186010*) newObj(NTI186012, sizeof(TY186010));
(*G_186131).Sup.Sup.m_type = NTI186010;
asgnRef((void**) &(*G_186131).Module, Module_186128);
asgnRefNoCycle((void**) &(*G_186131).Filename, copyString(Filename_186129));
Result_186130 = &G_186131->Sup;
return Result_186130;
}
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806) {
NI Result_56886;
Result_56886 = 0;
if (!(*N_55806).KindU.S6.Sons == 0) goto LA2;
Result_56886 = 0;
goto LA1;
LA2: ;
Result_56886 = (*N_55806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_56886;
}
N_NIMCALL(void, Adddependencyaux_186016)(NimStringDesc* Importing_186018, NimStringDesc* Imported_186019) {
TY175845 LOC1;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = Torope_52046(Importing_186018);
LOC1[1] = Torope_52046(Imported_186019);
Appf_52071(&Gdotgraph_186015, ((NimStringDesc*) &TMP197483), LOC1, 2);
}
N_NIMCALL(TY55526*, Adddotdependency_186025)(TY105002* C_186027, TY55526* N_186028) {
TY55526* Result_186029;
TY186010* G_186041;
NI I_186065;
NI HEX3Atmp_186113;
NI LOC4;
NI Res_186115;
NimStringDesc* Imported_186078;
NimStringDesc* LOC6;
TY38661 LOC7;
NimStringDesc* Imported_186091;
NimStringDesc* LOC8;
TY38661 LOC9;
NI I_186100;
NI HEX3Atmp_186116;
NI LOC10;
NI Res_186118;
TY55526* LOC12;
Result_186029 = 0;
Result_186029 = N_186028;
if (!(N_186028 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
G_186041 = 0;
G_186041 = ((TY186010*) (C_186027));
switch ((*N_186028).Kind) {
case ((NU8) 102):
I_186065 = 0;
HEX3Atmp_186113 = 0;
LOC4 = Sonslen_55804(N_186028);
HEX3Atmp_186113 = (NI64)(LOC4 - 1);
Res_186115 = 0;
Res_186115 = 0;
while (1) {
if (!(Res_186115 <= HEX3Atmp_186113)) goto LA5;
I_186065 = Res_186115;
Imported_186078 = 0;
LOC6 = 0;
LOC6 = Getmodulefile_110013((*N_186028).KindU.S6.Sons->data[I_186065]);
memset((void*)&LOC7, 0, sizeof(LOC7));
nossplitFile(LOC6, &LOC7);
Imported_186078 = copyString(LOC7.Name);
Adddependencyaux_186016((*(*(*G_186041).Module).Name).S, Imported_186078);
Res_186115 += 1;
} LA5: ;
break;
case ((NU8) 103):
Imported_186091 = 0;
LOC8 = 0;
LOC8 = Getmodulefile_110013((*N_186028).KindU.S6.Sons->data[0]);
memset((void*)&LOC9, 0, sizeof(LOC9));
nossplitFile(LOC8, &LOC9);
Imported_186091 = copyString(LOC9.Name);
Adddependencyaux_186016((*(*(*G_186041).Module).Name).S, Imported_186091);
break;
case ((NU8) 101):
case ((NU8) 99):
case ((NU8) 106):
case ((NU8) 107):
I_186100 = 0;
HEX3Atmp_186116 = 0;
LOC10 = Sonslen_55804(N_186028);
HEX3Atmp_186116 = (NI64)(LOC10 - 1);
Res_186118 = 0;
Res_186118 = 0;
while (1) {
if (!(Res_186118 <= HEX3Atmp_186116)) goto LA11;
I_186100 = Res_186118;
LOC12 = 0;
LOC12 = Adddotdependency_186025(C_186027, (*N_186028).KindU.S6.Sons->data[I_186100]);
Res_186118 += 1;
} LA11: ;
break;
default:
break;
}
BeforeRet: ;
return Result_186029;
}
N_NIMCALL(TY105006, Gendependpass_186004)(void) {
TY105006 Result_186149;
memset((void*)&Result_186149, 0, sizeof(Result_186149));
Initpass_105031(&Result_186149);
Result_186149.Open = Myopen_186126;
Result_186149.Process = Adddotdependency_186025;
return Result_186149;
}
N_NIMCALL(void, Generatedot_186006)(NimStringDesc* Project_186008) {
TY175845 LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
TY52008* LOC4;
NimStringDesc* LOC5;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC2 = 0;
LOC2 = nosextractFilename(Project_186008);
LOC3 = 0;
LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP197485));
LOC1[0] = Torope_52046(LOC3);
LOC1[1] = Gdotgraph_186015;
LOC4 = 0;
LOC4 = Ropef_52066(((NimStringDesc*) &TMP197484), LOC1, 2);
LOC5 = 0;
LOC5 = nosChangeFileExt(Project_186008, ((NimStringDesc*) &TMP197486));
Writerope_52055(LOC4, LOC5);
}
N_NOINLINE(void, dependsInit)(void) {
}

