/* speed.exe 004305d0 FUN_004305d0; analysis pseudocode, not buildable source.
 * calls 0041e920 FUN_0041e920
 */

void FUN_004305d0(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  pfVar2 = param_1;
  if (param_1 != param_2) {
    while (pfVar1 = pfVar2, pfVar2 = pfVar1 + 8, pfVar2 != param_2) {
      pfVar4 = pfVar2;
      pfVar3 = param_1;
      if (*param_1 <= *pfVar2) {
        do {
          pfVar3 = pfVar4;
          pfVar4 = pfVar3 + -8;
        } while (*pfVar2 < *pfVar4);
      }
      if ((pfVar3 != pfVar2) && (pfVar2 != pfVar1 + 0x10)) {
        FUN_0041e920(pfVar3,pfVar2,pfVar1 + 0x10,0,0);
      }
    }
  }
  return;
}

