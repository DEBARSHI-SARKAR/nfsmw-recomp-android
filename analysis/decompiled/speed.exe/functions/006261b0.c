/* speed.exe 006261b0 FUN_006261b0; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 00614e00 FUN_00614e00
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00605ef0 FUN_00605ef0
 */

void FUN_006261b0(undefined4 param_1,int param_2)

{
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"TimeElapsed");
  FUN_00605ed0(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"TimeIsLimited");
  FUN_00605ef0(param_1,*(undefined1 *)(param_2 + 0x14));
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"TimeRemaining");
  FUN_00605ed0(param_1,*(undefined4 *)(param_2 + 0x18));
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

