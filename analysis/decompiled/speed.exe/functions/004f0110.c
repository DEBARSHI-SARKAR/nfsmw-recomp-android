/* speed.exe 004f0110 FUN_004f0110; analysis pseudocode, not buildable source.
 * calls 004cd570 FUN_004cd570
 * calls 004ae8b0 FUN_004ae8b0
 * calls 007c4b80 FUN_007c4b80
 */

void __fastcall FUN_004f0110(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iStack_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar6 = *(int **)(param_1 + 0x10);
    local_18 = 0;
    local_8 = 0;
    local_4 = 0;
    if ((piVar6 == (int *)0x0) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      local_c = 0;
    }
    else {
      local_c = *piVar6 >> 0x10 & 0xffff;
    }
    if (piVar6 == (int *)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = *piVar6 >> 0x10 & 0x7fff;
    }
    local_10 = 0x1000;
    FUN_004cd570(&local_18);
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    if (*(char *)(puVar1 + 8) == '\0') {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    puVar2 = *(uint **)(param_1 + 0x10);
    local_18 = 0;
    local_8 = 0;
    local_4 = 0;
    if ((puVar2 == (uint *)0x0) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      local_c = 0;
    }
    else {
      local_c = *puVar2 & 0xffff;
    }
    if (puVar2 == (uint *)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = (int)puVar2[1] >> 0x10 & 0x7fff;
    }
    local_10 = 0x1000;
    FUN_004cd570(&local_18);
    puVar1 = *(undefined4 **)(param_1 + 0x44);
    if (*(char *)(puVar1 + 8) == '\0') {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  piVar6 = (int *)(param_1 + 0x2c);
  iStack_1c = 3;
  do {
    if (*piVar6 != 0) {
      puVar2 = *(uint **)(param_1 + 0x10);
      local_14 = 0x7fff;
      local_10 = 0x1000;
      local_18 = 0;
      local_8 = 0;
      local_4 = 0;
      if ((puVar2 == (uint *)0x0) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
        local_c = 0;
      }
      else {
        local_c = *puVar2 & 0xffff;
      }
      if (puVar2 == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)*puVar2 >> 0x10 & 0x7fff;
      }
      iVar5 = FUN_007c4b80();
      iVar5 = iVar5 >> 5;
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      else if (3 < iVar5) {
        iVar5 = 3;
      }
      local_14 = (int)((&DAT_008efc60)[iVar5] * uVar4) >> 0xf;
      local_10 = 0x1000;
      FUN_004cd570(&local_18);
      if (*(char *)(*piVar6 + 0x20) != '\0') {
        cVar3 = FUN_004ae8b0();
        if (cVar3 == '\0') goto LAB_004f0311;
      }
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
      *piVar6 = 0;
    }
LAB_004f0311:
    piVar6 = piVar6 + 1;
    iStack_1c = iStack_1c + -1;
    if (iStack_1c == 0) {
      return;
    }
  } while( true );
}

