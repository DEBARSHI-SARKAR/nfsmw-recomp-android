/* speed.exe 0071da50 FUN_0071da50; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00713b20 FUN_00713b20
 * calls 0045da70 FUN_0045da70
 */

int FUN_0071da50(int param_1)

{
  if (param_1 < 1) {
    FUN_0045da70(0x40800000);
    param_1 = FUN_007c4b80();
  }
  FUN_00713b20(4,&param_1,&PTR_s_Setup_MoreDetails_00901c4c,&DAT_009926a0,0);
  return param_1;
}

