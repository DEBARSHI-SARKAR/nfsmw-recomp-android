/* speed.exe 00745140 FUN_00745140; analysis pseudocode, not buildable source.
 * calls 007425f0 FUN_007425f0
 * calls 00744800 FUN_00744800
 */

void FUN_00745140(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_009b37cc;
  piVar2 = DAT_009b37cc;
  if (DAT_009b37cc != DAT_009b37cc + DAT_009b37d4) {
    do {
      if (((param_1 == -1) || (*(int *)(*piVar2 + 0x2c) == param_1)) &&
         (1 < *(int *)(*piVar2 + 0x28))) {
        FUN_007425f0();
        piVar1 = DAT_009b37cc;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + DAT_009b37d4);
  }
  FUN_00744800(param_1);
  return;
}

