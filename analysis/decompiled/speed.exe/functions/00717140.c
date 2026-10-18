/* speed.exe 00717140 FUN_00717140; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00717140(int param_1,int *param_2)

{
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0xc);
  uStack_8 = (**(code **)(*param_2 + 0x34))();
  uStack_4 = (**(code **)(*param_2 + 0x38))();
  FUN_00713b20(0xc,&local_c,&PTR_s_AnytimeEvents_DispPursuitUpdate_00901dcc,&DAT_0099257c,param_1);
  return;
}

