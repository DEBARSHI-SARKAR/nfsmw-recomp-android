/* speed.exe 006c6d10 FUN_006c6d10; analysis pseudocode, not buildable source.
 * calls 006c68b0 FUN_006c68b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6d10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((DAT_00982cb4 != *param_1) || (DAT_00982cb8 != param_1[1])) || (DAT_00982cbc != param_1[2])
       ) || ((DAT_00982cc0 != param_1[3] || (DAT_00982cc8 != DAT_00982c80)))) ||
     (DAT_00982cd0 != param_2)) {
    _DAT_00987b30 = _DAT_00987b30 + 1;
    DAT_00982cb4 = *param_1;
    if (((int *)*param_1 == (int *)0x0) || (iVar1 = *(int *)*param_1, iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    DAT_00982cb8 = param_1[1];
    if (((int *)param_1[1] == (int *)0x0) || (iVar3 = *(int *)param_1[1], iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x18);
    }
    DAT_00982cbc = param_1[2];
    if (((int *)param_1[2] == (int *)0x0) || (iVar2 = *(int *)param_1[2], iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x18);
    }
    DAT_00982cc0 = param_1[3];
    if (((int *)param_1[3] == (int *)0x0) || (iVar4 = *(int *)param_1[3], iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x18);
    }
    _DAT_00982cc4 = param_1[4];
    if (iVar1 != 0) {
      DAT_00982cc8 = DAT_00982c80;
      DAT_00982cd0 = param_2;
      FUN_006c68b0(*param_1,param_2);
      if ((iVar3 != 0) && (iVar1 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x9ac), iVar1 != 0)) {
        (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
                  (*(int **)(DAT_00982c80 + 0x48),iVar1,iVar3);
      }
      if ((iVar2 != 0) && (iVar1 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x844), iVar1 != 0)) {
        (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
                  (*(int **)(DAT_00982c80 + 0x48),iVar1,iVar2);
      }
      if ((iVar4 != 0) && (iVar1 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0xca4), iVar1 != 0)) {
        (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
                  (*(int **)(DAT_00982c80 + 0x48),iVar1,iVar4);
      }
    }
  }
  return;
}

