/* speed.exe 0081bdb2 FUN_0081bdb2; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 0081d5f2 FUN_0081d5f2
 * calls 00819648 FUN_00819648
 * calls 0081962e FUN_0081962e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0081bdb2(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_009c2188 == '\0') {
    uVar4 = 0xfffffff6;
  }
  else {
    iVar2 = FUN_0081c131(param_2,param_1,param_1);
    if (iVar2 != 0) {
      fVar6 = (float)param_4 * _DAT_00890bf0;
      if (param_3 < 1) {
        uVar4 = FUN_0081d5f2(param_2,0xffffffff,fVar6);
        return uVar4;
      }
      fVar5 = _DAT_0089096c / (float)param_3;
      pfVar3 = (float *)(iVar2 + 0x15c);
      iVar2 = 6;
      do {
        if (*pfVar3 != _DAT_00890968) {
          FUN_00819648(pfVar3 + -5);
        }
        *pfVar3 = fVar6 - pfVar3[-6];
        fVar1 = (fVar6 - pfVar3[-6]) * fVar5 * _DAT_009c1b54;
        pfVar3[-1] = fVar6;
        *pfVar3 = fVar1;
        if (*pfVar3 != _DAT_00890968) {
          pfVar3[-2] = (float)(pfVar3 + -8);
          pfVar3[-3] = (float)&LAB_0081bce6;
          FUN_0081962e(pfVar3 + -5);
        }
        pfVar3 = pfVar3 + 9;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
    uVar4 = 0xfffffff8;
  }
  return uVar4;
}

