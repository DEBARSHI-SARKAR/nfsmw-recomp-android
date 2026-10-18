/* speed.exe 00706410 FUN_00706410; analysis pseudocode, not buildable source.
 * calls 00703780 FUN_00703780
 */

undefined4 FUN_00706410(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((&DAT_0092cd1c)[param_1 * 0x18] + (&DAT_0092cd24)[param_1 * 0x18] * 4);
  puVar2 = (undefined4 *)FUN_00703780((&DAT_0092cd1c)[param_1 * 0x18],puVar1,param_2);
  if (puVar2 != puVar1) {
    return *puVar2;
  }
  return 0;
}

