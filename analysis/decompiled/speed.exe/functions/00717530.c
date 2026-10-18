/* speed.exe 00717530 FUN_00717530; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00717530(int param_1)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xc);
  FUN_00713b20(4,&local_4,&PTR_s_AnytimeEvents_DispTimeExpired_00901e2c,&DAT_009925cc,param_1);
  return;
}

