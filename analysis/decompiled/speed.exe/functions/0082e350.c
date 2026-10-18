/* speed.exe 0082e350 FUN_0082e350; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082e350(int param_1)

{
  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x11c)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0082e36d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x1c))();
  return uVar1;
}

