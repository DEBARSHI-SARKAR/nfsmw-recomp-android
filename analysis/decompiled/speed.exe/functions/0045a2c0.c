/* speed.exe 0045a2c0 FUN_0045a2c0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 0045a0c0 FUN_0045a0c0
 */

int __thiscall FUN_0045a2c0(int param_1,byte param_2)

{
  FUN_0045a0c0();
  if ((param_2 & 1) != 0) {
    DAT_0090dcd4 = DAT_0090dcd4 - 0x2c;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if (param_1 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x2c,0);
    }
  }
  return param_1;
}

