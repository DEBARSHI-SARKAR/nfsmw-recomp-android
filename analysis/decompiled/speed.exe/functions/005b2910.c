/* speed.exe 005b2910 FUN_005b2910; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005b2910(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20) + 4;
    do {
      if ((int)*(char *)(iVar2 + 3) == *(int *)(&DAT_008a2be8 + param_2 * 4)) {
        return uVar1 * 0x38 + *(int *)(param_1 + 0x20);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x38;
    } while (uVar1 < *(uint *)(param_1 + 0x1c));
  }
  return 0;
}

