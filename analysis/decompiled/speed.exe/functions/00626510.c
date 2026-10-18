/* speed.exe 00626510 FUN_00626510; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 0060e2e0 FUN_0060e2e0
 * calls 00605ef0 FUN_00605ef0
 * calls 0060e370 FUN_0060e370
 */

void FUN_00626510(undefined4 param_1,int param_2)

{
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"StartBreaker");
  FUN_00605ef0(param_1,*(undefined1 *)(param_2 + 0x10));
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

