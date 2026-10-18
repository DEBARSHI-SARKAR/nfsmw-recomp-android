/* speed.exe 004ba6f0 FUN_004ba6f0; analysis pseudocode, not buildable source.
 * calls 004b0af0 FUN_004b0af0
 */

undefined4 __thiscall FUN_004ba6f0(int param_1,undefined4 param_2)

{
  if (DAT_008f86f8 == 0) {
    DAT_008f8704 = 0;
    DAT_008f8700 = 0;
    DAT_008f86fc = 0;
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  FUN_004b0af0(param_2);
  return *(undefined4 *)(param_1 + 0x14);
}

