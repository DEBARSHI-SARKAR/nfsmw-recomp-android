/* speed.exe 006096a0 FUN_006096a0; analysis pseudocode, not buildable source.
 */

void FUN_006096a0(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x19);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x19);
  }
  return;
}

