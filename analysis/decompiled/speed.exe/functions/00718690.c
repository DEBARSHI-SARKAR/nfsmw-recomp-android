/* speed.exe 00718690 FUN_00718690; analysis pseudocode, not buildable source.
 * calls 007005b0 FUN_007005b0
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00718690(int *param_1,undefined4 param_2)

{
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = (**(code **)(*param_1 + 0x78))();
  uStack_4 = FUN_007005b0(param_2);
  iStack_c = param_1[3];
  FUN_00713b20(0xc,&iStack_c,&PTR_s_Backup_BUReminder_00901cb4,&DAT_009923e4,param_1);
  return;
}

