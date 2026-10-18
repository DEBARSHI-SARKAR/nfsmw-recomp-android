/* speed.exe 00598390 FUN_00598390; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 */

undefined4 FUN_00598390(int param_1)

{
  int iVar1;
  
  if (DAT_008f5360 == param_1) {
    iVar1 = FUN_00585820(DAT_008f5350);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x1c);
    }
  }
  return 0;
}

