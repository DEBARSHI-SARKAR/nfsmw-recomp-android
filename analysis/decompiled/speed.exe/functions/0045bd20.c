/* speed.exe 0045bd20 FUN_0045bd20; analysis pseudocode, not buildable source.
 * calls 0045bd70 FUN_0045bd70
 * calls 00659260 FUN_00659260
 */

int __thiscall FUN_0045bd20(int param_1,byte param_2)

{
  FUN_0045bd70();
  if ((param_2 & 1) != 0) {
    DAT_0090dcd4 = DAT_0090dcd4 - 0x50;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if (param_1 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x50,0);
    }
  }
  return param_1;
}

