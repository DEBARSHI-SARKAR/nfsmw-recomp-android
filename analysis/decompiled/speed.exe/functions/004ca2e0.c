/* speed.exe 004ca2e0 FUN_004ca2e0; analysis pseudocode, not buildable source.
 * calls 004c91d0 FUN_004c91d0
 */

void __thiscall FUN_004ca2e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_b0;
  int local_a8 [2];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined1 local_8c;
  int local_88;
  int local_84 [33];
  
  piVar5 = local_84;
  local_b0 = 0;
  for (iVar4 = 0x20; piVar5 = piVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
  }
  do {
    puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 4);
    while( true ) {
      if (puVar2 == *(undefined4 **)(param_1 + 4)) {
        piVar5 = local_84 + local_b0;
        goto LAB_004ca3a0;
      }
      local_98 = puVar2[6];
      local_a8[0] = puVar2[2];
      local_9c = puVar2[5];
      iVar4 = puVar2[10];
      local_94 = puVar2[7];
      local_90 = puVar2[8];
      local_8c = *(undefined1 *)(puVar2 + 9);
      local_a0 = puVar2[4];
      local_84[0] = puVar2[0xb];
      if ((local_a0 == param_2) && (local_9c == param_3)) break;
      puVar2 = (undefined4 *)*puVar2;
    }
    local_88 = iVar4;
    FUN_004c91d0(local_a8);
    local_84[local_b0 + 1] = iVar4;
    local_b0 = local_b0 + 1;
  } while( true );
LAB_004ca3a0:
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      local_a8[0] = piVar3[2];
      local_a0 = piVar3[4];
      local_9c = piVar3[5];
      local_98 = piVar3[6];
      local_94 = piVar3[7];
      local_90 = piVar3[8];
      local_8c = (undefined1)piVar3[9];
      local_88 = piVar3[10];
      local_84[0] = piVar3[0xb];
      if (*piVar5 == local_88) {
        FUN_004c91d0(local_a8);
        goto LAB_004ca3a0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
  }
  local_b0 = local_b0 + -1;
  piVar5 = piVar5 + -1;
  if (local_b0 < 1) {
    return;
  }
  goto LAB_004ca3a0;
}

