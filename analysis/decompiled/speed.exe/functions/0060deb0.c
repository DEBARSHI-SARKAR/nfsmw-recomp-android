/* speed.exe 0060deb0 FUN_0060deb0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005dbed0 FUN_005dbed0
 * calls 005d59f0 FUN_005d59f0
 * calls 005e8ba0 FUN_005e8ba0
 * calls 005eeb40 FUN_005eeb40
 * calls 005eed90 FUN_005eed90
 * calls 005dbef0 FUN_005dbef0
 * calls 005ebf90 FUN_005ebf90
 * calls 005fe660 FUN_005fe660
 */

void FUN_0060deb0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005e8ba0();
  FUN_005fe660(0);
  FUN_005eeb40();
  if (*(int *)(DAT_0091e000 + 0x1964) == 2) {
    FUN_005eed90();
    FUN_005ebf90();
  }
  iVar3 = 0;
  iVar1 = FUN_005dbef0();
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_005dbed0(iVar3);
      if ((((*piVar2 != 0) &&
           (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar2), iVar1 != 0))
          && (*(int *)(iVar1 + 4) != 0)) &&
         (piVar2 = (int *)FUN_005d59f0(&LAB_00403850), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0xc))();
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_005dbef0();
    } while (iVar3 < iVar1);
  }
  return;
}

