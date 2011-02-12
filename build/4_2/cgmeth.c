/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY159165 TY159165;
typedef struct TY55528 TY55528;
typedef struct TY55548 TY55548;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY11002 TY11002;
typedef struct TY11018 TY11018;
typedef struct TY11396 TY11396;
typedef struct TY11014 TY11014;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
typedef struct TY55552 TY55552;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TY54011 TY54011;
typedef struct TY47539 TY47539;
typedef struct TY55530 TY55530;
typedef struct TY55526 TY55526;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY55550 TY55550;
typedef struct TY55520 TY55520;
typedef struct TY55901 TY55901;
typedef struct TY55897 TY55897;
typedef struct TY55899 TY55899;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
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
typedef TY55548* TY159290[1];
struct TY55901 {
NI Counter;
NI Max;
TY55897* Head;
TY55899* Data;
};
typedef NI TY9014[8];
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
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
struct TY55897 {
TY55897* Next;
NI Key;
TY9014 Bits;
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY159165 {
  TGenericSeq Sup;
  TY55528* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55899 {
  TGenericSeq Sup;
  TY55897* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14604, NI Len_14605);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803);
N_NOINLINE(void, Addzct_11801)(TY11018* S_11804, TY11002* C_11805);
N_NIMCALL(NIM_BOOL, Samemethodbucket_159167)(TY55548* A_159169, TY55548* B_159170);
static N_INLINE(NI, Sonslen_55807)(TY55552* N_55809);
N_NIMCALL(NIM_BOOL, Sametypeornil_97052)(TY55552* A_97054, TY55552* B_97055);
N_NIMCALL(TY55552*, Skiptypes_97087)(TY55552* T_97089, NU64 Kinds_97090);
N_NIMCALL(NIM_BOOL, Sametype_97048)(TY55552* X_97050, TY55552* Y_97051);
N_NIMCALL(NI, Inheritancediff_97121)(TY55552* A_97123, TY55552* B_97124);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_19042, NI Elemsize_19043);
static N_INLINE(void, asgnRef)(void** Dest_13414, void* Src_13415);
static N_INLINE(void, Incref_13402)(TY11002* C_13404);
static N_INLINE(NIM_BOOL, Canbecycleroot_11816)(TY11002* C_11818);
static N_INLINE(void, Rtladdcycleroot_12452)(TY11002* C_12454);
N_NOINLINE(void, Incl_11280)(TY11014* S_11283, TY11002* Cell_11284);
static N_INLINE(void, Decref_13201)(TY11002* C_13203);
N_NIMCALL(void, Addson_55824)(TY55526* Father_55826, TY55526* Son_55827);
static N_INLINE(TY55526*, Lastson_55810)(TY55526* N_55812);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(void, genericSeqAssign)(void* Dest_19852, void* Src_19853, TNimType* Mt_19854);
N_NIMCALL(TY55548*, Copysym_55776)(TY55548* S_55778, NIM_BOOL Keepid_55779);
N_NIMCALL(TY55552*, Copytype_55771)(TY55552* T_55773, TY55548* Owner_55774, NIM_BOOL Keepid_55775);
N_NIMCALL(TY55526*, Copytree_55859)(TY55526* Src_55861);
N_NIMCALL(TY55526*, Newsymnode_55735)(TY55548* Sym_55737);
N_NIMCALL(TY55526*, Genconv_159012)(TY55526* N_159014, TY55552* D_159015, NIM_BOOL Downcast_159016);
N_NIMCALL(void, Internalerror_47574)(TY47539 Info_47576, NimStringDesc* Errmsg_47577);
N_NIMCALL(TY55526*, Newnodeit_55742)(NU8 Kind_55744, TY47539 Info_55745, TY55552* Typ_55746);
N_NIMCALL(TY55526*, Newnode_55711)(NU8 Kind_55713);
N_NIMCALL(void, Intsetinit_55925)(TY55901* S_55928);
N_NIMCALL(NIM_BOOL, Relevantcol_159393)(TY55528* Methods_159395, NI Col_159396);
N_NIMCALL(void, Intsetincl_55915)(TY55901* S_55918, NI Key_55919);
N_NIMCALL(void, Sortbucket_159443)(TY55528** A_159446, TY55901* Relevantcols_159447);
N_NIMCALL(NI, Cmpsignatures_159420)(TY55548* A_159422, TY55548* B_159423, TY55901* Relevantcols_159424);
N_NIMCALL(NIM_BOOL, Intsetcontains_55911)(TY55901* S_55913, NI Key_55914);
N_NIMCALL(TY55548*, Gendispatcher_159486)(TY55528* Methods_159488, TY55901* Relevantcols_159489);
N_NIMCALL(TY55526*, Newnodei_55738)(NU8 Kind_55740, TY47539 Info_55741);
N_NIMCALL(TY55548*, Getsyssym_102024)(NimStringDesc* Name_102026);
N_NIMCALL(TY55552*, Getsystype_102008)(NU8 Kind_102010);
STRING_LITERAL(TMP196221, "cgmeth.genConv", 14);
STRING_LITERAL(TMP196222, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP196223, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP196759, "and", 3);
STRING_LITERAL(TMP196760, "is", 2);
TY159165* Gmethods_159166;
extern TNimType* NTI159165; /* seq[TSymSeq] */
extern TY11396 Gch_11414;
extern TNimType* NTI55528; /* TSymSeq */
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
static N_INLINE(NI, Sonslen_55807)(TY55552* N_55809) {
NI Result_56750;
Result_56750 = 0;
if (!(*N_55809).Sons == 0) goto LA2;
Result_56750 = 0;
goto LA1;
LA2: ;
Result_56750 = (*N_55809).Sons->Sup.len;
LA1: ;
return Result_56750;
}
N_NIMCALL(NIM_BOOL, Samemethodbucket_159167)(TY55548* A_159169, TY55548* B_159170) {
NIM_BOOL Result_159171;
TY55552* Aa_159172;
TY55552* Bb_159173;
NI LOC5;
NI LOC6;
NIM_BOOL LOC10;
NI I_159186;
NI HEX3Atmp_159232;
NI LOC13;
NI Res_159234;
NIM_BOOL LOC17;
NIM_BOOL LOC22;
NIM_BOOL LOC24;
NIM_BOOL LOC25;
NI LOC28;
Result_159171 = 0;
Aa_159172 = 0;
Bb_159173 = 0;
Result_159171 = NIM_FALSE;
if (!!(((*(*A_159169).Name).Sup.Id == (*(*B_159170).Name).Sup.Id))) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = Sonslen_55807((*A_159169).Typ);
LOC6 = Sonslen_55807((*B_159170).Typ);
if (!!((LOC5 == LOC6))) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sametypeornil_97052((*(*A_159169).Typ).Sons->data[0], (*(*B_159170).Typ).Sons->data[0]);
if (!!(LOC10)) goto LA11;
goto BeforeRet;
LA11: ;
I_159186 = 0;
HEX3Atmp_159232 = 0;
LOC13 = Sonslen_55807((*A_159169).Typ);
HEX3Atmp_159232 = (NI64)(LOC13 - 1);
Res_159234 = 0;
Res_159234 = 1;
while (1) {
if (!(Res_159234 <= HEX3Atmp_159232)) goto LA14;
I_159186 = Res_159234;
Aa_159172 = (*(*A_159169).Typ).Sons->data[I_159186];
Bb_159173 = (*(*B_159170).Typ).Sons->data[I_159186];
while (1) {
Aa_159172 = Skiptypes_97087(Aa_159172, 2048);
Bb_159173 = Skiptypes_97087(Bb_159173, 2048);
LOC17 = ((*Aa_159172).Kind == (*Bb_159173).Kind);
if (!(LOC17)) goto LA18;
LOC17 = ((14680064 &(IL64(1)<<(((*Aa_159172).Kind)&IL64(63))))!=0);
LA18: ;
if (!LOC17) goto LA19;
Aa_159172 = (*Aa_159172).Sons->data[0];
Bb_159173 = (*Bb_159173).Sons->data[0];
goto LA16;
LA19: ;
goto LA15;
LA16: ;
} LA15: ;
LOC22 = Sametype_97048(Aa_159172, Bb_159173);
if (LOC22) goto LA23;
LOC25 = ((*Aa_159172).Kind == ((NU8) 17));
if (!(LOC25)) goto LA26;
LOC25 = ((*Bb_159173).Kind == ((NU8) 17));
LA26: ;
LOC24 = LOC25;
if (!(LOC24)) goto LA27;
LOC28 = Inheritancediff_97121(Bb_159173, Aa_159172);
LOC24 = (LOC28 < 0);
LA27: ;
LOC22 = LOC24;
LA23: ;
if (!LOC22) goto LA29;
goto LA21;
LA29: ;
goto BeforeRet;
LA21: ;
Res_159234 += 1;
} LA14: ;
Result_159171 = NIM_TRUE;
BeforeRet: ;
return Result_159171;
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
static N_INLINE(TY55526*, Lastson_55810)(TY55526* N_55812) {
TY55526* Result_57825;
NI LOC1;
Result_57825 = 0;
LOC1 = Sonslen_55804(N_55812);
Result_57825 = (*N_55812).KindU.S6.Sons->data[(NI64)(LOC1 - 1)];
return Result_57825;
}
N_NIMCALL(void, Methoddef_159004)(TY55548* S_159006) {
NI L_159238;
NI Q_159239;
TY55548* Disp_159240;
NI I_159259;
NI HEX3Atmp_159390;
NI Res_159392;
NIM_BOOL LOC3;
TY55526* LOC6;
TY55528* LOC7;
TY159290 LOC8;
TY55526* LOC15;
L_159238 = 0;
Q_159239 = 0;
Disp_159240 = 0;
L_159238 = Gmethods_159166->Sup.len;
I_159259 = 0;
HEX3Atmp_159390 = 0;
HEX3Atmp_159390 = (NI64)(L_159238 - 1);
Res_159392 = 0;
Res_159392 = 0;
while (1) {
if (!(Res_159392 <= HEX3Atmp_159390)) goto LA1;
I_159259 = Res_159392;
LOC3 = Samemethodbucket_159167(Gmethods_159166->data[I_159259]->data[0], S_159006);
if (!LOC3) goto LA4;
Gmethods_159166->data[I_159259] = (TY55528*) incrSeq(&(Gmethods_159166->data[I_159259])->Sup, sizeof(TY55548*));
asgnRef((void**) &Gmethods_159166->data[I_159259]->data[Gmethods_159166->data[I_159259]->Sup.len-1], S_159006);
LOC6 = 0;
LOC6 = Lastson_55810((*Gmethods_159166->data[I_159259]->data[0]).Ast);
Addson_55824((*S_159006).Ast, LOC6);
goto BeforeRet;
LA4: ;
Res_159392 += 1;
} LA1: ;
LOC7 = 0;
LOC7 = (TY55528*) newSeq(NTI55528, 1);
memset((void*)&LOC8, 0, sizeof(LOC8));
LOC8[0] = S_159006;
asgnRef((void**) &LOC7->data[0], LOC8[0]);
Gmethods_159166 = (TY159165*) incrSeq(&(Gmethods_159166)->Sup, sizeof(TY55528*));
genericSeqAssign(&Gmethods_159166->data[Gmethods_159166->Sup.len-1], LOC7, NTI55528);
Disp_159240 = Copysym_55776(S_159006, NIM_FALSE);
asgnRef((void**) &(*Disp_159240).Typ, Copytype_55771((*Disp_159240).Typ, (*(*Disp_159240).Typ).Owner, NIM_FALSE));
if (!((*(*Disp_159240).Typ).Callconv == ((NU8) 5))) goto LA10;
(*(*Disp_159240).Typ).Callconv = ((NU8) 0);
LA10: ;
asgnRefNoCycle((void**) &(*Disp_159240).Ast, Copytree_55859((*S_159006).Ast));
asgnRefNoCycle((void**) &(*(*Disp_159240).Ast).KindU.S6.Sons->data[4], NIM_NIL);
if (!!(((*(*S_159006).Typ).Sons->data[0] == NIM_NIL))) goto LA13;
asgnRef((void**) &(*(*(*Disp_159240).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym, Copysym_55776((*(*(*S_159006).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym, NIM_FALSE));
LA13: ;
LOC15 = 0;
LOC15 = Newsymnode_55735(Disp_159240);
Addson_55824((*S_159006).Ast, LOC15);
BeforeRet: ;
}
N_NIMCALL(TY55526*, Genconv_159012)(TY55526* N_159014, TY55552* D_159015, NIM_BOOL Downcast_159016) {
TY55526* Result_159017;
TY55552* Dest_159018;
TY55552* Source_159019;
NI Diff_159020;
NIM_BOOL LOC2;
Result_159017 = 0;
Dest_159018 = 0;
Source_159019 = 0;
Diff_159020 = 0;
Dest_159018 = Skiptypes_97087(D_159015, 14723072);
Source_159019 = Skiptypes_97087((*N_159014).Typ, 14723072);
LOC2 = ((*Source_159019).Kind == ((NU8) 17));
if (!(LOC2)) goto LA3;
LOC2 = ((*Dest_159018).Kind == ((NU8) 17));
LA3: ;
if (!LOC2) goto LA4;
Diff_159020 = Inheritancediff_97121(Dest_159018, Source_159019);
if (!(Diff_159020 == IL64(9223372036854775807))) goto LA7;
Internalerror_47574((*N_159014).Info, ((NimStringDesc*) &TMP196221));
LA7: ;
if (!(Diff_159020 < 0)) goto LA10;
Result_159017 = Newnodeit_55742(((NU8) 56), (*N_159014).Info, D_159015);
Addson_55824(Result_159017, N_159014);
if (!Downcast_159016) goto LA13;
Internalerror_47574((*N_159014).Info, ((NimStringDesc*) &TMP196222));
LA13: ;
goto LA9;
LA10: ;
if (!(0 < Diff_159020)) goto LA15;
Result_159017 = Newnodeit_55742(((NU8) 55), (*N_159014).Info, D_159015);
Addson_55824(Result_159017, N_159014);
if (!!(Downcast_159016)) goto LA18;
Internalerror_47574((*N_159014).Info, ((NimStringDesc*) &TMP196223));
LA18: ;
goto LA9;
LA15: ;
Result_159017 = N_159014;
LA9: ;
goto LA1;
LA4: ;
Result_159017 = N_159014;
LA1: ;
return Result_159017;
}
N_NIMCALL(TY55526*, Methodcall_159007)(TY55526* N_159009) {
TY55526* Result_159052;
TY55548* Disp_159053;
TY55526* LOC1;
NI I_159137;
NI HEX3Atmp_159162;
NI LOC2;
NI Res_159164;
Result_159052 = 0;
Disp_159053 = 0;
Result_159052 = N_159009;
LOC1 = 0;
LOC1 = Lastson_55810((*(*(*Result_159052).KindU.S6.Sons->data[0]).KindU.S4.Sym).Ast);
Disp_159053 = (*LOC1).KindU.S4.Sym;
asgnRef((void**) &(*(*Result_159052).KindU.S6.Sons->data[0]).KindU.S4.Sym, Disp_159053);
I_159137 = 0;
HEX3Atmp_159162 = 0;
LOC2 = Sonslen_55804(Result_159052);
HEX3Atmp_159162 = (NI64)(LOC2 - 1);
Res_159164 = 0;
Res_159164 = 1;
while (1) {
if (!(Res_159164 <= HEX3Atmp_159162)) goto LA3;
I_159137 = Res_159164;
asgnRefNoCycle((void**) &(*Result_159052).KindU.S6.Sons->data[I_159137], Genconv_159012((*Result_159052).KindU.S6.Sons->data[I_159137], (*(*Disp_159053).Typ).Sons->data[I_159137], NIM_TRUE));
Res_159164 += 1;
} LA3: ;
return Result_159052;
}
N_NIMCALL(NIM_BOOL, Relevantcol_159393)(TY55528* Methods_159395, NI Col_159396) {
NIM_BOOL Result_159397;
TY55552* T_159398;
TY55552* LOC2;
NI I_159416;
NI HEX3Atmp_159417;
NI Res_159419;
NIM_BOOL LOC7;
Result_159397 = 0;
T_159398 = 0;
T_159398 = (*(*Methods_159395->data[0]).Typ).Sons->data[Col_159396];
Result_159397 = NIM_FALSE;
LOC2 = 0;
LOC2 = Skiptypes_97087(T_159398, 14682112);
if (!((*LOC2).Kind == ((NU8) 17))) goto LA3;
I_159416 = 0;
HEX3Atmp_159417 = 0;
HEX3Atmp_159417 = (Methods_159395->Sup.len-1);
Res_159419 = 0;
Res_159419 = 1;
while (1) {
if (!(Res_159419 <= HEX3Atmp_159417)) goto LA5;
I_159416 = Res_159419;
LOC7 = Sametype_97048((*(*Methods_159395->data[I_159416]).Typ).Sons->data[Col_159396], T_159398);
if (!!(LOC7)) goto LA8;
Result_159397 = NIM_TRUE;
goto BeforeRet;
LA8: ;
Res_159419 += 1;
} LA5: ;
LA3: ;
BeforeRet: ;
return Result_159397;
}
N_NIMCALL(NI, Cmpsignatures_159420)(TY55548* A_159422, TY55548* B_159423, TY55901* Relevantcols_159424) {
NI Result_159425;
NI D_159426;
TY55552* Aa_159427;
TY55552* Bb_159428;
NI Col_159437;
NI HEX3Atmp_159440;
NI LOC1;
NI Res_159442;
NIM_BOOL LOC4;
Result_159425 = 0;
D_159426 = 0;
Aa_159427 = 0;
Bb_159428 = 0;
Result_159425 = 0;
Col_159437 = 0;
HEX3Atmp_159440 = 0;
LOC1 = Sonslen_55807((*A_159422).Typ);
HEX3Atmp_159440 = (NI64)(LOC1 - 1);
Res_159442 = 0;
Res_159442 = 1;
while (1) {
if (!(Res_159442 <= HEX3Atmp_159440)) goto LA2;
Col_159437 = Res_159442;
LOC4 = Intsetcontains_55911(Relevantcols_159424, Col_159437);
if (!LOC4) goto LA5;
Aa_159427 = Skiptypes_97087((*(*A_159422).Typ).Sons->data[Col_159437], 14682112);
Bb_159428 = Skiptypes_97087((*(*B_159423).Typ).Sons->data[Col_159437], 14682112);
D_159426 = Inheritancediff_97121(Aa_159427, Bb_159428);
if (!!((D_159426 == IL64(9223372036854775807)))) goto LA8;
Result_159425 = D_159426;
goto BeforeRet;
LA8: ;
LA5: ;
Res_159442 += 1;
} LA2: ;
BeforeRet: ;
return Result_159425;
}
N_NIMCALL(void, Sortbucket_159443)(TY55528** A_159446, TY55901* Relevantcols_159447) {
NI N_159448;
NI J_159449;
NI H_159450;
TY55548* V_159451;
NI I_159474;
NI HEX3Atmp_159483;
NI Res_159485;
NI LOC8;
N_159448 = 0;
J_159449 = 0;
H_159450 = 0;
V_159451 = 0;
N_159448 = (*A_159446)->Sup.len;
H_159450 = 1;
while (1) {
H_159450 = (NI64)((NI64)(3 * H_159450) + 1);
if (!(N_159448 < H_159450)) goto LA3;
goto LA1;
LA3: ;
} LA1: ;
while (1) {
H_159450 = (NI64)(H_159450 / 3);
I_159474 = 0;
HEX3Atmp_159483 = 0;
HEX3Atmp_159483 = (NI64)(N_159448 - 1);
Res_159485 = 0;
Res_159485 = H_159450;
while (1) {
if (!(Res_159485 <= HEX3Atmp_159483)) goto LA6;
I_159474 = Res_159485;
V_159451 = (*A_159446)->data[I_159474];
J_159449 = I_159474;
while (1) {
LOC8 = Cmpsignatures_159420((*A_159446)->data[(NI64)(J_159449 - H_159450)], V_159451, Relevantcols_159447);
if (!(0 <= LOC8)) goto LA7;
asgnRef((void**) &(*A_159446)->data[J_159449], (*A_159446)->data[(NI64)(J_159449 - H_159450)]);
J_159449 = (NI64)(J_159449 - H_159450);
if (!(J_159449 < H_159450)) goto LA10;
goto LA7;
LA10: ;
} LA7: ;
asgnRef((void**) &(*A_159446)->data[J_159449], V_159451);
Res_159485 += 1;
} LA6: ;
if (!(H_159450 == 1)) goto LA13;
goto LA5;
LA13: ;
} LA5: ;
}
N_NIMCALL(TY55548*, Gendispatcher_159486)(TY55528* Methods_159488, TY55901* Relevantcols_159489) {
TY55548* Result_159490;
TY55526* Disp_159491;
TY55526* Cond_159492;
TY55526* Call_159493;
TY55526* Ret_159494;
TY55526* A_159495;
TY55526* Isn_159496;
TY55548* Base_159497;
TY55548* Curr_159498;
TY55548* Ands_159499;
TY55548* Iss_159500;
NI Paramlen_159501;
TY55526* LOC1;
NI Meth_159522;
NI HEX3Atmp_159653;
NI Res_159655;
NI Col_159531;
NI HEX3Atmp_159647;
NI Res_159649;
NIM_BOOL LOC5;
TY55552* LOC8;
TY55526* LOC9;
TY55526* LOC10;
TY55526* LOC11;
TY55552* LOC15;
TY55526* LOC16;
TY55526* LOC17;
NI Col_159575;
NI HEX3Atmp_159650;
NI Res_159652;
TY55526* LOC19;
TY55526* LOC20;
TY55526* LOC24;
Result_159490 = 0;
Disp_159491 = 0;
Cond_159492 = 0;
Call_159493 = 0;
Ret_159494 = 0;
A_159495 = 0;
Isn_159496 = 0;
Base_159497 = 0;
Curr_159498 = 0;
Ands_159499 = 0;
Iss_159500 = 0;
Paramlen_159501 = 0;
LOC1 = 0;
LOC1 = Lastson_55810((*Methods_159488->data[0]).Ast);
Base_159497 = (*LOC1).KindU.S4.Sym;
Result_159490 = Base_159497;
Paramlen_159501 = Sonslen_55807((*Base_159497).Typ);
Disp_159491 = Newnodei_55738(((NU8) 82), (*Base_159497).Info);
Ands_159499 = Getsyssym_102024(((NimStringDesc*) &TMP196759));
Iss_159500 = Getsyssym_102024(((NimStringDesc*) &TMP196760));
Meth_159522 = 0;
HEX3Atmp_159653 = 0;
HEX3Atmp_159653 = (Methods_159488->Sup.len-1);
Res_159655 = 0;
Res_159655 = 0;
while (1) {
if (!(Res_159655 <= HEX3Atmp_159653)) goto LA2;
Meth_159522 = Res_159655;
Curr_159498 = Methods_159488->data[Meth_159522];
Cond_159492 = NIM_NIL;
Col_159531 = 0;
HEX3Atmp_159647 = 0;
HEX3Atmp_159647 = (NI64)(Paramlen_159501 - 1);
Res_159649 = 0;
Res_159649 = 1;
while (1) {
if (!(Res_159649 <= HEX3Atmp_159647)) goto LA3;
Col_159531 = Res_159649;
LOC5 = Intsetcontains_55911(Relevantcols_159489, Col_159531);
if (!LOC5) goto LA6;
LOC8 = 0;
LOC8 = Getsystype_102008(((NU8) 1));
Isn_159496 = Newnodeit_55742(((NU8) 21), (*Base_159497).Info, LOC8);
LOC9 = 0;
LOC9 = Newsymnode_55735(Iss_159500);
Addson_55824(Isn_159496, LOC9);
LOC10 = 0;
LOC10 = Newsymnode_55735((*(*(*(*Base_159497).Typ).N).KindU.S6.Sons->data[Col_159531]).KindU.S4.Sym);
Addson_55824(Isn_159496, LOC10);
LOC11 = 0;
LOC11 = Newnodeit_55742(((NU8) 4), (*Base_159497).Info, (*(*Curr_159498).Typ).Sons->data[Col_159531]);
Addson_55824(Isn_159496, LOC11);
if (!!((Cond_159492 == NIM_NIL))) goto LA13;
LOC15 = 0;
LOC15 = Getsystype_102008(((NU8) 1));
A_159495 = Newnodeit_55742(((NU8) 21), (*Base_159497).Info, LOC15);
LOC16 = 0;
LOC16 = Newsymnode_55735(Ands_159499);
Addson_55824(A_159495, LOC16);
Addson_55824(A_159495, Cond_159492);
Addson_55824(A_159495, Isn_159496);
Cond_159492 = A_159495;
goto LA12;
LA13: ;
Cond_159492 = Isn_159496;
LA12: ;
LA6: ;
Res_159649 += 1;
} LA3: ;
Call_159493 = Newnodei_55738(((NU8) 21), (*Base_159497).Info);
LOC17 = 0;
LOC17 = Newsymnode_55735(Curr_159498);
Addson_55824(Call_159493, LOC17);
Col_159575 = 0;
HEX3Atmp_159650 = 0;
HEX3Atmp_159650 = (NI64)(Paramlen_159501 - 1);
Res_159652 = 0;
Res_159652 = 1;
while (1) {
if (!(Res_159652 <= HEX3Atmp_159650)) goto LA18;
Col_159575 = Res_159652;
LOC19 = 0;
LOC19 = Newsymnode_55735((*(*(*(*Base_159497).Typ).N).KindU.S6.Sons->data[Col_159575]).KindU.S4.Sym);
LOC20 = 0;
LOC20 = Genconv_159012(LOC19, (*(*Curr_159498).Typ).Sons->data[Col_159575], NIM_FALSE);
Addson_55824(Call_159493, LOC20);
Res_159652 += 1;
} LA18: ;
if (!!(((*(*Base_159497).Typ).Sons->data[0] == NIM_NIL))) goto LA22;
A_159495 = Newnodei_55738(((NU8) 63), (*Base_159497).Info);
LOC24 = 0;
LOC24 = Newsymnode_55735((*(*(*Base_159497).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym);
Addson_55824(A_159495, LOC24);
Addson_55824(A_159495, Call_159493);
Ret_159494 = Newnodei_55738(((NU8) 96), (*Base_159497).Info);
Addson_55824(Ret_159494, A_159495);
goto LA21;
LA22: ;
Ret_159494 = Call_159493;
LA21: ;
A_159495 = Newnodei_55738(((NU8) 76), (*Base_159497).Info);
Addson_55824(A_159495, Cond_159492);
Addson_55824(A_159495, Ret_159494);
Addson_55824(Disp_159491, A_159495);
Res_159655 += 1;
} LA2: ;
asgnRefNoCycle((void**) &(*(*Result_159490).Ast).KindU.S6.Sons->data[4], Disp_159491);
return Result_159490;
}
N_NIMCALL(TY55526*, Generatemethoddispatchers_159010)(void) {
TY55526* Result_159658;
TY55901 Relevantcols_159659;
NI Bucket_159678;
NI HEX3Atmp_159694;
NI Res_159696;
NI Col_159688;
NI HEX3Atmp_159691;
NI LOC2;
NI Res_159693;
NIM_BOOL LOC5;
TY55548* LOC8;
TY55526* LOC9;
Result_159658 = 0;
memset((void*)&Relevantcols_159659, 0, sizeof(Relevantcols_159659));
Result_159658 = Newnode_55711(((NU8) 101));
Bucket_159678 = 0;
HEX3Atmp_159694 = 0;
HEX3Atmp_159694 = (NI64)(Gmethods_159166->Sup.len - 1);
Res_159696 = 0;
Res_159696 = 0;
while (1) {
if (!(Res_159696 <= HEX3Atmp_159694)) goto LA1;
Bucket_159678 = Res_159696;
Intsetinit_55925(&Relevantcols_159659);
Col_159688 = 0;
HEX3Atmp_159691 = 0;
LOC2 = Sonslen_55807((*Gmethods_159166->data[Bucket_159678]->data[0]).Typ);
HEX3Atmp_159691 = (NI64)(LOC2 - 1);
Res_159693 = 0;
Res_159693 = 1;
while (1) {
if (!(Res_159693 <= HEX3Atmp_159691)) goto LA3;
Col_159688 = Res_159693;
LOC5 = Relevantcol_159393(Gmethods_159166->data[Bucket_159678], Col_159688);
if (!LOC5) goto LA6;
Intsetincl_55915(&Relevantcols_159659, Col_159688);
LA6: ;
Res_159693 += 1;
} LA3: ;
Sortbucket_159443(&Gmethods_159166->data[Bucket_159678], &Relevantcols_159659);
LOC8 = 0;
LOC8 = Gendispatcher_159486(Gmethods_159166->data[Bucket_159678], &Relevantcols_159659);
LOC9 = 0;
LOC9 = Newsymnode_55735(LOC8);
Addson_55824(Result_159658, LOC9);
Res_159696 += 1;
} LA1: ;
return Result_159658;
}
N_NOINLINE(void, cgmethInit)(void) {
asgnRefNoCycle((void**) &Gmethods_159166, (TY159165*) newSeq(NTI159165, 0));
}

