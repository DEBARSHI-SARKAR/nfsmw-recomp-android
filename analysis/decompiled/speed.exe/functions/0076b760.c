/* speed.exe 0076b760 FUN_0076b760; analysis pseudocode, not buildable source.
 */

void FUN_0076b760(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0xf);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0xf);
  }
  return;
}

