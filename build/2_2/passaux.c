/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY105006 TY105006;
typedef struct TY105002 TY105002;
typedef struct TY55548 TY55548;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY93031 TY93031;
typedef struct TY55526 TY55526;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55552 TY55552;
typedef struct TY54011 TY54011;
typedef struct TY47539 TY47539;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY55520 TY55520;
typedef struct TY11002 TY11002;
typedef struct TY11018 TY11018;
typedef struct TY11396 TY11396;
typedef struct TY11014 TY11014;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
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
struct TNimObject {
TNimType* m_type;
};
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY47539 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY105002 {
  TNimObject Sup;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY9014[8];
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
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
N_NIMCALL(TY105002*, Verboseopen_185008)(TY55548* S_185010, NimStringDesc* Filename_185011);
N_NIMCALL(void, Rawmessage_47560)(NU8 Msg_47562, NimStringDesc* Arg_47563);
N_NIMCALL(TY55526*, Verboseprocess_185017)(TY105002* Context_185019, TY55526* N_185020);
N_NIMCALL(void, Internalerror_47578)(NimStringDesc* Errmsg_47580);
N_NIMCALL(void, Limessage_47569)(TY47539 Info_47571, NU8 Msg_47572, NimStringDesc* Arg_47573);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19603);
N_NIMCALL(TY55526*, Cleanup_185041)(TY105002* C_185043, TY55526* N_185044);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(TY55548*, Getmodule_60203)(TY55548* S_60205);
N_NIMCALL(NIM_BOOL, Astneeded_105041)(TY55548* S_105043);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803);
N_NOINLINE(void, Addzct_11801)(TY11018* S_11804, TY11002* C_11805);
STRING_LITERAL(TMP195918, "logpass: context is not nil", 27);
extern NI Gverbosity_46085;
extern NI Gid_55693;
extern NU32 Gglobaloptions_46079;
extern TY11396 Gch_11414;
N_NIMCALL(TY105002*, Verboseopen_185008)(TY55548* S_185010, NimStringDesc* Filename_185011) {
TY105002* Result_185012;
Result_185012 = 0;
Result_185012 = NIM_NIL;
if (!(0 < Gverbosity_46085)) goto LA2;
Rawmessage_47560(((NU8) 232), (*(*S_185010).Name).S);
LA2: ;
return Result_185012;
}
N_NIMCALL(TY55526*, Verboseprocess_185017)(TY105002* Context_185019, TY55526* N_185020) {
TY55526* Result_185021;
NimStringDesc* LOC7;
Result_185021 = 0;
Result_185021 = N_185020;
if (!!((Context_185019 == NIM_NIL))) goto LA2;
Internalerror_47578(((NimStringDesc*) &TMP195918));
LA2: ;
if (!(Gverbosity_46085 == 3)) goto LA5;
LOC7 = 0;
LOC7 = nimIntToStr(Gid_55693);
Limessage_47569((*N_185020).Info, ((NU8) 232), LOC7);
LA5: ;
return Result_185021;
}
N_NIMCALL(TY105006, Verbosepass_185004)(void) {
TY105006 Result_185039;
memset((void*)&Result_185039, 0, sizeof(Result_185039));
Initpass_105031(&Result_185039);
Result_185039.Open = Verboseopen_185008;
Result_185039.Process = Verboseprocess_185017;
return Result_185039;
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
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814) {
TY11002* Result_11815;
Result_11815 = 0;
Result_11815 = ((TY11002*) ((NI64)((NU64)(((NI) (Usr_11814))) - (NU64)(((NI) (((NI)sizeof(TY11002))))))));
return Result_11815;
}
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405) {
NI Result_8007;
Result_8007 = 0;
(*Memloc_3404) += X_3405;
Result_8007 = (*Memloc_3404);
return Result_8007;
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
N_NIMCALL(TY55526*, Cleanup_185041)(TY105002* C_185043, TY55526* N_185044) {
TY55526* Result_185045;
TY55548* S_185046;
NI I_185081;
NI HEX3Atmp_185162;
NI LOC4;
NI Res_185164;
TY55526* LOC6;
NIM_BOOL LOC11;
TY55548* LOC12;
NIM_BOOL LOC14;
Result_185045 = 0;
S_185046 = 0;
Result_185045 = N_185044;
if (!((Gglobaloptions_46079 &(1<<((((NU8) 4))&31)))!=0)) goto LA2;
goto BeforeRet;
LA2: ;
switch ((*N_185044).Kind) {
case ((NU8) 101):
I_185081 = 0;
HEX3Atmp_185162 = 0;
LOC4 = Sonslen_55804(N_185044);
HEX3Atmp_185162 = (NI64)(LOC4 - 1);
Res_185164 = 0;
Res_185164 = 0;
while (1) {
if (!(Res_185164 <= HEX3Atmp_185162)) goto LA5;
I_185081 = Res_185164;
LOC6 = 0;
LOC6 = Cleanup_185041(C_185043, (*N_185044).KindU.S6.Sons->data[I_185081]);
Res_185164 += 1;
} LA5: ;
break;
case ((NU8) 69):
case ((NU8) 70):
if (!((*(*N_185044).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA8;
S_185046 = (*(*N_185044).KindU.S6.Sons->data[0]).KindU.S4.Sym;
LOC12 = 0;
LOC12 = Getmodule_60203(S_185046);
LOC11 = !((((*LOC12).Flags &(1<<((((NU8) 28))&31)))!=0));
if (!(LOC11)) goto LA13;
LOC14 = Astneeded_105041(S_185046);
LOC11 = !(LOC14);
LA13: ;
if (!LOC11) goto LA15;
asgnRefNoCycle((void**) &(*(*S_185046).Ast).KindU.S6.Sons->data[4], NIM_NIL);
LA15: ;
LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_185045;
}
N_NIMCALL(TY105006, Cleanuppass_185006)(void) {
TY105006 Result_185167;
memset((void*)&Result_185167, 0, sizeof(Result_185167));
Initpass_105031(&Result_185167);
Result_185167.Process = Cleanup_185041;
Result_185167.Close = Cleanup_185041;
return Result_185167;
}
N_NOINLINE(void, passauxInit)(void) {
}

