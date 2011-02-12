/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY39019 TY39019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY39013 TY39013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY41008 TY41008;
typedef struct TY35021 TY35021;
typedef struct TY34337 TY34337;
typedef struct TY39015 TY39015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY41006 TY41006;
typedef struct TY41004 TY41004;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
typedef NimStringDesc* TY42331[1];
struct TY34337 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY39015 {
  TY39013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY44021[4];
typedef NimStringDesc* TY70026[3];
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY41004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY41008 {
  TNimObject Sup;
NI Counter;
TY41006* Data;
NU8 Mode;
};
struct TY35021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY41006 {
  TGenericSeq Sup;
  TY41004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(TY41008*, Newstringtable_41019)(NimStringDesc** Keyvaluepairs_41022, NI Keyvaluepairs_41022Len0, NU8 Mode_41023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_34336, TY34337* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, Rawfindfile_42270)(NimStringDesc* F_42272);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_32803);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_34203, NimStringDesc* Tail_34204);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24450);
N_NIMCALL(NimStringDesc*, Shortendir_42200)(NimStringDesc* Dir_42202);
N_NIMCALL(NimStringDesc*, Getprefixdir_42109)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25848, NimStringDesc* Prefix_25849);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_34251, NI Parts_34251Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_34620, NimStringDesc* Ext_34621);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_42211)(NimStringDesc* Path_42213);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5235);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_36203);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(NimStringDesc*, Get_41029)(TY41008* T_41031, NimStringDesc* Key_41032);
N_NIMCALL(void, Put_41024)(TY41008* T_41026, NimStringDesc* Key_41027, NimStringDesc* Val_41028);
N_NIMCALL(NIM_BOOL, Haskey_41033)(TY41008* T_41035, NimStringDesc* Key_41036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
static N_INLINE(void, Writeln_42265)(FILE* F_42268, NimStringDesc* X_42269);
N_NIMCALL(void, Write_4066)(FILE* F_4068, NimStringDesc* S_4069);
NIM_CONST NU32 Checksoptions_42074 = 1022;
STRING_LITERAL(TMP42089, "", 0);
STRING_LITERAL(TMP192651, "nimcache", 8);
STRING_LITERAL(TMP192663, "cannot create directory: ", 25);
STRING_LITERAL(TMP194504, "\015\012", 2);
NU32 Goptions_42077;
NU32 Gglobaloptions_42079;
NI8 Gexitcode_42080;
TY39019 Searchpaths_42081;
extern TNimType* NTI39019; /* TLinkedList */
NimStringDesc* Outfile_42082;
extern TY11196 Gch_11214;
NimStringDesc* Gindexfile_42083;
NU8 Gcmd_42084;
NI Gverbosity_42085;
NI Gnumberofprocessors_42086;
TY41008* Gconfigvars_42111;
NimStringDesc* Libpath_42112;
NimStringDesc* Projectpath_42113;
NIM_BOOL Gkeepcomments_42114;
TY35021* Gimplicitmods_42131;
extern TNimType* NTI35021; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_5232;
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
N_NIMCALL(NimStringDesc*, Getprefixdir_42109)(void) {
NimStringDesc* Result_42199;
NimStringDesc* LOC1;
TY34337 LOC2;
Result_42199 = 0;
LOC1 = 0;
LOC1 = nosgetApplicationDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_42199 = copyString(LOC2.Head);
return Result_42199;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_42211)(NimStringDesc* Path_42213) {
NimStringDesc* Result_42214;
NIM_BOOL LOC2;
Result_42214 = 0;
LOC2 = (0 < Path_42213->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_42213->data[(NI64)(Path_42213->Sup.len - 1)]) == (NU8)(92));
LA3: ;
if (!LOC2) goto LA4;
Result_42214 = copyStrLast(Path_42213, 0, (NI64)(Path_42213->Sup.len - 2));
goto LA1;
LA4: ;
Result_42214 = copyString(Path_42213);
LA1: ;
return Result_42214;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_42270)(NimStringDesc* F_42272) {
NimStringDesc* Result_42273;
NIM_BOOL LOC2;
TY39015* It_42274;
NIM_BOOL LOC7;
Result_42273 = 0;
LOC2 = nosexistsFile(F_42272);
if (!LOC2) goto LA3;
Result_42273 = copyString(F_42272);
goto LA1;
LA3: ;
It_42274 = 0;
It_42274 = ((TY39015*) (Searchpaths_42081.Head));
while (1) {
if (!!((It_42274 == NIM_NIL))) goto LA5;
Result_42273 = nosJoinPath((*It_42274).Data, F_42272);
LOC7 = nosexistsFile(Result_42273);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_42274 = ((TY39015*) ((*It_42274).Sup.Next));
} LA5: ;
Result_42273 = copyString(((NimStringDesc*) &TMP42089));
LA1: ;
BeforeRet: ;
return Result_42273;
}
N_NIMCALL(NimStringDesc*, Findfile_42090)(NimStringDesc* F_42092) {
NimStringDesc* Result_42289;
NimStringDesc* LOC4;
Result_42289 = 0;
Result_42289 = Rawfindfile_42270(F_42092);
if (!(Result_42289->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_42092);
Result_42289 = Rawfindfile_42270(LOC4);
LA2: ;
return Result_42289;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((NI32) ((NI64)((NI64)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI64)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_42200)(NimStringDesc* Dir_42202) {
NimStringDesc* Result_42203;
NimStringDesc* Prefix_42204;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_42203 = 0;
Prefix_42204 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_42109();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 92);
Prefix_42204 = LOC1;
LOC4 = nsuStartsWith(Dir_42202, Prefix_42204);
if (!LOC4) goto LA5;
Result_42203 = copyStr(Dir_42202, Prefix_42204->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 92);
Prefix_42204 = LOC7;
LOC10 = nsuStartsWith(Dir_42202, Prefix_42204);
if (!LOC10) goto LA11;
Result_42203 = copyStr(Dir_42202, Prefix_42204->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_42113->Sup.len + 1);
appendString(LOC13, Projectpath_42113);
appendChar(LOC13, 92);
Prefix_42204 = LOC13;
LOC15 = nsuStartsWith(Dir_42202, Prefix_42204);
if (!LOC15) goto LA16;
Result_42203 = copyStr(Dir_42202, Prefix_42204->Sup.len);
goto BeforeRet;
LA16: ;
Result_42203 = copyString(Dir_42202);
BeforeRet: ;
return Result_42203;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_42105)(NimStringDesc* Path_42107, NimStringDesc* Ext_42108) {
NimStringDesc* Result_42231;
TY34337 LOC1;
NimStringDesc* Head_42232;
NimStringDesc* Tail_42233;
NimStringDesc* LOC5;
TY44021 LOC6;
Result_42231 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_42107, &LOC1);
Head_42232 = 0;
Head_42232 = copyString(LOC1.Head);
Tail_42233 = 0;
Tail_42233 = copyString(LOC1.Tail);
if (!(0 < Head_42232->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_42232->Sup.len + 1);
appendString(LOC5, Head_42232);
appendChar(LOC5, 92);
Head_42232 = Shortendir_42200(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_42113);
LOC6[1] = copyString(((NimStringDesc*) &TMP192651));
LOC6[2] = copyString(Head_42232);
LOC6[3] = nosChangeFileExt(Tail_42233, Ext_42108);
Result_42231 = nosJoinPathOpenArray(LOC6, 4);
return Result_42231;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5235) {
(*S_5235).prev = excHandler;
excHandler = S_5235;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20404;
Result_20404 = 0;
Result_20404 = Currexception_5232;
return Result_20404;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11080(&Gch_11214.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3401(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3406(&(*C_13003).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_5232, (*Currexception_5232).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_42101)(NimStringDesc* F_42103, NIM_BOOL Createsubdir_42104) {
NimStringDesc* Result_42248;
TY34337 LOC1;
NimStringDesc* Head_42249;
NimStringDesc* Tail_42250;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_42261;
TY70026 LOC7;
TSafePoint TMP192662;
NimStringDesc* LOC11;
Result_42248 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_42103, &LOC1);
Head_42249 = 0;
Head_42249 = copyString(LOC1.Head);
Tail_42250 = 0;
Tail_42250 = copyString(LOC1.Tail);
if (!(0 < Head_42249->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_42249->Sup.len + 1);
appendString(LOC5, Head_42249);
appendChar(LOC5, 92);
LOC6 = 0;
LOC6 = Shortendir_42200(LOC5);
Head_42249 = Removetrailingdirsep_42211(LOC6);
LA3: ;
Subdir_42261 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_42113);
LOC7[1] = copyString(((NimStringDesc*) &TMP192651));
LOC7[2] = copyString(Head_42249);
Subdir_42261 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_42104) goto LA9;
pushSafePoint(&TMP192662);
TMP192662.status = setjmp(TMP192662.context);
if (TMP192662.status == 0) {
noscreateDir(Subdir_42261);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_42261->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP192663));
appendString(LOC11, Subdir_42261);
Writeln_42265(stdout, LOC11);
exit(1);
TMP192662.status = 0;popCurrentException();}
}
if (TMP192662.status != 0) reraiseException();
LA9: ;
Result_42248 = nosJoinPath(Subdir_42261, Tail_42250);
return Result_42248;
}
N_NIMCALL(void, Addimplicitmod_42142)(NimStringDesc* Filename_42144) {
NI Length_42174;
Length_42174 = 0;
Length_42174 = Gimplicitmods_42131->Sup.len;
Gimplicitmods_42131 = (TY35021*) setLengthSeq(&(Gimplicitmods_42131)->Sup, sizeof(NimStringDesc*), (NI64)(Length_42174 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_42131->data[Length_42174], copyString(Filename_42144));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_42135)(NimStringDesc* Key_42137) {
NimStringDesc* Result_42161;
Result_42161 = 0;
Result_42161 = Get_41029(Gconfigvars_42111, Key_42137);
return Result_42161;
}
N_NIMCALL(void, Setconfigvar_42138)(NimStringDesc* Key_42140, NimStringDesc* Val_42141) {
Put_41024(Gconfigvars_42111, Key_42140, Val_42141);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_42132)(NimStringDesc* Key_42134) {
NIM_BOOL Result_42157;
Result_42157 = 0;
Result_42157 = Haskey_41033(Gconfigvars_42111, Key_42134);
return Result_42157;
}
N_NIMCALL(NimStringDesc*, Getoutfile_42145)(NimStringDesc* Filename_42147, NimStringDesc* Ext_42148) {
NimStringDesc* Result_42170;
Result_42170 = 0;
if (!!(((Outfile_42082) && (Outfile_42082)->Sup.len == 0))) goto LA2;
Result_42170 = copyString(Outfile_42082);
goto LA1;
LA2: ;
Result_42170 = nosChangeFileExt(Filename_42147, Ext_42148);
LA1: ;
return Result_42170;
}
N_NIMCALL(NI, Binarystrsearch_42149)(NimStringDesc** X_42152, NI X_42152Len0, NimStringDesc* Y_42153) {
NI Result_42299;
NI A_42300;
NI B_42311;
NI Mid_42314;
NI C_42315;
Result_42299 = 0;
A_42300 = 0;
A_42300 = 0;
B_42311 = 0;
B_42311 = (NI64)(X_42152Len0 - 1);
while (1) {
if (!(A_42300 <= B_42311)) goto LA1;
Mid_42314 = 0;
Mid_42314 = (NI64)((NI64)(A_42300 + B_42311) / 2);
C_42315 = 0;
C_42315 = nsuCmpIgnoreCase(X_42152[Mid_42314], Y_42153);
if (!(C_42315 < 0)) goto LA3;
A_42300 = (NI64)(Mid_42314 + 1);
goto LA2;
LA3: ;
if (!(0 < C_42315)) goto LA5;
B_42311 = (NI64)(Mid_42314 - 1);
goto LA2;
LA5: ;
Result_42299 = Mid_42314;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_42299 = -1;
BeforeRet: ;
return Result_42299;
}
static N_INLINE(void, Writeln_42265)(FILE* F_42268, NimStringDesc* X_42269) {
Write_4066(F_42268, X_42269);
Write_4066(F_42268, ((NimStringDesc*) &TMP194504));
}
N_NOINLINE(void, optionsInit)(void) {
TY42331 LOC1;
Goptions_42077 = 105022;
Gglobaloptions_42079 = 8;
Searchpaths_42081.m_type = NTI39019;
asgnRefNoCycle((void**) &Outfile_42082, copyString(((NimStringDesc*) &TMP42089)));
asgnRefNoCycle((void**) &Gindexfile_42083, copyString(((NimStringDesc*) &TMP42089)));
Gcmd_42084 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_42112, copyString(((NimStringDesc*) &TMP42089)));
asgnRefNoCycle((void**) &Projectpath_42113, copyString(((NimStringDesc*) &TMP42089)));
Gkeepcomments_42114 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_42131, (TY35021*) newSeq(NTI35021, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_42111, Newstringtable_41019(LOC1, 0, ((NU8) 2)));
}

