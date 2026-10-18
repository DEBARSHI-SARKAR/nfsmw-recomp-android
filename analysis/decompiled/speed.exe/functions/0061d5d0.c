/* speed.exe 0061d5d0 FUN_0061d5d0; analysis pseudocode, not buildable source.
 * calls 0061d350 FUN_0061d350
 * calls 00465a70 FUN_00465a70
 * calls 00612ab0 FUN_00612ab0
 * calls 0060c960 FUN_0060c960
 * calls 006197b0 FUN_006197b0
 * calls 00616a70 FUN_00616a70
 */

int * __thiscall FUN_0061d5d0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  iVar1 = (int)param_2;
  param_2 = (int *)((int)param_2 + 7U >> 3);
  local_4 = param_1;
  if (param_2 != (int *)0x0) {
    if (param_2 < 0x10) {
      piVar3 = *(int **)(param_1 + 0x10 + (int)param_2 * 4);
      if (piVar3 != (int *)0x0) {
        *(int *)(param_1 + 0x10 + (int)param_2 * 4) = *piVar3;
        return piVar3;
      }
    }
    else {
      FUN_00612ab0(&local_4,&param_2);
      if (local_4 != *(int *)(param_1 + 0x54)) {
        piVar3 = *(int **)(local_4 + 0x10);
        iVar1 = *piVar3;
        if (iVar1 != 0) {
          piVar2 = (int *)FUN_0061d350(&param_2);
          *piVar2 = iVar1;
          return piVar3;
        }
        FUN_006197b0(&param_2,local_4);
        return piVar3;
      }
    }
  }
  uVar5 = *(int *)(param_1 + 8) + iVar1;
  if (uVar5 < *(uint *)(param_1 + 4)) {
    piVar3 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8));
    uVar5 = uVar5 + 7 & 0xfffffff8;
    *(uint *)(param_1 + 8) = uVar5;
    if (*(uint *)(param_1 + 4) < uVar5 + 0x3000) {
      *(undefined1 *)(param_1 + 0x71) = 1;
      return piVar3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x71) = 1;
    piVar3 = (int *)FUN_00465a70(iVar1,0x40);
    iVar1 = *(int *)(param_1 + 0x60);
    param_2 = piVar3;
    iVar4 = FUN_0060c960(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
    FUN_00616a70(1);
    *(int *)(iVar1 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  return piVar3;
}

