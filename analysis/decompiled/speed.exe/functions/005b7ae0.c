/* speed.exe 005b7ae0 FUN_005b7ae0; analysis pseudocode, not buildable source.
 * calls 005b5b10 FUN_005b5b10
 */

undefined4 __thiscall FUN_005b7ae0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_005b5b10(param_2,*(undefined4 *)(param_1 + 0xe0));
  if ((iVar3 != 0) || (iVar3 = FUN_005b5b10(param_2,*(undefined4 *)(param_1 + 0xf0)), iVar3 != 0)) {
    iVar2 = *(int *)(param_1 + 0x4128);
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      if ((*(int *)(iVar1 + 0x1c) == iVar3) && ((*(byte *)(iVar1 + 0x14) & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

