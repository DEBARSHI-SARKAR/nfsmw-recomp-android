/* speed.exe 0079bb20 FUN_0079bb20; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 * calls 0079bac0 FUN_0079bac0
 * calls 00460f20 FUN_00460f20
 * calls 00794e70 FUN_00794e70
 */

int FUN_0079bb20(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4 [4];
  
  uVar1 = param_2;
  switch(param_2 & 0xfffffff) {
  case 0:
    FUN_0079bac0();
    piVar2 = (int *)FUN_00794e70(&param_2,param_3);
    iVar4 = *piVar2;
    piVar2 = (int *)FUN_00794e70(local_4,param_4);
    iVar3 = *piVar2;
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 < 0) {
      if (*(int *)(iVar3 + 0x10) < 0) {
        if (-1 < iVar4) goto LAB_0079bb8c;
        goto LAB_0079bb98;
      }
      iVar4 = 1;
    }
    else {
LAB_0079bb8c:
      if (*(int *)(iVar3 + 0x10) < 0) {
        iVar4 = -1;
      }
      else {
LAB_0079bb98:
        iVar4 = iVar4 - *(int *)(iVar3 + 0x10);
      }
    }
    if (-1 < (int)uVar1) {
      return -iVar4;
    }
    break;
  case 1:
    iVar4 = FUN_00460f20(param_3 + 0x28,0x2e);
    iVar3 = FUN_00460f20(param_4 + 0x28,0x2e);
    iVar4 = FUN_00460dd0(iVar4 + 1,iVar3 + 1);
    if (-1 < (int)uVar1) {
      return -iVar4;
    }
    break;
  default:
    iVar4 = 0;
    break;
  case 3:
    iVar4 = *(int *)(param_3 + 0x24) - *(int *)(param_4 + 0x24);
    if (-1 < (int)param_2) {
      return -iVar4;
    }
  }
  return iVar4;
}

