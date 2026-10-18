/* speed.exe 00717740 FUN_00717740; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00717740(int *param_1,int *param_2,char param_3,int param_4)

{
  int iVar1;
  int local_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00993cc8;
  local_18 = param_1[3];
  uStack_14 = (**(code **)(*param_1 + 0x78))();
  if (param_4 == 0) {
    if ((*(uint *)(iVar1 + 0x54) >> 2 & 1) == 0) {
      iStack_10 = ((*(char *)(iVar1 + 0x15c) < '\x02') - 1 & 7) + 1;
    }
    else {
      iStack_10 = 2;
    }
  }
  else {
    iStack_10 = param_4;
  }
  iStack_c = (param_3 < '\x01') + 1;
  uStack_8 = (**(code **)(*param_2 + 0x34))();
  uStack_4 = (**(code **)(*param_2 + 0x38))();
  FUN_00713b20(0x18,&local_18,&PTR_s_StaticRoadblock_DispRBReply_00901cec,&DAT_0099265c,param_1);
  return;
}

