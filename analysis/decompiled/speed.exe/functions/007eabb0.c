/* speed.exe 007eabb0 FUN_007eabb0; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 * calls 007e9f70 FUN_007e9f70
 * calls 007ea130 FUN_007ea130
 * calls 007ea9a0 FUN_007ea9a0
 * calls 007ea050 FUN_007ea050
 * calls 007e9d50 FUN_007e9d50
 * calls 007ea1f0 FUN_007ea1f0
 * calls 007e9bf0 FUN_007e9bf0
 */

void FUN_007eabb0(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)0x0;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar3 = param_1;
    if (*(int *)(param_2 + 0x50) == 0) {
      puVar3 = (undefined1 *)(((uint)(param_1 + 0x9f) & 0xffffff80) - 0x20);
    }
    FUN_007ea9a0(param_2);
    iVar1 = FUN_007e9bf0(param_2);
    param_1 = puVar3 + iVar1;
  }
  puVar2 = puVar3;
  if ((*(byte *)(param_2 + 4) & 4) != 0) {
    puVar2 = param_1;
    if ((*(int *)(param_2 + 0x60) == 0) &&
       (puVar2 = (undefined1 *)(((uint)(param_1 + 0x2f) & 0xfffffff0) - 0x20),
       puVar3 != (undefined1 *)0x0)) {
      if (puVar2 == (undefined1 *)0x0) {
        *(undefined4 *)(puVar3 + 4) = 0;
      }
      else {
        *(int *)(puVar3 + 4) = (int)puVar2 - (int)puVar3;
      }
    }
    FUN_007e9f70(param_2);
    iVar1 = FUN_007e9d50(param_2);
    param_1 = puVar2 + iVar1;
  }
  puVar3 = puVar2;
  if ((*(uint *)(param_2 + 4) & 0x100) != 0) {
    param_1 = (undefined1 *)((uint)(param_1 + 0x2f) & 0xfffffff0);
    puVar3 = param_1 + -0x20;
    if (puVar2 != (undefined1 *)0x0) {
      if (puVar3 == (undefined1 *)0x0) {
        *(undefined4 *)(puVar2 + 4) = 0;
      }
      else {
        *(int *)(puVar2 + 4) = (int)puVar3 - (int)puVar2;
      }
    }
    FUN_007ea050(param_2);
  }
  if ((*(byte *)(param_2 + 4) & 0x10) != 0) {
    iVar1 = ((uint)(param_1 + 0x2f) & 0xfffffff0) - 0x20;
    if (puVar3 != (undefined1 *)0x0) {
      if (iVar1 == 0) {
        *(undefined4 *)(puVar3 + 4) = 0;
      }
      else {
        *(int *)(puVar3 + 4) = iVar1 - (int)puVar3;
      }
    }
    FUN_007ea130(param_2);
    param_1 = extraout_ECX + *(int *)(param_2 + 0x80) * *(int *)(param_2 + 0x7c) * 4 + 0x20;
    puVar3 = extraout_ECX;
  }
  puVar2 = puVar3;
  if (*(char *)(param_2 + 4) < '\0') {
    puVar2 = (undefined1 *)(((uint)(param_1 + 0x1f) & 0xfffffff0) - 0x10);
    if (puVar3 != (undefined1 *)0x0) {
      if (puVar2 == (undefined1 *)0x0) {
        *(undefined4 *)(puVar3 + 4) = 0;
      }
      else {
        *(int *)(puVar3 + 4) = (int)puVar2 - (int)puVar3;
      }
    }
    FUN_007ea1f0(param_2);
    param_1 = (undefined1 *)(((uint)(param_1 + 0x1f) & 0xfffffff0) + *(int *)(param_2 + 0x84));
  }
  if ((*(byte *)(param_2 + 4) & 0x20) != 0) {
    iVar1 = ((uint)(param_1 + 0x1f) & 0xfffffff0) - 0x10;
    if (puVar2 != (undefined1 *)0x0) {
      if (iVar1 == 0) {
        *(undefined4 *)(puVar2 + 4) = 0;
      }
      else {
        *(int *)(puVar2 + 4) = iVar1 - (int)puVar2;
      }
    }
    FUN_007e9ef0(param_2);
    *extraout_ECX_00 = 0x6f;
    iVar1 = *(int *)(param_2 + 0x90);
    puVar2 = extraout_ECX_00;
    if (extraout_ECX_00 + 0x10 == (undefined1 *)0x0) {
      *(undefined4 *)(extraout_ECX_00 + 8) = 0;
      *(undefined4 *)(extraout_ECX_00 + 0xc) = 0;
    }
    else {
      *(int *)(extraout_ECX_00 + 8) = (int)(extraout_ECX_00 + 0x10) - (int)extraout_ECX_00;
      *(int *)(extraout_ECX_00 + 0xc) = iVar1 + 1;
    }
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = 0;
  }
  return;
}

