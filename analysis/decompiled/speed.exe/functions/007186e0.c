/* speed.exe 007186e0 FUN_007186e0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_007186e0(int *param_1)

{
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_1[3];
  uStack_8 = (**(code **)(*param_1 + 0x34))();
  uStack_4 = (**(code **)(*param_1 + 0x38))();
  FUN_00713b20(0xc,&local_c,&PTR_s_Backup_BUArrives_00901ccc,&DAT_00993c78,param_1);
  return;
}

