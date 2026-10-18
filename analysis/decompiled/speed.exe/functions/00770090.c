/* speed.exe 00770090 FUN_00770090; analysis pseudocode, not buildable source.
 * calls 0076d380 FUN_0076d380
 */

undefined4 __fastcall FUN_00770090(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_009b38fc != 0) {
    iVar1 = FUN_0076d380(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

