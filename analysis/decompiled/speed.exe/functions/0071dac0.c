/* speed.exe 0071dac0 FUN_0071dac0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void FUN_0071dac0(int param_1)

{
  if (param_1 < -3) {
    param_1 = 1;
  }
  else {
    param_1 = (uint)(4 < param_1) * 2 + 2;
  }
  FUN_00713b20(4,&param_1,&PTR_s_ExtraCops_RBPosition_00901fc4,&DAT_009924fc,0);
  return;
}

