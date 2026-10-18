/* speed.exe 0045c440 FUN_0045c440; analysis pseudocode, not buildable source.
 * calls 0045c380 FUN_0045c380
 * calls 00659260 FUN_00659260
 */

int __thiscall FUN_0045c440(int param_1,byte param_2)

{
  FUN_0045c380();
  if ((param_2 & 1) != 0) {
    DAT_0090dcd4 = DAT_0090dcd4 - 0x3c;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if (param_1 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x3c,0);
    }
  }
  return param_1;
}

