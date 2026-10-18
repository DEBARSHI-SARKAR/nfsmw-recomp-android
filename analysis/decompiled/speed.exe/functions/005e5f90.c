/* speed.exe 005e5f90 FUN_005e5f90; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e5f90 FUN_005e5f90
 */

void FUN_005e5f90(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  while (cVar1 == '\0') {
    FUN_005e5f90(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x24,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}

