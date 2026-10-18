/* speed.exe 005df8f0 FUN_005df8f0; analysis pseudocode, not buildable source.
 */

void FUN_005df8f0(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0xf);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0xf);
  }
  return;
}

