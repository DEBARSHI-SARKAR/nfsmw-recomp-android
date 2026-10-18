/* speed.exe 005dc320 FUN_005dc320; analysis pseudocode, not buildable source.
 * calls 005dc280 FUN_005dc280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005dc320(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar2 = param_4;
  fVar5 = (float10)FUN_005dc280(param_2,param_3,param_4);
  iVar1 = *(int *)(param_1 + 0x1958);
  iVar4 = 0;
  param_4 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (((iVar4 != param_3) &&
          (fVar6 = (float10)FUN_005dc280(param_2,iVar4,uVar2), fVar6 < (float10)(float)fVar5)) &&
         ((float10)_DAT_00890968 < fVar6)) {
        param_4 = param_4 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = param_4;
    } while (iVar4 < iVar1);
  }
  return iVar3 + 1;
}

