/* speed.exe 00741ed0 FUN_00741ed0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void FUN_00741ed0(void)

{
  if (DAT_009b0900 == (void *)0x0) {
    DAT_009b0900 = _malloc(1);
    if (DAT_009b0900 != (void *)0x0) {
      DAT_009b0904 = 1;
      return;
    }
    DAT_009b0900 = (void *)0x0;
  }
  return;
}

