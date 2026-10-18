/* speed.exe 0041cab0 FUN_0041cab0; analysis pseudocode, not buildable source.
 * calls 0041cab0 FUN_0041cab0
 * calls 005d0370 FUN_005d0370
 */

void FUN_0041cab0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xf);
  while (cVar1 == '\0') {
    FUN_0041cab0(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x10,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xf);
  }
  return;
}

