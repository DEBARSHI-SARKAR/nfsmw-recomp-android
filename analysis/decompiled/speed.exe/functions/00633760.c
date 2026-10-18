/* speed.exe 00633760 FUN_00633760; analysis pseudocode, not buildable source.
 */

undefined * FUN_00633760(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_008a5418)[uVar1] == param_1) {
      if (0xa0 < uVar1) {
        return (undefined *)0x0;
      }
      return (&PTR_FUN_008f61c8)[uVar1];
    }
    uVar1 = ((uint)(&DAT_008a5418)[uVar1] < param_1) + 1 + uVar1 * 2;
  } while (uVar1 < 0xa1);
  return (undefined *)0x0;
}

