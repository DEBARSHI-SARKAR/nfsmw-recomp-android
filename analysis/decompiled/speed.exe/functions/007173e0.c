/* speed.exe 007173e0 FUN_007173e0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_007173e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0xc);
  local_4 = (param_3 == 0) + 1;
  FUN_00713b20(8,&local_8,&PTR_s_Backup_DispBackupUpdate_00901cc4,&DAT_009925ec,param_1);
  return;
}

