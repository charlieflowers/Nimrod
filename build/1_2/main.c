/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY188208 TY188208;
typedef struct TY188206 TY188206;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51548 TY51548;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY39019 TY39019;
typedef struct TY39013 TY39013;
typedef struct TY34461 TY34461;
typedef struct TY51526 TY51526;
typedef struct TY90031 TY90031;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TY51552 TY51552;
typedef struct TY50011 TY50011;
typedef struct TY43539 TY43539;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY72013 TY72013;
typedef struct TY102006 TY102006;
typedef struct TY102002 TY102002;
typedef struct TY74267 TY74267;
typedef struct TY73015 TY73015;
typedef struct TY74281 TY74281;
typedef struct TY74263 TY74263;
typedef struct TY51520 TY51520;
typedef struct TY35021 TY35021;
typedef struct TY90029 TY90029;
typedef struct TY56220 TY56220;
typedef struct TY56218 TY56218;
typedef struct TY56216 TY56216;
typedef struct TY51564 TY51564;
typedef struct TY51562 TY51562;
typedef struct TY51560 TY51560;
typedef struct TY51550 TY51550;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY188206 {
NimStringDesc* Filename;
TY51548* Module;
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
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
struct TY34461 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_NIMCALL_PTR(TY51526*, TY102048) (NimStringDesc* Filename_102049);
typedef N_NIMCALL_PTR(TY51548*, TY102044) (NimStringDesc* Filename_102045);
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
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
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
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
typedef N_NIMCALL_PTR(TY102002*, TY102007) (TY51548* Module_102008, NimStringDesc* Filename_102009);
typedef N_NIMCALL_PTR(TY102002*, TY102012) (TY51548* Module_102013, NimStringDesc* Filename_102014, TY90031* Rd_102015);
typedef N_NIMCALL_PTR(TY51526*, TY102018) (TY102002* P_102019, TY51526* N_102020);
typedef N_NIMCALL_PTR(TY51526*, TY102023) (TY102002* P_102024, TY51526* Toplevelstmt_102025);
struct TY102006 {
TY102007 Open;
TY102012 Opencached;
TY102018 Close;
TY102023 Process;
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
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
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
struct TY56216 {
NI Key;
NI Val;
};
struct TY56220 {
NI Counter;
TY56218* Data;
};
struct TY90029 {
NI Lastidxkey;
NI Lastidxval;
TY56220 Tab;
TY48008* R;
NI Offset;
};
struct TY51560 {
TY50005* Key;
TNimObject* Val;
};
struct TY51564 {
NI Counter;
TY51562* Data;
};
struct TY90031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY35021* Moddeps;
TY35021* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY90029 Index;
TY90029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY51564 Syms;
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
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY51544 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51526* Path;
};
struct TY72013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY102002 {
  TNimObject Sup;
};
struct TY188208 {
  TGenericSeq Sup;
  TY188206 data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY74281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY35021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY56218 {
  TGenericSeq Sup;
  TY56216 data[SEQ_DECL_SIZE];
};
struct TY51562 {
  TGenericSeq Sup;
  TY51560 data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, Appendstr_39061)(TY39019* List_39064, NimStringDesc* Data_39065);
N_NIMCALL(void, Prependstr_39071)(TY39019* List_39074, NimStringDesc* Data_39075);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_34460, TY34461* Result);
static N_INLINE(void, Setid_51696)(NI Id_51698);
N_NIMCALL(TY51526*, Parsefile_89031)(NimStringDesc* Filename_89033);
N_NIMCALL(TY51548*, Importmodule_188325)(NimStringDesc* Filename_188327);
N_NIMCALL(TY51548*, Getmodule_188256)(NimStringDesc* Filename_188258);
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_34650, NimStringDesc* Path2_34651);
N_NIMCALL(TY51548*, Compilemodule_188320)(NimStringDesc* Filename_188322, NIM_BOOL Ismainfile_188323, NIM_BOOL Issystemfile_188324);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_34630, NimStringDesc* Ext_34631);
N_NIMCALL(TY51548*, Newmodule_188287)(NimStringDesc* Filename_188289);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
N_NIMCALL(void, objectInit)(void* Dest_19676, TNimType* Typ_19677);
N_NIMCALL(TY50011*, Getident_50016)(NimStringDesc* Identifier_50018);
N_NIMCALL(NIM_BOOL, Isnimrodidentifier_74357)(NimStringDesc* S_74359);
N_NIMCALL(void, Rawmessage_43560)(NU8 Msg_43562, NimStringDesc* Arg_43563);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(TY43539, Newlineinfo_43581)(NimStringDesc* Filename_43583, NI Line_43584, NI Col_43585);
N_NIMCALL(void, Initstrtable_51747)(TY51530* X_51750);
N_NIMCALL(void, Registermodule_188229)(NimStringDesc* Filename_188231, TY51548* Module_188232);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, Strtableadd_56061)(TY51530* T_56064, TY51548* N_56065);
N_NIMCALL(TY90031*, Handlesymbolfile_90060)(TY51548* Module_90062, NimStringDesc* Filename_90063);
N_NIMCALL(void, Internalerror_43578)(NimStringDesc* Errmsg_43580);
static N_INLINE(NI, Getid_51694)(void);
N_NIMCALL(void, Processmodule_102035)(TY51548* Module_102037, NimStringDesc* Filename_102038, TY72013* Stream_102039, TY90031* Rd_102040);
N_NIMCALL(void, Limessage_43569)(TY43539 Info_43571, NU8 Msg_43572, NimStringDesc* Arg_43573);
N_NIMCALL(NU8, Whichkeyword_69478)(NimStringDesc* Id_69480);
N_NIMCALL(void, Wantfile_188704)(NimStringDesc* Filename_188706);
N_NIMCALL(void, Commandcompiletoc_188416)(NimStringDesc* Filename_188418);
N_NIMCALL(void, Semanticpasses_188408)(void);
N_NIMCALL(void, Registerpass_102028)(TY102006* P_102030);
N_NIMCALL(TY102006, Verbosepass_182004)(void);
N_NIMCALL(TY102006, Sempass_122001)(void);
N_NIMCALL(TY102006, Transfpass_184005)(void);
N_NIMCALL(TY102006, Cgenpass_157201)(void);
N_NIMCALL(TY102006, Rodwritepass_108001)(void);
N_NIMCALL(void, Compileproject_188405)(NimStringDesc* Filename_188407);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_34203, NimStringDesc* Tail_34204);
N_NIMCALL(void, Callccompiler_67806)(NimStringDesc* Projectfile_67808);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_34620, NimStringDesc* Ext_34621);
N_NIMCALL(void, Commandcompiletoecmascript_188601)(NimStringDesc* Filename_188603);
N_NIMCALL(void, Settarget_47574)(NU8 O_47576, NU8 C_47577);
N_NIMCALL(void, Initdefines_60049)(void);
N_NIMCALL(TY102006, Ecmasgenpass_174004)(void);
N_NIMCALL(void, Commandpretty_188643)(NimStringDesc* Filename_188645);
N_NIMCALL(void, Rendermodule_82035)(TY51526* N_82037, NimStringDesc* Filename_82038, NU8 Renderflags_82041);
N_NIMCALL(NimStringDesc*, Getoutfile_42145)(NimStringDesc* Filename_42147, NimStringDesc* Ext_42148);
N_NIMCALL(void, Loadspecialconfig_77007)(NimStringDesc* Configfilename_77009);
N_NIMCALL(void, Commanddoc_152001)(NimStringDesc* Filename_152003);
N_NIMCALL(void, Commandrst2html_152004)(NimStringDesc* Filename_152006);
N_NIMCALL(void, Commandrst2tex_152007)(NimStringDesc* Filename_152009);
N_NIMCALL(void, Commandgendepend_188410)(NimStringDesc* Filename_188412);
N_NIMCALL(TY102006, Gendependpass_183004)(void);
N_NIMCALL(TY102006, Cleanuppass_182006)(void);
N_NIMCALL(void, Generatedot_183006)(NimStringDesc* Project_183008);
N_NIMCALL(void, Execexternalprogram_67570)(NimStringDesc* Cmd_67572);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(void, Listsymbols_60062)(void);
N_NIMCALL(void, Commandcheck_188413)(NimStringDesc* Filename_188415);
N_NIMCALL(void, Commandscan_188658)(NimStringDesc* Filename_188660);
N_NIMCALL(TY72013*, Llstreamopen_72032)(NimStringDesc* Filename_72034, NU8 Mode_72035);
N_NIMCALL(void, Openlexer_74298)(TY74267* Lex_74301, NimStringDesc* Filename_74302, TY72013* Inputstream_74303);
N_NIMCALL(void, Rawgettok_74304)(TY74267* L_74307, TY74263* Tok_74309);
N_NIMCALL(void, Printtok_74320)(TY74263* Tok_74322);
N_NIMCALL(void, Closelexer_74316)(TY74267* Lex_74319);
N_NIMCALL(void, Messageout_43557)(NimStringDesc* S_43559);
N_NIMCALL(void, Commandinteractive_188616)(void);
N_NIMCALL(TY102006, Evalpass_112046)(void);
N_NIMCALL(TY72013*, Llstreamopenstdin_72038)(void);
STRING_LITERAL(TMP192866, "nim", 3);
STRING_LITERAL(TMP192919, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP192921, "command line", 12);
STRING_LITERAL(TMP192922, "", 0);
STRING_LITERAL(TMP193860, "system", 6);
STRING_LITERAL(TMP193872, ".cpp", 4);
STRING_LITERAL(TMP193873, ".m", 2);
STRING_LITERAL(TMP194076, "pretty.nim", 10);
STRING_LITERAL(TMP194077, "nimdoc.cfg", 10);
STRING_LITERAL(TMP194479, "nimdoc.tex.cfg", 14);
STRING_LITERAL(TMP194487, "dot -Tpng -o", 12);
STRING_LITERAL(TMP194488, "png", 3);
STRING_LITERAL(TMP194489, "dot", 3);
STRING_LITERAL(TMP194491, "Beware: Indentation tokens depend on the parser\'s state!", 56);
STRING_LITERAL(TMP194492, "stdin", 5);
TY188208* Compmods_188227;
extern TNimType* NTI188208; /* TFileModuleMap */
extern TY11196 Gch_11214;
extern TY39019 Searchpaths_42081;
extern NimStringDesc* Libpath_42112;
extern NI Gid_51693;
extern TY102048 Gincludefile_102051;
extern TY102044 Gimportmodule_102047;
extern TNimType* NTI51524; /* PSym */
extern TNimType* NTI51548; /* TSym */
extern NU8 Gcmd_42084;
extern NimStringDesc* Cext_67342;
extern NU32 Gglobaloptions_42079;
extern TNimType* NTI74267; /* TLexer */
extern TNimType* NTI74261; /* PToken */
extern TNimType* NTI74263; /* TToken */
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
static N_INLINE(void, Setid_51696)(NI Id_51698) {
Gid_51693 = ((Gid_51693 >= (NI64)(Id_51698 + 1)) ? Gid_51693 : (NI64)(Id_51698 + 1));
}
N_NIMCALL(TY51548*, Getmodule_188256)(NimStringDesc* Filename_188258) {
TY51548* Result_188259;
NI I_188283;
NI HEX3Atmp_188284;
NI Res_188286;
NIM_BOOL LOC3;
Result_188259 = 0;
I_188283 = 0;
HEX3Atmp_188284 = 0;
HEX3Atmp_188284 = (Compmods_188227->Sup.len-1);
Res_188286 = 0;
Res_188286 = 0;
while (1) {
if (!(Res_188286 <= HEX3Atmp_188284)) goto LA1;
I_188283 = Res_188286;
LOC3 = nossameFile(Compmods_188227->data[I_188283].Filename, Filename_188258);
if (!LOC3) goto LA4;
Result_188259 = Compmods_188227->data[I_188283].Module;
goto BeforeRet;
LA4: ;
Res_188286 += 1;
} LA1: ;
BeforeRet: ;
return Result_188259;
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
N_NIMCALL(void, Registermodule_188229)(NimStringDesc* Filename_188231, TY51548* Module_188232) {
NI Length_188243;
Length_188243 = 0;
Length_188243 = Compmods_188227->Sup.len;
Compmods_188227 = (TY188208*) setLengthSeq(&(Compmods_188227)->Sup, sizeof(TY188206), (NI64)(Length_188243 + 1));
asgnRefNoCycle((void**) &Compmods_188227->data[Length_188243].Filename, copyString(Filename_188231));
asgnRef((void**) &Compmods_188227->data[Length_188243].Module, Module_188232);
}
N_NIMCALL(TY51548*, Newmodule_188287)(NimStringDesc* Filename_188289) {
TY51548* Result_188290;
TY34461 LOC1;
NIM_BOOL LOC3;
Result_188290 = 0;
Result_188290 = (TY51548*) newObj(NTI51524, sizeof(TY51548));
objectInit(Result_188290, NTI51548);
(*Result_188290).Sup.Id = -1;
(*Result_188290).Kind = ((NU8) 6);
memset((void*)&LOC1, 0, sizeof(LOC1));
nossplitFile(Filename_188289, &LOC1);
asgnRefNoCycle((void**) &(*Result_188290).Name, Getident_50016(LOC1.Name));
LOC3 = Isnimrodidentifier_74357((*(*Result_188290).Name).S);
if (!!(LOC3)) goto LA4;
Rawmessage_43560(((NU8) 19), (*(*Result_188290).Name).S);
LA4: ;
asgnRef((void**) &(*Result_188290).Owner, Result_188290);
(*Result_188290).Info = Newlineinfo_43581(Filename_188289, 1, 1);
(*Result_188290).Flags |=(1<<((NI32)(((NU8) 0))%(sizeof(NI32)*8)));
Initstrtable_51747(&(*Result_188290).Tab);
Registermodule_188229(Filename_188289, Result_188290);
Strtableadd_56061(&(*Result_188290).Tab, Result_188290);
return Result_188290;
}
static N_INLINE(NI, Getid_51694)(void) {
NI Result_51949;
Result_51949 = 0;
Result_51949 = Gid_51693;
Gid_51693 += 1;
return Result_51949;
}
N_NIMCALL(TY51548*, Compilemodule_188320)(NimStringDesc* Filename_188322, NIM_BOOL Ismainfile_188323, NIM_BOOL Issystemfile_188324) {
TY51548* Result_188356;
TY90031* Rd_188357;
NimStringDesc* F_188358;
NIM_BOOL LOC8;
Result_188356 = 0;
Rd_188357 = 0;
Rd_188357 = NIM_NIL;
F_188358 = 0;
F_188358 = nosaddFileExt(Filename_188322, ((NimStringDesc*) &TMP192866));
Result_188356 = Newmodule_188287(Filename_188322);
if (!Ismainfile_188323) goto LA2;
(*Result_188356).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LA2: ;
if (!Issystemfile_188324) goto LA5;
(*Result_188356).Flags |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
LA5: ;
LOC8 = (Gcmd_42084 == ((NU8) 1));
if (LOC8) goto LA9;
LOC8 = (Gcmd_42084 == ((NU8) 2));
LA9: ;
if (!LOC8) goto LA10;
Rd_188357 = Handlesymbolfile_90060(Result_188356, F_188358);
if (!((*Result_188356).Sup.Id < 0)) goto LA13;
Internalerror_43578(((NimStringDesc*) &TMP192919));
LA13: ;
goto LA7;
LA10: ;
(*Result_188356).Sup.Id = Getid_51694();
LA7: ;
Processmodule_102035(Result_188356, F_188358, NIM_NIL, Rd_188357);
return Result_188356;
}
N_NIMCALL(TY51548*, Importmodule_188325)(NimStringDesc* Filename_188327) {
TY51548* Result_188328;
Result_188328 = 0;
Result_188328 = Getmodule_188256(Filename_188327);
if (!(Result_188328 == NIM_NIL)) goto LA2;
Result_188328 = Compilemodule_188320(Filename_188327, NIM_FALSE, NIM_FALSE);
goto LA1;
LA2: ;
if (!(((*Result_188328).Flags &(1<<((((NU8) 16))&31)))!=0)) goto LA4;
Limessage_43569((*Result_188328).Info, ((NU8) 37), (*(*Result_188328).Name).S);
goto LA1;
LA4: ;
LA1: ;
return Result_188328;
}
N_NIMCALL(void, Wantfile_188704)(NimStringDesc* Filename_188706) {
TY43539 LOC4;
if (!((Filename_188706) && (Filename_188706)->Sup.len == 0)) goto LA2;
LOC4 = Newlineinfo_43581(((NimStringDesc*) &TMP192921), 1, 1);
Limessage_43569(LOC4, ((NU8) 183), ((NimStringDesc*) &TMP192922));
LA2: ;
}
N_NIMCALL(void, Semanticpasses_188408)(void) {
TY102006 LOC1;
TY102006 LOC2;
TY102006 LOC3;
LOC1 = Verbosepass_182004();
Registerpass_102028(&LOC1);
LOC2 = Sempass_122001();
Registerpass_102028(&LOC2);
LOC3 = Transfpass_184005();
Registerpass_102028(&LOC3);
}
N_NIMCALL(void, Compileproject_188405)(NimStringDesc* Filename_188407) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
TY51548* LOC3;
NimStringDesc* LOC4;
TY51548* LOC5;
LOC1 = 0;
LOC1 = nosaddFileExt(((NimStringDesc*) &TMP193860), ((NimStringDesc*) &TMP192866));
LOC2 = 0;
LOC2 = nosJoinPath(Libpath_42112, LOC1);
LOC3 = 0;
LOC3 = Compilemodule_188320(LOC2, NIM_FALSE, NIM_TRUE);
LOC4 = 0;
LOC4 = nosaddFileExt(Filename_188407, ((NimStringDesc*) &TMP192866));
LOC5 = 0;
LOC5 = Compilemodule_188320(LOC4, NIM_TRUE, NIM_FALSE);
}
N_NIMCALL(void, Commandcompiletoc_188416)(NimStringDesc* Filename_188418) {
TY102006 LOC1;
TY102006 LOC2;
NimStringDesc* LOC6;
Semanticpasses_188408();
LOC1 = Cgenpass_157201();
Registerpass_102028(&LOC1);
LOC2 = Rodwritepass_108001();
Registerpass_102028(&LOC2);
Compileproject_188405(Filename_188418);
if (!!((Gcmd_42084 == ((NU8) 18)))) goto LA4;
LOC6 = 0;
LOC6 = nosChangeFileExt(Filename_188418, ((NimStringDesc*) &TMP192922));
Callccompiler_67806(LOC6);
LA4: ;
}
N_NIMCALL(void, Commandcompiletoecmascript_188601)(NimStringDesc* Filename_188603) {
TY102006 LOC1;
Gglobaloptions_42079 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_47574(((NU8) 20), ((NU8) 11));
Initdefines_60049();
Semanticpasses_188408();
LOC1 = Ecmasgenpass_174004();
Registerpass_102028(&LOC1);
Compileproject_188405(Filename_188603);
}
N_NIMCALL(void, Commandpretty_188643)(NimStringDesc* Filename_188645) {
TY51526* Module_188646;
NimStringDesc* LOC1;
NimStringDesc* LOC5;
Module_188646 = 0;
LOC1 = 0;
LOC1 = nosaddFileExt(Filename_188645, ((NimStringDesc*) &TMP192866));
Module_188646 = Parsefile_89031(LOC1);
if (!!((Module_188646 == NIM_NIL))) goto LA3;
LOC5 = 0;
LOC5 = Getoutfile_42145(Filename_188645, ((NimStringDesc*) &TMP194076));
Rendermodule_82035(Module_188646, LOC5, 0);
LA3: ;
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
N_NIMCALL(void, Commandgendepend_188410)(NimStringDesc* Filename_188412) {
TY102006 LOC1;
TY102006 LOC2;
NimStringDesc* LOC3;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Semanticpasses_188408();
LOC1 = Gendependpass_183004();
Registerpass_102028(&LOC1);
LOC2 = Cleanuppass_182006();
Registerpass_102028(&LOC2);
Compileproject_188405(Filename_188412);
Generatedot_183006(Filename_188412);
LOC3 = 0;
LOC4 = 0;
LOC4 = nosChangeFileExt(Filename_188412, ((NimStringDesc*) &TMP194488));
LOC5 = 0;
LOC5 = nosChangeFileExt(Filename_188412, ((NimStringDesc*) &TMP194489));
LOC3 = rawNewString(LOC4->Sup.len + LOC5->Sup.len + 13);
appendString(LOC3, ((NimStringDesc*) &TMP194487));
appendString(LOC3, LOC4);
appendChar(LOC3, 32);
appendString(LOC3, LOC5);
Execexternalprogram_67570(LOC3);
}
N_NIMCALL(void, Commandcheck_188413)(NimStringDesc* Filename_188415) {
Semanticpasses_188408();
Compileproject_188405(Filename_188415);
}
N_NIMCALL(void, Commandscan_188658)(NimStringDesc* Filename_188660) {
NimStringDesc* F_188661;
TY72013* Stream_188662;
TY74267 L_188674;
TY74263* Tok_188675;
F_188661 = 0;
F_188661 = nosaddFileExt(Filename_188660, ((NimStringDesc*) &TMP192866));
Stream_188662 = 0;
Stream_188662 = Llstreamopen_72032(F_188661, ((NU8) 0));
if (!!((Stream_188662 == NIM_NIL))) goto LA2;
memset((void*)&L_188674, 0, sizeof(L_188674));
L_188674.Sup.Sup.m_type = NTI74267;
Tok_188675 = 0;
Tok_188675 = (TY74263*) newObj(NTI74261, sizeof(TY74263));
(*Tok_188675).m_type = NTI74263;
Openlexer_74298(&L_188674, F_188661, Stream_188662);
while (1) {
Rawgettok_74304(&L_188674, Tok_188675);
Printtok_74320(Tok_188675);
if (!((*Tok_188675).Toktype == ((NU8) 1))) goto LA6;
goto LA4;
LA6: ;
} LA4: ;
Closelexer_74316(&L_188674);
goto LA1;
LA2: ;
Rawmessage_43560(((NU8) 2), F_188661);
LA1: ;
}
N_NIMCALL(void, Commandinteractive_188616)(void) {
TY102006 LOC1;
TY102006 LOC2;
TY102006 LOC3;
TY102006 LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
TY51548* LOC7;
TY51548* M_188630;
TY72013* LOC8;
Gglobaloptions_42079 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_47574(((NU8) 21), ((NU8) 12));
Initdefines_60049();
LOC1 = Verbosepass_182004();
Registerpass_102028(&LOC1);
LOC2 = Sempass_122001();
Registerpass_102028(&LOC2);
LOC3 = Transfpass_184005();
Registerpass_102028(&LOC3);
LOC4 = Evalpass_112046();
Registerpass_102028(&LOC4);
LOC5 = 0;
LOC5 = nosaddFileExt(((NimStringDesc*) &TMP193860), ((NimStringDesc*) &TMP192866));
LOC6 = 0;
LOC6 = nosJoinPath(Libpath_42112, LOC5);
LOC7 = 0;
LOC7 = Compilemodule_188320(LOC6, NIM_FALSE, NIM_TRUE);
M_188630 = 0;
M_188630 = Newmodule_188287(((NimStringDesc*) &TMP194492));
(*M_188630).Sup.Id = Getid_51694();
(*M_188630).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LOC8 = 0;
LOC8 = Llstreamopenstdin_72038();
Processmodule_102035(M_188630, ((NimStringDesc*) &TMP194492), LOC8, NIM_NIL);
}
N_NIMCALL(void, Maincommand_188201)(NimStringDesc* Cmd_188203, NimStringDesc* Filename_188204) {
TY34461 LOC4;
NU8 LOC5;
NimStringDesc* LOC6;
TY51526* LOC7;
Appendstr_39061(&Searchpaths_42081, Libpath_42112);
if (!!(((Filename_188204) && (Filename_188204)->Sup.len == 0))) goto LA2;
memset((void*)&LOC4, 0, sizeof(LOC4));
nossplitFile(Filename_188204, &LOC4);
Prependstr_39071(&Searchpaths_42081, LOC4.Dir);
LA2: ;
Setid_51696(100);
Gincludefile_102051 = Parsefile_89031;
Gimportmodule_102047 = Importmodule_188325;
LOC5 = Whichkeyword_69478(Cmd_188203);
switch (LOC5) {
case ((NU8) 107):
case ((NU8) 200):
case ((NU8) 176):
case ((NU8) 192):
Gcmd_42084 = ((NU8) 1);
Wantfile_188704(Filename_188204);
Commandcompiletoc_188416(Filename_188204);
break;
case ((NU8) 201):
asgnRefNoCycle((void**) &Cext_67342, copyString(((NimStringDesc*) &TMP193872)));
Gcmd_42084 = ((NU8) 2);
Wantfile_188704(Filename_188204);
Commandcompiletoc_188416(Filename_188204);
break;
case ((NU8) 204):
case ((NU8) 213):
asgnRefNoCycle((void**) &Cext_67342, copyString(((NimStringDesc*) &TMP193873)));
Gcmd_42084 = ((NU8) 3);
Wantfile_188704(Filename_188204);
Commandcompiletoc_188416(Filename_188204);
break;
case ((NU8) 179):
Gcmd_42084 = ((NU8) 18);
Wantfile_188704(Filename_188204);
Rawmessage_43560(((NU8) 177), Cmd_188203);
break;
case ((NU8) 202):
case ((NU8) 212):
Gcmd_42084 = ((NU8) 4);
Wantfile_188704(Filename_188204);
Commandcompiletoecmascript_188601(Filename_188204);
break;
case ((NU8) 203):
Gcmd_42084 = ((NU8) 5);
Wantfile_188704(Filename_188204);
Rawmessage_43560(((NU8) 177), Cmd_188203);
break;
case ((NU8) 205):
Gcmd_42084 = ((NU8) 7);
Wantfile_188704(Filename_188204);
Commandpretty_188643(Filename_188204);
break;
case ((NU8) 206):
Gcmd_42084 = ((NU8) 8);
Loadspecialconfig_77007(((NimStringDesc*) &TMP194077));
Wantfile_188704(Filename_188204);
Commanddoc_152001(Filename_188204);
break;
case ((NU8) 214):
Gcmd_42084 = ((NU8) 15);
Loadspecialconfig_77007(((NimStringDesc*) &TMP194077));
Wantfile_188704(Filename_188204);
Commandrst2html_152004(Filename_188204);
break;
case ((NU8) 215):
Gcmd_42084 = ((NU8) 16);
Loadspecialconfig_77007(((NimStringDesc*) &TMP194479));
Wantfile_188704(Filename_188204);
Commandrst2tex_152007(Filename_188204);
break;
case ((NU8) 207):
Gcmd_42084 = ((NU8) 9);
Wantfile_188704(Filename_188204);
Commandgendepend_188410(Filename_188204);
break;
case ((NU8) 208):
Gcmd_42084 = ((NU8) 10);
Listsymbols_60062();
break;
case ((NU8) 209):
Gcmd_42084 = ((NU8) 11);
Wantfile_188704(Filename_188204);
Commandcheck_188413(Filename_188204);
break;
case ((NU8) 210):
Gcmd_42084 = ((NU8) 12);
Wantfile_188704(Filename_188204);
LOC6 = 0;
LOC6 = nosaddFileExt(Filename_188204, ((NimStringDesc*) &TMP192866));
LOC7 = 0;
LOC7 = Parsefile_89031(LOC6);
break;
case ((NU8) 211):
Gcmd_42084 = ((NU8) 13);
Wantfile_188704(Filename_188204);
Commandscan_188658(Filename_188204);
Messageout_43557(((NimStringDesc*) &TMP194491));
break;
case ((NU8) 216):
Gcmd_42084 = ((NU8) 17);
Commandinteractive_188616();
break;
default:
Rawmessage_43560(((NU8) 177), Cmd_188203);
break;
}
}
N_NOINLINE(void, mainInit)(void) {
asgnRefNoCycle((void**) &Compmods_188227, (TY188208*) newSeq(NTI188208, 0));
}

