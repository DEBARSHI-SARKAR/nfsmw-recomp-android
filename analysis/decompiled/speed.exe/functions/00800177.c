/* speed.exe 00800177 FUN_00800177; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00800177(int param_1)

{
  uint uVar1;
  uint uVar2;
  int local_8;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = *(int *)(param_1 + 4) + 1U >> 1;
  if (uVar1 * 0x1000000 <= uVar2) {
    uVar2 = uVar2 + uVar1 * -0x1000000;
    uVar1 = *(int *)(param_1 + 4) - uVar1;
  }
  uVar2 = uVar2 * 2;
  local_8 = *(int *)(param_1 + 0xc) + -1;
  if (local_8 == 0) {
    uVar2 = uVar2 | *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
    local_8 = 8;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  *(uint *)(param_1 + 4) = uVar1 * 2;
  *(uint *)(param_1 + 8) = uVar2;
  *(int *)(param_1 + 0xc) = local_8;
  return;
}

