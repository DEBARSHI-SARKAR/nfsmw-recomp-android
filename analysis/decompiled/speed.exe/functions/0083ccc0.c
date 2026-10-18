/* speed.exe 0083ccc0 FUN_0083ccc0; analysis pseudocode, not buildable source.
 * calls 0084ad90 FUN_0084ad90
 */

undefined4 FUN_0083ccc0(void)

{
  if (DAT_009c3620 != 0) {
    return 0xffffffff;
  }
  FUN_0084ad90(2);
  DAT_009c3620 = 1;
  DAT_009c3624 = 0;
  DAT_009c3628 = 0;
  return 0;
}

