/* speed.exe 00516f30 FUN_00516f30; analysis pseudocode, not buildable source.
 * calls 00642d70 FUN_00642d70
 * calls 00585770 FUN_00585770
 * calls 00572070 FUN_00572070
 * calls 0056ad30 FUN_0056ad30
 * calls 00644060 FUN_00644060
 */

void __fastcall FUN_00516f30(int param_1)

{
  undefined4 uVar1;
  
  FUN_00644060(0);
  FUN_00642d70();
  uVar1 = 0;
  FUN_00572070(0);
  FUN_00585770(uVar1);
  FUN_0056ad30();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

