/* speed.exe 00510530 FUN_00510530; analysis pseudocode, not buildable source.
 * calls 005fc180 FUN_005fc180
 */

undefined4 FUN_00510530(void)

{
  char cVar1;
  
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1964) != 2)) {
    if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
      return 0;
    }
    cVar1 = FUN_005fc180();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if ((((DAT_008f8708 != 0) && (DAT_008f870c != 0)) && (*(char *)(DAT_0091cf90 + 3) != '\0')) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0)) {
    return 1;
  }
  return 0;
}

