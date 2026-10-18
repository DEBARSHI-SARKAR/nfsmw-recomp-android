/* speed.exe 005e7090 FUN_005e7090; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e7090 FUN_005e7090
 */

void FUN_005e7090(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xf);
  while (cVar1 == '\0') {
    FUN_005e7090(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x10,0);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xf);
  }
  return;
}

