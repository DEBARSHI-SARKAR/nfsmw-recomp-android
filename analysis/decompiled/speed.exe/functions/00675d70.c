/* speed.exe 00675d70 FUN_00675d70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00675d70 FUN_00675d70
 */

void FUN_00675d70(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    FUN_00675d70(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x18,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

