/* speed.exe 0076a740 FUN_0076a740; analysis pseudocode, not buildable source.
 */

void FUN_0076a740(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x15);
  }
  return;
}

