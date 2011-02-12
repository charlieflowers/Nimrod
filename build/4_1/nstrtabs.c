/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY45008 TY45008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY45006 TY45006;
typedef struct TY45004 TY45004;
typedef struct TY11002 TY11002;
typedef struct TY11018 TY11018;
typedef struct TY11396 TY11396;
typedef struct TY11014 TY11014;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY45004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY45008 {
  TNimObject Sup;
NI Counter;
TY45006* Data;
NU8 Mode;
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
typedef NI TY9014[16];
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
};
struct TY45006 {
  TGenericSeq Sup;
  TY45004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_14110, NI Size_14111);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14604, NI Len_14605);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803);
N_NOINLINE(void, Addzct_11801)(TY11018* S_11804, TY11002* C_11805);
N_NIMCALL(void, Put_45024)(TY45008* T_45026, NimStringDesc* Key_45027, NimStringDesc* Val_45028);
N_NIMCALL(NI, Rawget_45149)(TY45008* T_45151, NimStringDesc* Key_45152);
N_NIMCALL(NI, Myhash_45106)(TY45008* T_45108, NimStringDesc* Key_45109);
N_NIMCALL(NI, Gethashstr_44031)(NimStringDesc* S_44033);
N_NIMCALL(NI, Gethashstrci_44034)(NimStringDesc* S_44036);
N_NIMCALL(NI, Getnormalizedhash_44037)(NimStringDesc* S_44039);
N_NIMCALL(NIM_BOOL, Mycmp_45111)(TY45008* T_45113, NimStringDesc* A_45114, NimStringDesc* B_45115);
N_NIMCALL(NI, Cmp_1327)(NimStringDesc* X_1329, NimStringDesc* Y_1330);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24633, NimStringDesc* B_24634);
N_NIMCALL(NI, Nexttry_45144)(NI H_45146, NI Maxhash_45147);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18912);
N_NIMCALL(NIM_BOOL, Mustrehash_45123)(NI Length_45125, NI Counter_45126);
N_NIMCALL(void, Enlarge_45178)(TY45008* T_45180);
N_NIMCALL(void, Rawinsert_45170)(TY45008* T_45172, TY45006** Data_45174, NimStringDesc* Key_45175, NimStringDesc* Val_45176);
STRING_LITERAL(TMP195674, "", 0);
extern TNimType* NTI45010; /* PStringTable */
extern TNimType* NTI45008; /* TStringTable */
extern TNimType* NTI45006; /* TKeyValuePairSeq */
extern TY11396 Gch_11414;
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814) {
TY11002* Result_11815;
Result_11815 = 0;
Result_11815 = ((TY11002*) ((NI32)((NU32)(((NI) (Usr_11814))) - (NU32)(((NI) (((NI)sizeof(TY11002))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12801(C_13422);
LA10: ;
LA6: ;
(*Dest_13418) = Src_13419;
}
N_NIMCALL(NI, Myhash_45106)(TY45008* T_45108, NimStringDesc* Key_45109) {
NI Result_45110;
Result_45110 = 0;
switch ((*T_45108).Mode) {
case ((NU8) 0):
Result_45110 = Gethashstr_44031(Key_45109);
break;
case ((NU8) 1):
Result_45110 = Gethashstrci_44034(Key_45109);
break;
case ((NU8) 2):
Result_45110 = Getnormalizedhash_44037(Key_45109);
break;
}
return Result_45110;
}
N_NIMCALL(NIM_BOOL, Mycmp_45111)(TY45008* T_45113, NimStringDesc* A_45114, NimStringDesc* B_45115) {
NIM_BOOL Result_45116;
NI LOC1;
NI LOC2;
NI LOC3;
Result_45116 = 0;
switch ((*T_45113).Mode) {
case ((NU8) 0):
LOC1 = Cmp_1327(A_45114, B_45115);
Result_45116 = (LOC1 == 0);
break;
case ((NU8) 1):
LOC2 = nsuCmpIgnoreCase(A_45114, B_45115);
Result_45116 = (LOC2 == 0);
break;
case ((NU8) 2):
LOC3 = nsuCmpIgnoreStyle(A_45114, B_45115);
Result_45116 = (LOC3 == 0);
break;
}
return Result_45116;
}
N_NIMCALL(NI, Nexttry_45144)(NI H_45146, NI Maxhash_45147) {
NI Result_45148;
Result_45148 = 0;
Result_45148 = (NI32)((NI32)((NI32)(5 * H_45146) + 1) & Maxhash_45147);
return Result_45148;
}
N_NIMCALL(NI, Rawget_45149)(TY45008* T_45151, NimStringDesc* Key_45152) {
NI Result_45153;
NI H_45154;
NI LOC1;
NIM_BOOL LOC4;
Result_45153 = 0;
H_45154 = 0;
LOC1 = Myhash_45106(T_45151, Key_45152);
H_45154 = (NI32)(LOC1 & ((*T_45151).Data->Sup.len-1));
while (1) {
if (!!((*T_45151).Data->data[H_45154].Key == 0)) goto LA2;
LOC4 = Mycmp_45111(T_45151, (*T_45151).Data->data[H_45154].Key, Key_45152);
if (!LOC4) goto LA5;
Result_45153 = H_45154;
goto BeforeRet;
LA5: ;
H_45154 = Nexttry_45144(H_45154, ((*T_45151).Data->Sup.len-1));
} LA2: ;
Result_45153 = -1;
BeforeRet: ;
return Result_45153;
}
N_NIMCALL(NIM_BOOL, Mustrehash_45123)(NI Length_45125, NI Counter_45126) {
NIM_BOOL Result_45127;
NIM_BOOL LOC1;
Result_45127 = 0;
LOC1 = ((NI32)(Length_45125 * 2) < (NI32)(Counter_45126 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI32)(Length_45125 - Counter_45126) < 4);
LA2: ;
Result_45127 = LOC1;
return Result_45127;
}
N_NIMCALL(void, Rawinsert_45170)(TY45008* T_45172, TY45006** Data_45174, NimStringDesc* Key_45175, NimStringDesc* Val_45176) {
NI H_45177;
NI LOC1;
H_45177 = 0;
LOC1 = Myhash_45106(T_45172, Key_45175);
H_45177 = (NI32)(LOC1 & ((*Data_45174)->Sup.len-1));
while (1) {
if (!!((*Data_45174)->data[H_45177].Key == 0)) goto LA2;
H_45177 = Nexttry_45144(H_45177, ((*Data_45174)->Sup.len-1));
} LA2: ;
asgnRefNoCycle((void**) &(*Data_45174)->data[H_45177].Key, copyString(Key_45175));
asgnRefNoCycle((void**) &(*Data_45174)->data[H_45177].Val, copyString(Val_45176));
}
N_NIMCALL(void, Enlarge_45178)(TY45008* T_45180) {
TY45006* N_45181;
NI I_45227;
NI HEX3Atmp_45238;
NI Res_45240;
TY45006* LOC5;
N_45181 = 0;
N_45181 = (TY45006*) newSeq(NTI45006, (NI32)((*T_45180).Data->Sup.len * 2));
I_45227 = 0;
HEX3Atmp_45238 = 0;
HEX3Atmp_45238 = ((*T_45180).Data->Sup.len-1);
Res_45240 = 0;
Res_45240 = 0;
while (1) {
if (!(Res_45240 <= HEX3Atmp_45238)) goto LA1;
I_45227 = Res_45240;
if (!!((*T_45180).Data->data[I_45227].Key == 0)) goto LA3;
Rawinsert_45170(T_45180, &N_45181, (*T_45180).Data->data[I_45227].Key, (*T_45180).Data->data[I_45227].Val);
LA3: ;
Res_45240 += 1;
} LA1: ;
LOC5 = 0;
LOC5 = (*T_45180).Data;
asgnRefNoCycle((void**) &(*T_45180).Data, N_45181);
N_45181 = LOC5;
}
N_NIMCALL(void, Put_45024)(TY45008* T_45026, NimStringDesc* Key_45027, NimStringDesc* Val_45028) {
NI Index_45246;
NIM_BOOL LOC5;
Index_45246 = 0;
Index_45246 = Rawget_45149(T_45026, Key_45027);
if (!(0 <= Index_45246)) goto LA2;
asgnRefNoCycle((void**) &(*T_45026).Data->data[Index_45246].Val, copyString(Val_45028));
goto LA1;
LA2: ;
LOC5 = Mustrehash_45123((*T_45026).Data->Sup.len, (*T_45026).Counter);
if (!LOC5) goto LA6;
Enlarge_45178(T_45026);
LA6: ;
Rawinsert_45170(T_45026, &(*T_45026).Data, Key_45027, Val_45028);
(*T_45026).Counter += 1;
LA1: ;
}
N_NIMCALL(TY45008*, Newstringtable_45019)(NimStringDesc** Keyvaluepairs_45022, NI Keyvaluepairs_45022Len0, NU8 Mode_45023) {
TY45008* Result_45061;
NI I_45089;
Result_45061 = 0;
Result_45061 = (TY45008*) newObj(NTI45010, sizeof(TY45008));
(*Result_45061).Sup.m_type = NTI45008;
(*Result_45061).Mode = Mode_45023;
(*Result_45061).Counter = 0;
asgnRefNoCycle((void**) &(*Result_45061).Data, (TY45006*) newSeq(NTI45006, 64));
I_45089 = 0;
I_45089 = 0;
while (1) {
if (!(I_45089 < (Keyvaluepairs_45022Len0-1))) goto LA1;
Put_45024(Result_45061, Keyvaluepairs_45022[I_45089], Keyvaluepairs_45022[(NI32)(I_45089 + 1)]);
I_45089 += 2;
} LA1: ;
return Result_45061;
}
N_NIMCALL(NimStringDesc*, Get_45029)(TY45008* T_45031, NimStringDesc* Key_45032) {
NimStringDesc* Result_45159;
NI Index_45160;
Result_45159 = 0;
Index_45160 = 0;
Index_45160 = Rawget_45149(T_45031, Key_45032);
if (!(0 <= Index_45160)) goto LA2;
Result_45159 = copyString((*T_45031).Data->data[Index_45160].Val);
goto LA1;
LA2: ;
Result_45159 = copyString(((NimStringDesc*) &TMP195674));
LA1: ;
return Result_45159;
}
N_NIMCALL(NIM_BOOL, Haskey_45033)(TY45008* T_45035, NimStringDesc* Key_45036) {
NIM_BOOL Result_45167;
NI LOC1;
Result_45167 = 0;
LOC1 = Rawget_45149(T_45035, Key_45036);
Result_45167 = (0 <= LOC1);
return Result_45167;
}
N_NOINLINE(void, nstrtabsInit)(void) {
}

