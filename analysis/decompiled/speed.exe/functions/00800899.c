/* speed.exe 00800899 FUN_00800899; analysis pseudocode, not buildable source.
 */

void FUN_00800899(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1f8) != -8) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x10c)) = 0xffffffff;
      *(undefined2 *)(iVar2 + 8 + *(int *)(param_1 + 0x10c)) = 4;
      *(undefined2 *)(iVar2 + 10 + *(int *)(param_1 + 0x10c)) = 0;
      *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x10c)) = 0;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < *(int *)(param_1 + 0x1f8) + 8U);
  }
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x1f8) >> 1 != 0xfffffff8) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x110)) = 0xffffffff;
      *(undefined2 *)(iVar2 + 8 + *(int *)(param_1 + 0x110)) = 4;
      *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x110)) = 0;
      *(undefined2 *)(iVar2 + 10 + *(int *)(param_1 + 0x110)) = 0;
      *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x114)) = 0xffffffff;
      *(undefined2 *)(iVar2 + 8 + *(int *)(param_1 + 0x114)) = 4;
      *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x114)) = 0;
      *(undefined2 *)(iVar2 + 10 + *(int *)(param_1 + 0x114)) = 0;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < (*(uint *)(param_1 + 0x1f8) >> 1) + 8);
  }
  if (*(byte *)(param_1 + 0x19c) < 6) {
    *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x14) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x110) + 0x18) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x14) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x114) + 0x18) = 0;
  }
  iVar2 = 2;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 300) = 0x80;
  *(undefined2 *)(param_1 + 0x134) = 0x80;
  puVar1 = (undefined2 *)(param_1 + 0x12e);
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

