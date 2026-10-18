/* speed.exe 005df980 FUN_005df980; analysis pseudocode, not buildable source.
 */

void FUN_005df980(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x1d);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x1d);
  }
  return;
}

