/* speed.exe 00515d70 FUN_00515d70; analysis pseudocode, not buildable source.
 * calls 00515d20 FUN_00515d20
 */

undefined4 FUN_00515d70(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 100) != 0)) {
    uVar1 = FUN_00515d20();
    return uVar1;
  }
  return 0;
}

