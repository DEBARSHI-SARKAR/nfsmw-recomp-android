/* speed.exe 00806f24 FUN_00806f24; analysis pseudocode, not buildable source.
 */

bool FUN_00806f24(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar1 = ((uint)((*(int *)(param_1 + 4) + -1) * param_2) >> 8) + 1;
  uVar4 = *(uint *)(param_1 + 8);
  bVar5 = uVar1 * 0x1000000 <= uVar4;
  uVar2 = uVar1;
  if (bVar5) {
    uVar2 = *(int *)(param_1 + 4) - uVar1;
    uVar4 = uVar4 + uVar1 * -0x1000000;
  }
  if (uVar2 < 0x80) {
    do {
      uVar2 = uVar2 * 2;
      uVar4 = uVar4 * 2;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        uVar4 = uVar4 | *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
        iVar3 = 8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    } while (uVar2 < 0x80);
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(uint *)(param_1 + 8) = uVar4;
  *(uint *)(param_1 + 4) = uVar2;
  return bVar5;
}

