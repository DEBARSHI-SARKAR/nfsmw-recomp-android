/* speed.exe 006a7f70 FUN_006a7f70; analysis pseudocode, not buildable source.
 * calls 006a7bd0 FUN_006a7bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006a7f70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,
            float *param_6)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x4c))();
    if (2 < iVar1) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
      (**(code **)(*piVar2 + 0x34))(&fStack_18);
      (**(code **)(*piVar2 + 0x3c))(&fStack_28);
      (**(code **)(*piVar2 + 0x4c))(&fStack_14);
      if (_DAT_008f8760 < fStack_1c * param_6[2] + fStack_24 * *param_6 + fStack_20 * param_6[1]) {
        pfVar3 = (float *)(**(code **)(*piVar2 + 0x20))();
        fStack_8 = -fStack_8;
        fStack_4 = fStack_4 * _DAT_008ababc;
        fStack_30 = fStack_18 * fStack_4 + fStack_24 * fStack_8 + *pfVar3;
        fStack_2c = fStack_14 * fStack_4 + fStack_20 * fStack_8 + pfVar3[1];
        fStack_28 = fStack_10 * fStack_4 + fStack_8 * fStack_1c + pfVar3[2];
        FUN_006a7bd0(param_2,-(*param_5 * *param_6 +
                              param_5[2] * param_6[2] + param_5[1] * param_6[1]),&fStack_30,param_5,
                     param_6,0x31047ebc,0);
        return;
      }
    }
  }
  FUN_006a7bd0(param_2,param_3,param_4,param_5,param_6,0xd9c6cdfd,0);
  return;
}

