/* speed.exe 008225f7 FUN_008225f7; analysis pseudocode, not buildable source.
 */

int FUN_008225f7(void)

{
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  return ((*(int *)(DAT_009c21fc + 8) - *(int *)(DAT_009c21fc + 0x10)) * 100) /
         *(int *)(DAT_009c21fc + 8);
}

