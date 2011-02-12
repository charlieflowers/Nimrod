/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY55526 TY55526;
typedef struct TY55552 TY55552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY47539 TY47539;
typedef struct TY55548 TY55548;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY55526*, Newnodei_55738)(NU8 Kind_55740, TY47539 Info_55741);
N_NIMCALL(NIM_BOOL, Cyclictreeaux_96099)(TY55526* N_96101, TY55526* S_96102);
N_NIMCALL(NIM_BOOL, Hasson_96046)(TY55526* Father_96048, TY55526* Son_96049);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(void, Addson_55824)(TY55526* Father_55826, TY55526* Son_55827);
N_NIMCALL(void, Delson_55836)(TY55526* Father_55838, NI Idx_55839);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18849, NimStringDesc* B_18850);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_96035)(TY55526* A_96037, TY55526* B_96038);
N_NIMCALL(NU8, Getmagic_96013)(TY55526* Op_96015) {
NU8 Result_96682;
Result_96682 = 0;
switch ((*Op_96015).Kind) {
case ((NU8) 21):
case ((NU8) 49):
case ((NU8) 20):
case ((NU8) 22):
switch ((*(*Op_96015).KindU.S6.Sons->data[0]).Kind) {
case ((NU8) 3):
Result_96682 = (*(*(*Op_96015).KindU.S6.Sons->data[0]).KindU.S4.Sym).Magic;
break;
default:
Result_96682 = ((NU8) 0);
break;
}
break;
default:
Result_96682 = ((NU8) 0);
break;
}
return Result_96682;
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
N_NIMCALL(NIM_BOOL, Hasson_96046)(TY55526* Father_96048, TY55526* Son_96049) {
NIM_BOOL Result_96050;
NI I_96074;
NI HEX3Atmp_96096;
NI LOC1;
NI Res_96098;
Result_96050 = 0;
I_96074 = 0;
HEX3Atmp_96096 = 0;
LOC1 = Sonslen_55804(Father_96048);
HEX3Atmp_96096 = (NI64)(LOC1 - 1);
Res_96098 = 0;
Res_96098 = 0;
while (1) {
if (!(Res_96098 <= HEX3Atmp_96096)) goto LA2;
I_96074 = Res_96098;
if (!((*Father_96048).KindU.S6.Sons->data[I_96074] == Son_96049)) goto LA4;
Result_96050 = NIM_TRUE;
goto BeforeRet;
LA4: ;
Res_96098 += 1;
} LA2: ;
Result_96050 = NIM_FALSE;
BeforeRet: ;
return Result_96050;
}
N_NIMCALL(NIM_BOOL, Cyclictreeaux_96099)(TY55526* N_96101, TY55526* S_96102) {
NIM_BOOL Result_96103;
NIM_BOOL LOC5;
NI M_96115;
NI I_96136;
NI HEX3Atmp_96149;
NI LOC11;
NI Res_96151;
NIM_BOOL LOC14;
Result_96103 = 0;
if (!(N_96101 == NIM_NIL)) goto LA2;
Result_96103 = NIM_FALSE;
goto BeforeRet;
LA2: ;
LOC5 = Hasson_96046(S_96102, N_96101);
if (!LOC5) goto LA6;
Result_96103 = NIM_TRUE;
goto BeforeRet;
LA6: ;
M_96115 = 0;
M_96115 = Sonslen_55804(S_96102);
Addson_55824(S_96102, N_96101);
if (!!(((*N_96101).Kind >= ((NU8) 1) && (*N_96101).Kind <= ((NU8) 18)))) goto LA9;
I_96136 = 0;
HEX3Atmp_96149 = 0;
LOC11 = Sonslen_55804(N_96101);
HEX3Atmp_96149 = (NI64)(LOC11 - 1);
Res_96151 = 0;
Res_96151 = 0;
while (1) {
if (!(Res_96151 <= HEX3Atmp_96149)) goto LA12;
I_96136 = Res_96151;
LOC14 = Cyclictreeaux_96099((*N_96101).KindU.S6.Sons->data[I_96136], S_96102);
if (!LOC14) goto LA15;
Result_96103 = NIM_TRUE;
goto BeforeRet;
LA15: ;
Res_96151 += 1;
} LA12: ;
LA9: ;
Result_96103 = NIM_FALSE;
Delson_55836(S_96102, M_96115);
BeforeRet: ;
return Result_96103;
}
N_NIMCALL(NIM_BOOL, Cyclictree_96043)(TY55526* N_96045) {
NIM_BOOL Result_96155;
TY55526* S_96156;
Result_96155 = 0;
S_96156 = 0;
S_96156 = Newnodei_55738(((NU8) 1), (*N_96045).Info);
Result_96155 = Cyclictreeaux_96099(N_96045, S_96156);
return Result_96155;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18849, NimStringDesc* B_18850) {
NIM_BOOL Result_18851;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
Result_18851 = 0;
if (!(A_18849 == B_18850)) goto LA2;
Result_18851 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18849 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18850 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18851 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18849).Sup.len == (*B_18850).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18849).data)), ((NCSTRING) ((*B_18850).data)), ((int) ((NI64)((*A_18849).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18851 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18851;
}
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_96035)(TY55526* A_96037, TY55526* B_96038) {
NIM_BOOL Result_96161;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_96338;
NI HEX3Atmp_96363;
NI LOC15;
NI Res_96365;
NIM_BOOL LOC18;
Result_96161 = 0;
Result_96161 = NIM_FALSE;
if (!(A_96037 == B_96038)) goto LA2;
Result_96161 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_96037 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_96038 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_96037).Kind == (*B_96038).Kind);
LA7: ;
if (!LOC4) goto LA8;
switch ((*A_96037).Kind) {
case ((NU8) 3):
Result_96161 = ((*(*(*A_96037).KindU.S4.Sym).Name).Sup.Id == (*(*(*B_96038).KindU.S4.Sym).Name).Sup.Id);
break;
case ((NU8) 2):
Result_96161 = ((*(*A_96037).KindU.S5.Ident).Sup.Id == (*(*B_96038).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
Result_96161 = ((*A_96037).KindU.S1.Intval == (*B_96038).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
Result_96161 = (((NF) ((*A_96037).KindU.S2.Floatval)) == ((NF) ((*B_96038).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
Result_96161 = eqStrings((*A_96037).KindU.S3.Strval, (*B_96038).KindU.S3.Strval);
break;
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
Result_96161 = NIM_TRUE;
break;
default:
LOC11 = Sonslen_55804(A_96037);
LOC12 = Sonslen_55804(B_96038);
if (!(LOC11 == LOC12)) goto LA13;
I_96338 = 0;
HEX3Atmp_96363 = 0;
LOC15 = Sonslen_55804(A_96037);
HEX3Atmp_96363 = (NI64)(LOC15 - 1);
Res_96365 = 0;
Res_96365 = 0;
while (1) {
if (!(Res_96365 <= HEX3Atmp_96363)) goto LA16;
I_96338 = Res_96365;
LOC18 = Exprstructuralequivalent_96035((*A_96037).KindU.S6.Sons->data[I_96338], (*B_96038).KindU.S6.Sons->data[I_96338]);
if (!!(LOC18)) goto LA19;
goto BeforeRet;
LA19: ;
Res_96365 += 1;
} LA16: ;
Result_96161 = NIM_TRUE;
LA13: ;
break;
}
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
return Result_96161;
}
N_NIMCALL(NIM_BOOL, Isconstexpr_96016)(TY55526* N_96018) {
NIM_BOOL Result_96738;
NIM_BOOL LOC1;
Result_96738 = 0;
LOC1 = ((*N_96018).Kind >= ((NU8) 5) && (*N_96018).Kind <= ((NU8) 10) || (*N_96018).Kind >= ((NU8) 14) && (*N_96018).Kind <= ((NU8) 16) || (*N_96018).Kind >= ((NU8) 11) && (*N_96018).Kind <= ((NU8) 13) || (*N_96018).Kind == ((NU8) 18));
if (LOC1) goto LA2;
LOC1 = (((*N_96018).Flags &(1<<((((NU8) 4))&7)))!=0);
LA2: ;
Result_96738 = LOC1;
return Result_96738;
}
N_NOINLINE(void, treesInit)(void) {
}

