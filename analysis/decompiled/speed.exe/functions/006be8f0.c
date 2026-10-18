/* speed.exe 006be8f0 FUN_006be8f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006be8f0(int *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = (float *)(*param_1 + 0x144);
  do {
    if (*pfVar1 * param_2[1] + pfVar1[-1] * *param_2 + pfVar1[1] * param_2[2] + pfVar1[2] <=
        _DAT_00890968) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (iVar2 < 6);
  return 2;
}

