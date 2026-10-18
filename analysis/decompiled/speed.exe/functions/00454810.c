/* speed.exe 00454810 FUN_00454810; analysis pseudocode, not buildable source.
 * calls 00454190 FUN_00454190
 */

undefined4 __fastcall FUN_00454810(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00454190();
    return uVar1;
  }
  return 0;
}

