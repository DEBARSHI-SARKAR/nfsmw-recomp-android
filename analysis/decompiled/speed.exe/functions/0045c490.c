/* speed.exe 0045c490 FUN_0045c490; analysis pseudocode, not buildable source.
 * calls 0045c380 FUN_0045c380
 * calls 00659260 FUN_00659260
 */

undefined4 __fastcall FUN_0045c490(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    FUN_0045c380();
    DAT_0090dcd4 = DAT_0090dcd4 - 0x3c;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x3c,0);
    return 1;
  }
  return 0;
}

