/* speed.exe 0071d8f0 FUN_0071d8f0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00713b20 FUN_00713b20
 * calls 0045da70 FUN_0045da70
 */

int FUN_0071d8f0(int param_1)

{
  int local_8 [2];
  
  if (DAT_00993cc8 != 0) {
    if (param_1 < 1) {
      FUN_0045da70(0x40c00000);
      param_1 = FUN_007c4b80();
    }
    local_8[1] = 0x10;
    local_8[0] = param_1;
    FUN_00713b20(8,local_8,&PTR_s_AnytimeEvents_Bailout_00901e64,&DAT_009925dc,0);
    return local_8[0];
  }
  return 0;
}

