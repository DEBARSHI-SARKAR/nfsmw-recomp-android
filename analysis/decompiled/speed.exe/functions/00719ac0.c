/* speed.exe 00719ac0 FUN_00719ac0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00719ac0(int param_1,undefined4 param_2,char param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_8 = param_2;
  local_4 = (param_3 != '\0') + 1;
  FUN_00713b20(0xc,&local_c,&PTR_s_AnytimeEvents_OffroadMoment_00901e8c,&DAT_00992708,param_1);
  return;
}

