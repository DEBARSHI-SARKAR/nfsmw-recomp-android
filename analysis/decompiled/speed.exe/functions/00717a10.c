/* speed.exe 00717a10 FUN_00717a10; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00717a10(int param_1)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xc);
  FUN_00713b20(4,&local_4,&PTR_s_Setup_DispNoVehDescrip_00901c3c,&DAT_009924cc,param_1);
  return;
}

