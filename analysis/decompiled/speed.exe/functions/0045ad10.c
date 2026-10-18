/* speed.exe 0045ad10 FUN_0045ad10; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 0045a0c0 FUN_0045a0c0
 */

void __fastcall FUN_0045ad10(int param_1)

{
  if (param_1 != 0) {
    FUN_0045a0c0();
    DAT_0090dcd4 = DAT_0090dcd4 - 0x2c;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x2c,0);
  }
  return;
}

