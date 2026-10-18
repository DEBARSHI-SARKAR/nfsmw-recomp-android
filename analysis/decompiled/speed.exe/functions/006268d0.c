/* speed.exe 006268d0 FUN_006268d0; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00605eb0 FUN_00605eb0
 */

void FUN_006268d0(undefined4 param_1,int param_2)

{
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"InitialPos");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"InitialVec");
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"VehicleName");
  FUN_00614e00(param_1,*(undefined4 *)(param_2 + 0x28));
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

