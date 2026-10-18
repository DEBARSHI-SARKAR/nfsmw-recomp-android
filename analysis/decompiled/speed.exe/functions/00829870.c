/* speed.exe 00829870 FUN_00829870; analysis pseudocode, not buildable source.
 * calls 00834e6d FUN_00834e6d
 * calls 00834ec8 FUN_00834ec8
 */

undefined4 FUN_00829870(undefined4 param_1)

{
  int iVar1;
  uint local_8;
  
  if (DAT_009c2974 != '\0') {
    local_8 = 0;
    iVar1 = FUN_00834e6d(&local_8);
    local_8 = (uint)(iVar1 == 0);
    if (local_8 != 0) {
      DAT_009c2984 = param_1;
      DAT_009c2964 = 0;
      FUN_00834ec8(1);
      return 0;
    }
  }
  return 0xffffffee;
}

