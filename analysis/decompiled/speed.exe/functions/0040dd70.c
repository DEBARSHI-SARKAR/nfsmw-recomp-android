/* speed.exe 0040dd70 FUN_0040dd70; analysis pseudocode, not buildable source.
 */

void FUN_0040dd70(int param_1)

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

