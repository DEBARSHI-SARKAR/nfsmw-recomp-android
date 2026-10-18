/* speed.exe 004c3790 FUN_004c3790; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_004c3790(int param_1,undefined4 param_2)

{
  if (DAT_008f86f8 == 0) {
    DAT_008f8704 = 0;
    DAT_008f8700 = 0;
    DAT_008f86fc = 0;
    return param_2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14) = param_2;
  return param_2;
}

