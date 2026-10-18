/* speed.exe 0061b410 FUN_0061b410; analysis pseudocode, not buildable source.
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 * calls 00614c50 FUN_00614c50
 */

undefined4 FUN_0061b410(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *local_10;
  int local_c;
  undefined4 local_8;
  
  piVar7 = *(int **)(param_1 + 0xc);
  iVar6 = piVar7[-1];
  if ((*(char *)(iVar6 + 7) == '\0') || ((int *)(iVar6 + 0x10) == (int *)0x0)) {
    local_10 = (code *)0x0;
  }
  else {
    iVar8 = *(int *)(iVar6 + 0x10);
    if (iVar8 == 2) {
      local_10 = *(code **)(iVar6 + 0x14);
    }
    else if (iVar8 == 7) {
      local_10 = (code *)(*(int *)(iVar6 + 0x14) + 0x10);
    }
    else {
      local_10 = (code *)0x0;
    }
  }
  if ((piVar7 < *(int **)(param_1 + 8)) && (piVar7 != (int *)0x0)) {
    if (*piVar7 == 2) {
      puVar5 = (undefined4 *)piVar7[1];
    }
    else {
      if (*piVar7 != 7) goto LAB_0061b487;
      puVar5 = (undefined4 *)(piVar7[1] + 0x10);
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0061b487;
    local_8 = *puVar5;
  }
  else {
LAB_0061b487:
    local_8 = 0;
  }
  piVar1 = piVar7 + 2;
  if ((piVar1 < *(int **)(param_1 + 8)) && (piVar1 != (int *)0x0)) {
    if (*piVar1 == 4) {
      local_c = piVar7[3] + 0x10;
    }
    else {
      iVar6 = FUN_00614c50(param_1,piVar1);
      if (iVar6 == 0) {
        local_c = 0;
      }
      else {
        local_c = piVar7[3] + 0x10;
      }
    }
  }
  else {
    local_c = 0;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  piVar7 = (int *)(iVar6 + 0x10);
  if ((piVar7 < *(int **)(param_1 + 8)) && (piVar7 != (int *)0x0)) {
    if (*piVar7 == 4) {
      iVar6 = *(int *)(iVar6 + 0x14) + 0x10;
    }
    else {
      iVar8 = FUN_00614c50(param_1,piVar7);
      if (iVar8 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x14) + 0x10;
      }
    }
  }
  else {
    iVar6 = 0;
  }
  FUN_0060b060(param_1,4);
  uVar2 = FUN_007c4b80();
  iVar8 = *(int *)(param_1 + 0xc);
  piVar7 = (int *)(iVar8 + 0x20);
  if ((piVar7 < *(int **)(param_1 + 8)) && (piVar7 != (int *)0x0)) {
    if (*piVar7 == 4) {
      iVar8 = *(int *)(iVar8 + 0x24) + 0x10;
      goto LAB_0061b54b;
    }
    iVar4 = FUN_00614c50(param_1,piVar7);
    if (iVar4 != 0) {
      iVar8 = *(int *)(iVar8 + 0x24) + 0x10;
      goto LAB_0061b54b;
    }
  }
  iVar8 = 0;
LAB_0061b54b:
  iVar4 = *(int *)(param_1 + 0xc);
  piVar7 = (int *)(iVar4 + 0x28);
  if (((piVar7 < *(int **)(param_1 + 8)) && (piVar7 != (int *)0x0)) &&
     ((*piVar7 == 4 || (iVar3 = FUN_00614c50(param_1,piVar7), iVar3 != 0)))) {
    iVar4 = *(int *)(iVar4 + 0x2c) + 0x10;
  }
  else {
    iVar4 = 0;
  }
  (*local_10)(local_8,local_c,iVar6,uVar2,iVar8,iVar4);
  return 0;
}

