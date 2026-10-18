/* speed.exe 007fbbc2 FUN_007fbbc2; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 */

void FUN_007fbbc2(undefined4 param_1)

{
  if (DAT_009c1948 != (int *)0x0) {
    (**(code **)(*DAT_009c1948 + 4))(param_1,0);
    return;
  }
  FUN_007c7250();
  return;
}

