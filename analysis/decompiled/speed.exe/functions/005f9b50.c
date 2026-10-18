/* speed.exe 005f9b50 FUN_005f9b50; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005f8960 FUN_005f8960
 * calls 005f9b50 FUN_005f9b50
 */

void FUN_005f9b50(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x1d);
  while (cVar1 == '\0') {
    FUN_005f9b50(param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_005f8960();
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x20,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}

