/* speed.exe 0057e6b0 FUN_0057e6b0; analysis pseudocode, not buildable source.
 * calls 00525a00 FUN_00525a00
 */

void FUN_0057e6b0(void)

{
  if (DAT_0091cf90 != 0) {
    if (DAT_008f41c0 != 0) {
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) = 1;
      FUN_00525a00();
      return;
    }
    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) = 0;
  }
  FUN_00525a00();
  return;
}

