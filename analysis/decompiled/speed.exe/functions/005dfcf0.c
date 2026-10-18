/* speed.exe 005dfcf0 FUN_005dfcf0; analysis pseudocode, not buildable source.
 */

void FUN_005dfcf0(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x21);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x21);
  }
  return;
}

