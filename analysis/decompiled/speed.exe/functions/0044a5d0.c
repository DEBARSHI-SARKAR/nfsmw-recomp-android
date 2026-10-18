/* speed.exe 0044a5d0 FUN_0044a5d0; analysis pseudocode, not buildable source.
 * calls 0044a530 FUN_0044a530
 */

void FUN_0044a5d0(void)

{
  if (DAT_0090da10 != '\0') {
    if (DAT_0090da14 < (int)(DAT_0090db3c & 0xff)) {
      FUN_0044a530(((DAT_0090db3c >> 8 & 0xff) + DAT_0090da14) * 0x40 + 0x808 + DAT_0090d9e4);
      DAT_0090da14 = DAT_0090da14 + 1;
      return;
    }
    if (DAT_0090da18 < (int)(DAT_0090db3c._2_2_ & 0xff)) {
      FUN_0044a530(((uint)(DAT_0090db3c._2_2_ >> 8) + DAT_0090da18) * 0x40 + 0x808 + DAT_0090d9e4);
      DAT_0090da18 = DAT_0090da18 + 1;
      return;
    }
    DAT_0090da10 = '\0';
  }
  return;
}

