/* speed.exe 0060ce50 FUN_0060ce50; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0060ce50 FUN_0060ce50
 */

void FUN_0060ce50(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x19);
  while (cVar1 == '\0') {
    FUN_0060ce50(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x1c,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x19);
  }
  return;
}

