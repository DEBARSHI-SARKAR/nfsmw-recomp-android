/* speed.exe 005184d0 FUN_005184d0; analysis pseudocode, not buildable source.
 * calls 005fbd90 FUN_005fbd90
 * calls 0056dc00 FUN_0056dc00
 */

undefined4 __thiscall FUN_005184d0(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    *(undefined1 *)(param_1 + 0x2b) = 0;
    return 0;
  }
  if ((((((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
        ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) || (DAT_008f8708 == 0)) ||
      (DAT_008f870c == 0)) ||
     ((*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) == '\0' &&
      (*(char *)(param_1 + 0x24) == '\0')))) {
    return 0;
  }
  cVar1 = FUN_0056dc00();
  if (((cVar1 == '\0') && ((DAT_0091e000 != 0 && (*(int *)(DAT_0091e000 + 0x1968) != 0)))) &&
     (cVar1 = FUN_005fbd90(), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}

