/* speed.exe 00613cc0 FUN_00613cc0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 */

void FUN_00613cc0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_4;
  
  uVar6 = param_2 * 4;
  puVar5 = (undefined4 *)0x0;
  if (uVar6 == 0) {
LAB_00613cd5:
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (uVar6 < 0xfffffffd) {
      puVar5 = (undefined4 *)(*DAT_0091e0e0)(param_1,0,0,uVar6,9);
      if (puVar5 == (undefined4 *)0x0) {
        if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(param_1,4);
        }
        goto LAB_00613cd5;
      }
    }
    else {
      FUN_00613880(param_1,"memory allocation error: block too big");
    }
    if (param_1 != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar6;
    }
  }
  piVar1 = *(int **)(param_1 + 0x10);
  iVar4 = param_2;
  puVar7 = puVar5;
  if (0 < param_2) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  local_4 = 0;
  if (0 < piVar1[2]) {
    do {
      piVar3 = *(int **)(*piVar1 + local_4 * 4);
      if (piVar3 != (int *)0x0) {
        do {
          piVar2 = (int *)*piVar3;
          uVar6 = piVar3[2] & param_2 - 1U;
          *piVar3 = puVar5[uVar6];
          puVar5[uVar6] = piVar3;
          piVar3 = piVar2;
        } while (piVar2 != (int *)0x0);
      }
      local_4 = local_4 + 1;
    } while (local_4 < piVar1[2]);
  }
  iVar4 = piVar1[2];
  if (*piVar1 != 0) {
    (*DAT_0091e0e4)(param_1,*piVar1,iVar4 * 4,9);
    *(int *)(*(int *)(param_1 + 0x10) + 0x24) =
         *(int *)(*(int *)(param_1 + 0x10) + 0x24) + iVar4 * -4;
  }
  *piVar1 = (int)puVar5;
  piVar1[2] = param_2;
  return;
}

