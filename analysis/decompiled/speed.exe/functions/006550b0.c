/* speed.exe 006550b0 FUN_006550b0; analysis pseudocode, not buildable source.
 */

void FUN_006550b0(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x29);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x29);
  }
  return;
}

