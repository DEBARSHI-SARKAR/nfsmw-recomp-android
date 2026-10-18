/* speed.exe 007f9aad FUN_007f9aad; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007f9aad(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x007f9abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  return uVar1;
}

