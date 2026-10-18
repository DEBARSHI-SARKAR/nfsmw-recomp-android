/* speed.exe 005d1a30 FUN_005d1a30; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void FUN_005d1a30(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  *piVar1 = *piVar1 + 1;
  *param_1 = *param_2;
  *param_2 = piVar1;
  iVar2 = *piVar1;
  *piVar1 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    thunk_FUN_007c7250(piVar1);
  }
  return;
}

