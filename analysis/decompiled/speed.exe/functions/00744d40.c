/* speed.exe 00744d40 FUN_00744d40; analysis pseudocode, not buildable source.
 */

int FUN_00744d40(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_009b37cc;
  while( true ) {
    if (piVar1 == DAT_009b37cc + DAT_009b37d4) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x30) == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}

