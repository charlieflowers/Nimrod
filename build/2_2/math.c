/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

N_NIMCALL(NIM_BOOL, Ispoweroftwo_101271)(NI X_101273) {
NIM_BOOL Result_101274;
Result_101274 = 0;
Result_101274 = ((NI64)(X_101273 & ((NI64)-(X_101273))) == X_101273);
goto BeforeRet;
BeforeRet: ;
return Result_101274;
}
N_NIMCALL(NI, Nextpoweroftwo_101277)(NI X_101279) {
NI Result_101280;
Result_101280 = 0;
Result_101280 = (NI64)(X_101279 - 1);
Result_101280 = (NI64)(Result_101280 | (NI64)((NU64)(Result_101280) >> (NU64)(32)));
Result_101280 = (NI64)(Result_101280 | (NI64)((NU64)(Result_101280) >> (NU64)(16)));
Result_101280 = (NI64)(Result_101280 | (NI64)((NU64)(Result_101280) >> (NU64)(8)));
Result_101280 = (NI64)(Result_101280 | (NI64)((NU64)(Result_101280) >> (NU64)(4)));
Result_101280 = (NI64)(Result_101280 | (NI64)((NU64)(Result_101280) >> (NU64)(2)));
Result_101280 = (NI64)(Result_101280 | (NI64)((NU64)(Result_101280) >> (NU64)(1)));
Result_101280 += 1;
return Result_101280;
}
N_NOINLINE(void, mathInit)(void) {
}

