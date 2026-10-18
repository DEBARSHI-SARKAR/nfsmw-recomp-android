/* speed.exe 0078f7b0 FUN_0078f7b0; analysis pseudocode, not buildable source.
 */

void FUN_0078f7b0(int *param_1)

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

