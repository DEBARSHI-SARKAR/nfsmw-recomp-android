/* speed.exe 006cc810 FUN_006cc810; analysis pseudocode, not buildable source.
 */

void FUN_006cc810(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x25);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x25);
  }
  return;
}

