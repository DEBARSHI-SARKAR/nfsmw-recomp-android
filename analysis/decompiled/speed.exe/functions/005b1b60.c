/* speed.exe 005b1b60 FUN_005b1b60; analysis pseudocode, not buildable source.
 * calls 005b1b60 FUN_005b1b60
 * calls 005ae890 FUN_005ae890
 */

undefined4 FUN_005b1b60(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == *(int *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x2c);
    *param_3 = *(float *)(iVar2 + 0x1c) + *param_3;
    param_3[1] = *(float *)(iVar2 + 0x20) + param_3[1];
    return 1;
  }
  if (*(int *)(param_2 + 0x18) == 5) {
    uVar3 = FUN_005ae890(param_1);
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      iVar1 = *(int *)(iVar2 + 0x2c);
      *param_3 = *(float *)(iVar1 + 0x1c) + *param_3;
      param_3[1] = *(float *)(iVar1 + 0x20) + param_3[1];
      for (iVar2 = *(int *)(iVar2 + 100); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        FUN_005b1b60(param_1,iVar2,param_3);
      }
      return 1;
    }
  }
  return 0;
}

