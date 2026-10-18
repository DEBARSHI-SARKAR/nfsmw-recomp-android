/* speed.exe 0080710b FUN_0080710b; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0080710b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 8);
  uVar2 = ((uint)((*(int *)(param_1 + 4) + -1) * param_2) >> 8) + 1;
  if (uVar2 * 0x1000000 <= uVar3) {
    uVar3 = uVar3 + uVar2 * -0x1000000;
    local_8 = 1;
    uVar2 = *(int *)(param_1 + 4) - uVar2;
  }
  while (uVar2 < 0x80) {
    uVar2 = uVar2 * 2;
    uVar3 = uVar3 * 2;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      uVar3 = uVar3 | *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
      iVar1 = 8;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(int *)(param_1 + 0xc) = iVar1;
  *(uint *)(param_1 + 8) = uVar3;
  return local_8;
}

