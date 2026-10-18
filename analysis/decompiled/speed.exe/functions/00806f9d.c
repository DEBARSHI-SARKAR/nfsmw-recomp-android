/* speed.exe 00806f9d FUN_00806f9d; analysis pseudocode, not buildable source.
 */

bool FUN_00806f9d(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = *(int *)(param_1 + 4) + 1U >> 1;
  bVar4 = uVar3 < uVar1 * 0x1000000;
  if (bVar4) {
    uVar3 = uVar3 << 1;
  }
  else {
    uVar3 = (uVar3 + uVar1 * -0x1000000) * 2;
    uVar1 = *(int *)(param_1 + 4) - uVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc) + -1;
  if (iVar2 == 0) {
    uVar3 = uVar3 | *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
    iVar2 = 8;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  *(uint *)(param_1 + 8) = uVar3;
  *(int *)(param_1 + 0xc) = iVar2;
  *(uint *)(param_1 + 4) = uVar1 * 2;
  return !bVar4;
}

