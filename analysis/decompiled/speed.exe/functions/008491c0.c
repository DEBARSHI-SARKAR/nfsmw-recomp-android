/* speed.exe 008491c0 FUN_008491c0; analysis pseudocode, not buildable source.
 * calls 00848c80 FUN_00848c80
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00847850 FUN_00847850
 * calls 008519a0 FUN_008519a0
 */

void FUN_008491c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00847850(param_1);
  FUN_00848c80(param_1);
  FUN_00847850(param_1);
  FUN_008519a0(*(undefined4 *)(param_1 + 0xc));
  thunk_FUN_004655f0(param_1);
  return;
}

