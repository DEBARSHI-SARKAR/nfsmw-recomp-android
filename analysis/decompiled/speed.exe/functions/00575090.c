/* speed.exe 00575090 FUN_00575090; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00575090(int param_1)

{
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x7ab5521a,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x30),0x7ab5521a,1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514d10(*(int *)(param_1 + 0x24),0x7ab5521a,1);
  }
  return;
}

