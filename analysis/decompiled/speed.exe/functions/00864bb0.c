/* speed.exe 00864bb0 FUN_00864bb0; analysis pseudocode, not buildable source.
 */

uint FUN_00864bb0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = 0x80000000;
  if (iVar1 != 0) {
    if (param_2 == -2) {
      iVar4 = *(int *)(param_1 + 0x10);
      uVar2 = 0;
      if (0 < iVar4) {
        puVar3 = (uint *)(iVar1 + 0x24);
        do {
          uVar2 = uVar2 | *puVar3;
          puVar3 = puVar3 + 0x117;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return uVar2;
      }
    }
    else if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x10))) {
      uVar2 = *(uint *)(param_2 * 0x45c + 0x24 + iVar1);
    }
  }
  return uVar2;
}

