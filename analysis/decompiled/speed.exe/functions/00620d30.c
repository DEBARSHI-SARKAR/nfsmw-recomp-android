/* speed.exe 00620d30 FUN_00620d30; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 00605eb0 FUN_00605eb0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00614e00 FUN_00614e00
 */

void FUN_00620d30(undefined4 param_1,int param_2)

{
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"InitialPos");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"Duration");
  FUN_00605ed0(param_1,*(undefined4 *)(param_2 + 0x1c));
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"Radius");
  FUN_00605ed0(param_1,*(undefined4 *)(param_2 + 0x20));
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

