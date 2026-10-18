/* speed.exe 00717c00 FUN_00717c00; analysis pseudocode, not buildable source.
 * calls 00707860 FUN_00707860
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00717c00(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0xc);
  local_4 = FUN_00707860();
  FUN_00713b20(8,&local_8,&PTR_s_HeliSpecific_HeliBailout_00901edc,&DAT_009924d4,param_1);
  return;
}

