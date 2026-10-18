/* speed.exe 0060c630 FUN_0060c630; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0060c630 FUN_0060c630
 */

void FUN_0060c630(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    FUN_0060c630(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x18,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

