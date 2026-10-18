/* speed.exe 00654870 FUN_00654870; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 __fastcall FUN_00654870(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 != 0x7fffffff) {
      iVar2 = FUN_007c4b80();
      *param_1 = iVar1 - iVar2;
      if (iVar1 - iVar2 < 0) {
        *param_1 = 0;
        return 0;
      }
    }
    if ((*param_1 != 0) && (*param_1 != 0x7fffffff)) {
      return 1;
    }
  }
  return 0;
}

