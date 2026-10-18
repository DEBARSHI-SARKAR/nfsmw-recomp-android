/* speed.exe 007e9280 FUN_007e9280; analysis pseudocode, not buildable source.
 * calls 007e8ca0 FUN_007e8ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007e9280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_007e8ca0();
  iVar3 = 0;
  for (; param_1 != 0; param_1 = param_1 + iVar1) {
    iVar3 = FUN_007e8ca0();
    iVar1 = *(int *)(param_1 + 4);
    if (iVar2 == iVar3) {
      if ((iVar1 != 0) && (iVar1 + param_1 != 0)) {
        iVar3 = (iVar1 + param_1) - param_2;
        *(int *)(param_2 + 4) = iVar3;
        *(int *)(param_1 + 4) = param_2 - param_1;
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      *(undefined4 *)(param_2 + 4) = 0;
      *(int *)(param_1 + 4) = param_2 - param_1;
      return 1;
    }
    iVar3 = param_1;
    if (iVar1 == 0) break;
  }
  if (param_2 == 0) {
    *(undefined4 *)(iVar3 + 4) = 0;
    _DAT_00000004 = 0;
    return 1;
  }
  *(int *)(iVar3 + 4) = param_2 - iVar3;
  *(undefined4 *)(param_2 + 4) = 0;
  return 1;
}

