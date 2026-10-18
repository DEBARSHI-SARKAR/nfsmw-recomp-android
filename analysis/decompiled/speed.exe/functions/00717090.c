/* speed.exe 00717090 FUN_00717090; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00717090(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (DAT_00993cc8 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0xc);
    local_8 = 2;
    local_14 = (param_3 == 0) + 1;
    uStack_10 = (**(code **)(*param_2 + 0x34))();
    uStack_c = (**(code **)(*param_2 + 0x38))();
    uStack_4 = param_4;
    FUN_00713b20(0x18,&local_18,&PTR_s_Backup_DispBackupReply_00901c94,&DAT_009926b0,param_1);
  }
  return;
}

