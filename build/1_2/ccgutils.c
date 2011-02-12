/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY51564 TY51564;
typedef struct TY51562 TY51562;
typedef struct TY51560 TY51560;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51552 TY51552;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51550 TY51550;
typedef struct TY51526 TY51526;
typedef struct TY51548 TY51548;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY43539 TY43539;
typedef struct TY50011 TY50011;
typedef struct TY51520 TY51520;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51544 TY51544;
typedef struct TY39013 TY39013;
struct TY51560 {
TY50005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY51564 {
NI Counter;
TY51562* Data;
};
typedef TY51564 TY155023[40];
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
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
struct TY51562 {
  TGenericSeq Sup;
  TY51560 data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Inittypetables_155025)(void);
N_NIMCALL(void, Initidtable_51755)(TY51564* X_51758);
N_NIMCALL(TNimObject*, Idtableget_56163)(TY51564 T_56165, TY50005* Key_56166);
N_NIMCALL(void, Idtableput_56171)(TY51564* T_56174, TY50005* Key_56175, TNimObject* Val_56176);
N_NIMCALL(TY51552*, Getuniquetype_155020)(TY51552* Key_155022);
static N_INLINE(TY51552*, Lastson_51813)(TY51552* N_51815);
static N_INLINE(NI, Sonslen_51807)(TY51552* N_51809);
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_56177)(TY51564 T_56179, TY50005* Key_56180);
N_NIMCALL(NIM_BOOL, Sametype_94048)(TY51552* X_94050, TY51552* Y_94051);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, App_48031)(TY48008** A_48034, TY48008* B_48035);
N_NIMCALL(TY48008*, Torope_48046)(NimStringDesc* S_48048);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18832, NI Newlen_18833);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_25410, NI Len_25411);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18789, NI Addlen_18790);
N_NIMCALL(NimStringDesc*, Tocchar_155007)(NIM_CHAR C_155009);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_25036);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR X_19534);
STRING_LITERAL(TMP193297, "c\"", 2);
STRING_LITERAL(TMP193298, "\\00\"", 4);
STRING_LITERAL(TMP193300, "\"", 1);
STRING_LITERAL(TMP193301, "\015\012", 2);
TY155023 Gtypetable_155024;
N_NIMCALL(void, Inittypetables_155025)(void) {
NU8 I_155057;
NU8 Res_155060;
I_155057 = 0;
Res_155060 = 0;
Res_155060 = ((NU8) 0);
while (1) {
if (!(Res_155060 <= ((NU8) 39))) goto LA1;
I_155057 = Res_155060;
Initidtable_51755(&Gtypetable_155024[(I_155057)-0]);
Res_155060 += 1;
} LA1: ;
}
static N_INLINE(NI, Sonslen_51807)(TY51552* N_51809) {
NI Result_52750;
Result_52750 = 0;
if (!(*N_51809).Sons == 0) goto LA2;
Result_52750 = 0;
goto LA1;
LA2: ;
Result_52750 = (*N_51809).Sons->Sup.len;
LA1: ;
return Result_52750;
}
static N_INLINE(TY51552*, Lastson_51813)(TY51552* N_51815) {
TY51552* Result_53841;
NI LOC1;
Result_53841 = 0;
LOC1 = Sonslen_51807(N_51815);
Result_53841 = (*N_51815).Sons->data[(NI64)(LOC1 - 1)];
return Result_53841;
}
N_NIMCALL(TY51552*, Getuniquetype_155020)(TY51552* Key_155022) {
TY51552* Result_155064;
TY51552* T_155065;
NU8 K_155066;
TNimObject* LOC4;
TY51552* LOC8;
NIM_BOOL LOC10;
NI H_155113;
NI HEX3Atmp_155126;
NI Res_155128;
NIM_BOOL LOC15;
Result_155064 = 0;
T_155065 = 0;
K_155066 = 0;
Result_155064 = Key_155022;
if (!(Key_155022 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
K_155066 = (*Key_155022).Kind;
switch (K_155066) {
case ((NU8) 17):
case ((NU8) 14):
LOC4 = 0;
LOC4 = Idtableget_56163(Gtypetable_155024[(K_155066)-0], &Key_155022->Sup);
Result_155064 = ((TY51552*) (LOC4));
if (!(Result_155064 == NIM_NIL)) goto LA6;
Idtableput_56171(&Gtypetable_155024[(K_155066)-0], &Key_155022->Sup, &Key_155022->Sup.Sup);
Result_155064 = Key_155022;
LA6: ;
break;
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 15):
LOC8 = 0;
LOC8 = Lastson_51813(Key_155022);
Result_155064 = Getuniquetype_155020(LOC8);
break;
case ((NU8) 25):
break;
default:
LOC10 = Idtablehasobjectaskey_56177(Gtypetable_155024[(K_155066)-0], &Key_155022->Sup);
if (!LOC10) goto LA11;
goto BeforeRet;
LA11: ;
H_155113 = 0;
HEX3Atmp_155126 = 0;
HEX3Atmp_155126 = (Gtypetable_155024[(K_155066)-0].Data->Sup.len-1);
Res_155128 = 0;
Res_155128 = 0;
while (1) {
if (!(Res_155128 <= HEX3Atmp_155126)) goto LA13;
H_155113 = Res_155128;
T_155065 = ((TY51552*) (Gtypetable_155024[(K_155066)-0].Data->data[H_155113].Key));
LOC15 = !((T_155065 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = Sametype_94048(T_155065, Key_155022);
LA16: ;
if (!LOC15) goto LA17;
Result_155064 = T_155065;
goto BeforeRet;
LA17: ;
Res_155128 += 1;
} LA13: ;
Idtableput_56171(&Gtypetable_155024[(K_155066)-0], &Key_155022->Sup, &Key_155022->Sup.Sup);
break;
}
BeforeRet: ;
return Result_155064;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((NI32) ((NI64)((NI64)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
N_NIMCALL(TY48008*, Makellvmstring_155013)(NimStringDesc* S_155015) {
TY48008* Result_155206;
NimStringDesc* Res_155208;
NI I_155219;
NI HEX3Atmp_155229;
NI Res_155231;
TY48008* LOC5;
NimStringDesc* LOC6;
TY48008* LOC7;
Result_155206 = 0;
Res_155208 = 0;
Result_155206 = NIM_NIL;
Res_155208 = copyString(((NimStringDesc*) &TMP193297));
I_155219 = 0;
HEX3Atmp_155229 = 0;
HEX3Atmp_155229 = (NI64)((NI64)(S_155015->Sup.len + 0) - 1);
Res_155231 = 0;
Res_155231 = 0;
while (1) {
if (!(Res_155231 <= HEX3Atmp_155229)) goto LA1;
I_155219 = Res_155231;
if (!((NI64)((NI64)((NI64)(I_155219 - 0) + 1) % 64) == 0)) goto LA3;
LOC5 = 0;
LOC5 = Torope_48046(Res_155208);
App_48031(&Result_155206, LOC5);
Res_155208 = setLengthStr(Res_155208, 0);
LA3: ;
switch (((NU8)(S_155015->data[I_155219]))) {
case 0 ... 31:
case 128 ... 255:
case 34:
case 92:
Res_155208 = addChar(Res_155208, 92);
LOC6 = 0;
LOC6 = nsuToHex(((NI64) (((NU8)(S_155015->data[I_155219])))), 2);
Res_155208 = resizeString(Res_155208, LOC6->Sup.len + 0);
appendString(Res_155208, LOC6);
break;
default:
Res_155208 = addChar(Res_155208, S_155015->data[I_155219]);
break;
}
Res_155231 += 1;
} LA1: ;
Res_155208 = resizeString(Res_155208, 4);
appendString(Res_155208, ((NimStringDesc*) &TMP193298));
LOC7 = 0;
LOC7 = Torope_48046(Res_155208);
App_48031(&Result_155206, LOC7);
return Result_155206;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI64)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Tocchar_155007)(NIM_CHAR C_155009) {
NimStringDesc* Result_155176;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Result_155176 = 0;
switch (((NU8)(C_155009))) {
case 0 ... 31:
case 128 ... 255:
LOC1 = 0;
LOC2 = 0;
LOC2 = nsuToOctal(C_155009);
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendChar(LOC1, 92);
appendString(LOC1, LOC2);
Result_155176 = LOC1;
break;
case 39:
case 34:
case 92:
LOC3 = 0;
LOC3 = rawNewString(2);
appendChar(LOC3, 92);
appendChar(LOC3, C_155009);
Result_155176 = LOC3;
break;
default:
Result_155176 = nimCharToStr(C_155009);
break;
}
return Result_155176;
}
N_NIMCALL(TY48008*, Makecstring_155010)(NimStringDesc* S_155012) {
TY48008* Result_155182;
NimStringDesc* Res_155184;
NI I_155195;
NI HEX3Atmp_155200;
NI Res_155202;
TY48008* LOC5;
NimStringDesc* LOC6;
TY48008* LOC7;
Result_155182 = 0;
Res_155184 = 0;
Result_155182 = NIM_NIL;
Res_155184 = copyString(((NimStringDesc*) &TMP193300));
I_155195 = 0;
HEX3Atmp_155200 = 0;
HEX3Atmp_155200 = (NI64)((NI64)(S_155012->Sup.len + 0) - 1);
Res_155202 = 0;
Res_155202 = 0;
while (1) {
if (!(Res_155202 <= HEX3Atmp_155200)) goto LA1;
I_155195 = Res_155202;
if (!((NI64)((NI64)((NI64)(I_155195 - 0) + 1) % 64) == 0)) goto LA3;
Res_155184 = addChar(Res_155184, 34);
Res_155184 = resizeString(Res_155184, 2);
appendString(Res_155184, ((NimStringDesc*) &TMP193301));
LOC5 = 0;
LOC5 = Torope_48046(Res_155184);
App_48031(&Result_155182, LOC5);
Res_155184 = setLengthStr(Res_155184, 1);
Res_155184->data[0] = 34;
LA3: ;
LOC6 = 0;
LOC6 = Tocchar_155007(S_155012->data[I_155195]);
Res_155184 = resizeString(Res_155184, LOC6->Sup.len + 0);
appendString(Res_155184, LOC6);
Res_155202 += 1;
} LA1: ;
Res_155184 = addChar(Res_155184, 34);
LOC7 = 0;
LOC7 = Torope_48046(Res_155184);
App_48031(&Result_155182, LOC7);
return Result_155182;
}
N_NOINLINE(void, ccgutilsInit)(void) {
Inittypetables_155025();
}

