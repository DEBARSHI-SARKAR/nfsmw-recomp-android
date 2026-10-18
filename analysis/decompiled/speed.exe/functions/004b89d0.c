/* speed.exe 004b89d0 FUN_004b89d0; analysis pseudocode, not buildable source.
 */

int FUN_004b89d0(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_00913db4;
  while( true ) {
    if (piVar1 == DAT_00913db4 + DAT_00913dbc) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x230) == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}

