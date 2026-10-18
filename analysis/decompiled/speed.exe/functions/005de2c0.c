/* speed.exe 005de2c0 FUN_005de2c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void FUN_005de2c0(void)

{
  DAT_0091e014 = _malloc(0xc);
  if (DAT_0091e014 != (undefined4 *)0x0) {
    *DAT_0091e014 = 0;
    DAT_0091e014[1] = 0;
    *(undefined1 *)(DAT_0091e014 + 2) = 0;
    *(undefined1 *)((int)DAT_0091e014 + 9) = 0;
    *(undefined1 *)((int)DAT_0091e014 + 10) = 0;
    return;
  }
  DAT_0091e014 = (undefined4 *)0x0;
  return;
}

