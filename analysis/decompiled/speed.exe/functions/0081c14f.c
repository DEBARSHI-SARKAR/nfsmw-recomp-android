/* speed.exe 0081c14f FUN_0081c14f; analysis pseudocode, not buildable source.
 * calls 00821c48 FUN_00821c48
 * calls 00821c0c FUN_00821c0c
 * calls 00821ba4 FUN_00821ba4
 */

void FUN_0081c14f(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_009c1b68)[param_1 & 0xff];
  iVar2 = FUN_00821c48(param_1);
  FUN_00821c0c(iVar1 + 0x120,iVar2);
  FUN_00821ba4(iVar1 + 300,iVar2);
  if (*(int *)(iVar1 + 0x138) == iVar2) {
    *(int *)(iVar1 + 0x138) = 0;
  }
  return;
}

