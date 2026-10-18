/* speed.exe 004a0ad0 FUN_004a0ad0; analysis pseudocode, not buildable source.
 * calls 00492070 FUN_00492070
 * calls 004a08f0 FUN_004a08f0
 */

void __fastcall FUN_004a0ad0(int *param_1)

{
  int iVar1;
  
  FUN_00492070("Animation Statistics: %d banks\n",*param_1);
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      FUN_004a08f0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  return;
}

