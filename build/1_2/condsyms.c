/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY51530 TY51530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51528 TY51528;
typedef struct TY51548 TY51548;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY50011 TY50011;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TY51552 TY51552;
typedef struct TY43539 TY43539;
typedef struct TY51526 TY51526;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY47448 TY47448;
typedef struct TY47036 TY47036;
typedef struct TY56076 TY56076;
typedef struct TY51550 TY51550;
typedef struct TY51520 TY51520;
typedef struct TY39013 TY39013;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY43539 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY51540 {
NU8 K;
NU8 S;
NU8 Flags;
TY51552* T;
TY48008* R;
NI A;
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
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11194 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11196 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
TY11194 Stat;
};
struct TY47448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY47448 TY47461[12];
typedef NimStringDesc* TY47457[2];
struct TY47036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY47036 TY47054[21];
struct TY56076 {
NI H;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
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
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initstrtable_51747)(TY51530* X_51750);
N_NIMCALL(void, Definesymbol_60053)(NimStringDesc* Symbol_60055);
N_NIMCALL(TY50011*, Getident_50016)(NimStringDesc* Identifier_50018);
N_NIMCALL(TY51548*, Strtableget_56066)(TY51530* T_56068, TY50011* Name_56069);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
N_NIMCALL(void, objectInit)(void* Dest_19676, TNimType* Typ_19677);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, Strtableadd_56061)(TY51530* T_56064, TY51548* N_56065);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_24540);
N_NIMCALL(TY51548*, Inittabiter_56078)(TY56076* Ti_56081, TY51530* Tab_56082);
N_NIMCALL(void, Messageout_43557)(NimStringDesc* S_43559);
N_NIMCALL(TY51548*, Nextiter_56083)(TY56076* Ti_56086, TY51530* Tab_56087);
STRING_LITERAL(TMP192610, "nimrod", 6);
STRING_LITERAL(TMP192611, "x86", 3);
STRING_LITERAL(TMP192612, "itanium", 7);
STRING_LITERAL(TMP192613, "x8664", 5);
STRING_LITERAL(TMP192614, "msdos", 5);
STRING_LITERAL(TMP192615, "mswindows", 9);
STRING_LITERAL(TMP192616, "win32", 5);
STRING_LITERAL(TMP192617, "unix", 4);
STRING_LITERAL(TMP192618, "posix", 5);
STRING_LITERAL(TMP192619, "sunos", 5);
STRING_LITERAL(TMP192620, "bsd", 3);
STRING_LITERAL(TMP192621, "macintosh", 9);
STRING_LITERAL(TMP192622, "cpu", 3);
extern NIM_CONST TY47461 Cpu_47460;
extern NIM_CONST TY47457 Endiantostr_47456;
extern NIM_CONST TY47054 Os_47053;
STRING_LITERAL(TMP192671, "-- List of currently defined symbols --", 39);
STRING_LITERAL(TMP192672, "-- End of list --", 17);
TY51530 Gsymbols_60001;
extern TNimType* NTI51530; /* TStrTable */
extern TNimType* NTI51524; /* PSym */
extern TNimType* NTI51548; /* TSym */
extern TY11196 Gch_11214;
extern NU8 Targetcpu_47560;
extern NU8 Targetos_47562;
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11214.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3401(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3406(&(*C_13222).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(void, Definesymbol_60053)(NimStringDesc* Symbol_60055) {
TY50011* I_60069;
TY51548* Sym_60070;
I_60069 = 0;
I_60069 = Getident_50016(Symbol_60055);
Sym_60070 = 0;
Sym_60070 = Strtableget_56066(&Gsymbols_60001, I_60069);
if (!(Sym_60070 == NIM_NIL)) goto LA2;
Sym_60070 = (TY51548*) newObj(NTI51524, sizeof(TY51548));
objectInit(Sym_60070, NTI51548);
(*Sym_60070).Kind = ((NU8) 1);
asgnRefNoCycle((void**) &(*Sym_60070).Name, I_60069);
Strtableadd_56061(&Gsymbols_60001, Sym_60070);
LA2: ;
(*Sym_60070).Position = 1;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((NI32) ((NI64)((NI64)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
N_NIMCALL(void, Initdefines_60049)(void) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Initstrtable_51747(&Gsymbols_60001);
Definesymbol_60053(((NimStringDesc*) &TMP192610));
switch (Targetcpu_47560) {
case ((NU8) 1):
Definesymbol_60053(((NimStringDesc*) &TMP192611));
break;
case ((NU8) 7):
Definesymbol_60053(((NimStringDesc*) &TMP192612));
break;
case ((NU8) 8):
Definesymbol_60053(((NimStringDesc*) &TMP192613));
break;
default:
break;
}
switch (Targetos_47562) {
case ((NU8) 1):
Definesymbol_60053(((NimStringDesc*) &TMP192614));
break;
case ((NU8) 2):
Definesymbol_60053(((NimStringDesc*) &TMP192615));
Definesymbol_60053(((NimStringDesc*) &TMP192616));
break;
case ((NU8) 4):
case ((NU8) 5):
case ((NU8) 6):
case ((NU8) 8):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 16):
case ((NU8) 12):
Definesymbol_60053(((NimStringDesc*) &TMP192617));
Definesymbol_60053(((NimStringDesc*) &TMP192618));
break;
case ((NU8) 7):
Definesymbol_60053(((NimStringDesc*) &TMP192619));
Definesymbol_60053(((NimStringDesc*) &TMP192617));
Definesymbol_60053(((NimStringDesc*) &TMP192618));
break;
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
Definesymbol_60053(((NimStringDesc*) &TMP192617));
Definesymbol_60053(((NimStringDesc*) &TMP192620));
Definesymbol_60053(((NimStringDesc*) &TMP192618));
break;
case ((NU8) 18):
Definesymbol_60053(((NimStringDesc*) &TMP192621));
break;
case ((NU8) 19):
Definesymbol_60053(((NimStringDesc*) &TMP192621));
Definesymbol_60053(((NimStringDesc*) &TMP192617));
Definesymbol_60053(((NimStringDesc*) &TMP192618));
break;
default:
break;
}
LOC1 = 0;
LOC2 = 0;
LOC2 = nimIntToStr(Cpu_47460[(Targetcpu_47560)-1].Bit);
LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &TMP192622));
appendString(LOC1, LOC2);
Definesymbol_60053(LOC1);
LOC3 = 0;
LOC3 = nsuNormalize(Endiantostr_47456[(Cpu_47460[(Targetcpu_47560)-1].Endian)-0]);
Definesymbol_60053(LOC3);
Definesymbol_60053(Cpu_47460[(Targetcpu_47560)-1].Name);
Definesymbol_60053(Os_47053[(Targetos_47562)-1].Name);
}
N_NIMCALL(void, Undefsymbol_60056)(NimStringDesc* Symbol_60058) {
TY51548* Sym_60101;
TY50011* LOC1;
Sym_60101 = 0;
LOC1 = 0;
LOC1 = Getident_50016(Symbol_60058);
Sym_60101 = Strtableget_56066(&Gsymbols_60001, LOC1);
if (!!((Sym_60101 == NIM_NIL))) goto LA3;
(*Sym_60101).Position = 0;
LA3: ;
}
N_NIMCALL(void, Listsymbols_60062)(void) {
TY56076 It_60133;
TY51548* S_60135;
memset((void*)&It_60133, 0, sizeof(It_60133));
S_60135 = 0;
S_60135 = Inittabiter_56078(&It_60133, &Gsymbols_60001);
Messageout_43557(((NimStringDesc*) &TMP192671));
while (1) {
if (!!((S_60135 == NIM_NIL))) goto LA1;
if (!((*S_60135).Position == 1)) goto LA3;
Messageout_43557((*(*S_60135).Name).S);
LA3: ;
S_60135 = Nextiter_56083(&It_60133, &Gsymbols_60001);
} LA1: ;
Messageout_43557(((NimStringDesc*) &TMP192672));
}
N_NIMCALL(NIM_BOOL, Isdefined_60059)(TY50011* Symbol_60061) {
NIM_BOOL Result_60116;
TY51548* Sym_60117;
NIM_BOOL LOC1;
Result_60116 = 0;
Sym_60117 = 0;
Sym_60117 = Strtableget_56066(&Gsymbols_60001, Symbol_60061);
LOC1 = !((Sym_60117 == NIM_NIL));
if (!(LOC1)) goto LA2;
LOC1 = ((*Sym_60117).Position == 1);
LA2: ;
Result_60116 = LOC1;
return Result_60116;
}
N_NIMCALL(NI, Countdefinedsymbols_60064)(void) {
NI Result_60152;
TY56076 It_60153;
TY51548* S_60155;
Result_60152 = 0;
memset((void*)&It_60153, 0, sizeof(It_60153));
S_60155 = 0;
S_60155 = Inittabiter_56078(&It_60153, &Gsymbols_60001);
Result_60152 = 0;
while (1) {
if (!!((S_60155 == NIM_NIL))) goto LA1;
if (!((*S_60155).Position == 1)) goto LA3;
Result_60152 += 1;
LA3: ;
S_60155 = Nextiter_56083(&It_60153, &Gsymbols_60001);
} LA1: ;
return Result_60152;
}
N_NOINLINE(void, condsymsInit)(void) {
Gsymbols_60001.m_type = NTI51530;
}

