/* speed.exe 00781e10 FUN_00781e10; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0077c5b0 FUN_0077c5b0
 * calls 00780600 FUN_00780600
 */

void FUN_00781e10(void)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  FUN_0077c5b0(&local_4,&stack0x00000004);
  piVar1 = (int *)(*(int *)(local_4 + 0x10) + 100);
  *piVar1 = *piVar1 + -1;
  iVar2 = *(int *)(local_4 + 0x10);
  if (*(int *)(iVar2 + 100) == 0) {
    if (iVar2 != 0) {
      FUN_005d0370(iVar2,0x70,0);
    }
    FUN_00780600(&stack0x00000004,local_4);
  }
  return;
}

