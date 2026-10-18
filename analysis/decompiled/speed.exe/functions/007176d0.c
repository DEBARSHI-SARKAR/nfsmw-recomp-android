/* speed.exe 007176d0 FUN_007176d0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_007176d0(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int local_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = DAT_00993cc8;
  local_10 = param_1[3];
  uStack_c = (**(code **)(*param_1 + 0x78))();
  iStack_4 = ((*(char *)(iVar1 + 0x15c) < '\x02') - 1 & 7) + 1;
  iStack_8 = (param_3 < '\x01') + 1;
  FUN_00713b20(0x10,&local_10,&PTR_s_StaticRoadblock_DispRBUpdate_00901cf4,&DAT_009926f4,param_1);
  return;
}

