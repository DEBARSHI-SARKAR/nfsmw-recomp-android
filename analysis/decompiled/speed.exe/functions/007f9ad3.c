/* speed.exe 007f9ad3 FUN_007f9ad3; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007f9ad3(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      (**(code **)(param_1 + 0xc))(param_1,*(undefined4 *)(param_1 + 8),(int *)(param_1 + 4));
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007f9b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return uVar1;
}

