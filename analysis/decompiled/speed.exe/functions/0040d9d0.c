/* speed.exe 0040d9d0 FUN_0040d9d0; analysis pseudocode, not buildable source.
 */

void FUN_0040d9d0(int *param_1)

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

