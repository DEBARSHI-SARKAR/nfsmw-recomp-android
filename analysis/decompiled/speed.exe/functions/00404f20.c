/* speed.exe 00404f20 FUN_00404f20; analysis pseudocode, not buildable source.
 * calls 005faf10 FUN_005faf10
 */

undefined4 FUN_00404f20(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 1)) &&
     (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    cVar1 = FUN_005faf10();
    if ((cVar1 != '\0') &&
       ((iVar2 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0, iVar2 == 0 ||
        ((*(ushort *)(iVar2 + 10) & 0x8000) == 0)))) {
      return 0;
    }
  }
  return 1;
}

