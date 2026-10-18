/* speed.exe 004c7d20 FUN_004c7d20; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 004b1f90 FUN_004b1f90
 * calls 004baaf0 FUN_004baaf0
 */

void __thiscall FUN_004c7d20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DAT_009120e4 = param_1;
  if (param_2 == 3) {
    puVar2 = _malloc(0x174);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[6] = 0xffffffff;
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_00897494;
      goto LAB_004c7dba;
    }
  }
  else {
    puVar2 = _malloc(0x174);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[6] = 0xffffffff;
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_00897494;
    }
    *(undefined4 **)(param_1 + 0x14) = puVar2;
    FUN_004b1f90(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    iVar3 = FUN_004baaf0(0x10,0x20,0x10000);
    if (iVar3 < 0) {
      *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
    }
    else {
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      if (*(int *)(*(int *)(iVar1 + 0x24) + 0x14) == 0) {
        *(int *)(*(int *)(iVar1 + 0x24) + 0x14) = iVar1;
      }
    }
    puVar2 = _malloc(0x174);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[6] = 0xffffffff;
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_00897494;
      goto LAB_004c7dba;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_004c7dba:
  *(undefined4 **)(param_1 + 0x18) = puVar2;
  FUN_004b1f90(param_1);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_004baaf0(8,0x20,(DAT_009120dc + 5) * 0x8000);
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar1 + 0x28) = 1;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if (*(int *)(*(int *)(iVar1 + 0x24) + 0x18) == 0) {
      *(int *)(*(int *)(iVar1 + 0x24) + 0x18) = iVar1;
    }
  }
  puVar2 = _malloc(0x174);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[6] = 0xffffffff;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_00897494;
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar2;
  FUN_004b1f90(param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = FUN_004baaf0(8,0x20,(DAT_009120e0 + 4) * 0x8000);
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
    return;
  }
  *(undefined4 *)(iVar1 + 0x28) = 2;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  if (*(int *)(*(int *)(iVar1 + 0x24) + 0x1c) == 0) {
    *(int *)(*(int *)(iVar1 + 0x24) + 0x1c) = iVar1;
  }
  return;
}

