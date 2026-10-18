/* speed.exe 00719750 FUN_00719750; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00719750(int *param_1)

{
  int local_8;
  undefined4 uStack_4;
  
  local_8 = param_1[3];
  uStack_4 = (**(code **)(*param_1 + 0x78))();
  FUN_00713b20(8,&local_8,&PTR_s_StaticRoadblock_RBReminder_00901cdc,&DAT_00992554,param_1);
  return;
}

