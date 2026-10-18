/* speed.exe 00591d50 FUN_00591d50; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void FUN_00591d50(void)

{
  undefined4 *puVar1;
  
  if (DAT_0091d21c == (undefined4 *)0x0) {
    DAT_0091d21c = _malloc(0xc);
    if (DAT_0091d21c != (undefined4 *)0x0) {
      *DAT_0091d21c = &PTR_FUN_008a1598;
      puVar1 = DAT_0091d21c + 1;
      *puVar1 = puVar1;
      DAT_0091d21c[2] = puVar1;
      return;
    }
    DAT_0091d21c = (undefined4 *)0x0;
  }
  return;
}

