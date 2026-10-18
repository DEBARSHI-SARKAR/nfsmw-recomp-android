/* speed.exe 00626c50 FUN_00626c50; analysis pseudocode, not buildable source.
 */

undefined * FUN_00626c50(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_008f66e0 != 0) {
    do {
      if ((&DAT_008f66e4)[uVar1] == param_1) {
        if (DAT_008f66e0 <= uVar1) {
          return (undefined *)0x0;
        }
        return (&PTR_PTR_008f6704)[uVar1];
      }
      uVar1 = ((uint)(&DAT_008f66e4)[uVar1] < param_1) + 1 + uVar1 * 2;
    } while (uVar1 < DAT_008f66e0);
  }
  return (undefined *)0x0;
}

