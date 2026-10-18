/* speed.exe 00527370 FUN_00527370; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 */

void FUN_00527370(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(DAT_0091cb20 + 0xcc);
  iVar2 = FUN_0045d380(0);
  if (iVar2 != 0) {
    (**(code **)(*piVar1 + 0x18))(iVar2 + 8);
    return;
  }
  (**(code **)(*piVar1 + 0x18))(0xc);
  return;
}

