/* speed.exe 0076b780 FUN_0076b780; analysis pseudocode, not buildable source.
 */

void FUN_0076b780(int *param_1)

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

