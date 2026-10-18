/* speed.exe 00404ac0 FUN_00404ac0; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 */

undefined4 FUN_00404ac0(void)

{
  int iVar1;
  
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    iVar1 = FUN_005faa20();
    if (iVar1 == 8) {
      return 1;
    }
  }
  return 0;
}

