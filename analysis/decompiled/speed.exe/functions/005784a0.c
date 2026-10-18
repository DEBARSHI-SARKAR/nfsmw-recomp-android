/* speed.exe 005784a0 FUN_005784a0; analysis pseudocode, not buildable source.
 */

void FUN_005784a0(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x11);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x11);
  }
  return;
}

