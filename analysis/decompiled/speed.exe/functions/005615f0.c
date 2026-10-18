/* speed.exe 005615f0 FUN_005615f0; analysis pseudocode, not buildable source.
 * calls 005750d0 FUN_005750d0
 * calls 0056bc60 FUN_0056bc60
 * calls 0055c450 FUN_0055c450
 * calls 0079c7d0 FUN_0079c7d0
 * calls 00515e90 FUN_00515e90
 * calls 00554ad0 FUN_00554ad0
 * calls 005b8550 FUN_005b8550
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 0079bac0 FUN_0079bac0
 * calls 00586290 FUN_00586290
 * calls 005252d0 FUN_005252d0
 * calls 00522280 FUN_00522280
 * calls 00514c70 FUN_00514c70
 * calls 00790970 FUN_00790970
 * calls 005af1c0 FUN_005af1c0
 * calls 00592170 FUN_00592170
 * calls 00516af0 FUN_00516af0
 */

undefined4 * __thiscall FUN_005615f0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871181;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089dcb0;
  FUN_00592170(param_1[4],"ARRAY_SCROLL_REGION","Scrollbar",1,0,0,1);
  local_4._0_1_ = 1;
  FUN_00592170(param_1[4],"option_button",&DAT_00890978,0,0,0,1);
  *(undefined1 *)(param_1 + 0x65) = 1;
  *(undefined1 *)((int)param_1 + 0x195) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(DAT_0091cf90 + 0x175);
  *(undefined1 *)((int)param_1 + 0x1aa) = 0;
  *(undefined1 *)((int)param_1 + 0x1ab) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined1 *)((int)param_1 + 0x1c5) = 1;
  *(undefined1 *)((int)param_1 + 0x1c6) = 1;
  *(undefined1 *)((int)param_1 + 0x1c7) = 1;
  *(undefined1 *)(param_1 + 0x72) = 1;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  FUN_005750d0(param_1[4],"scrollbar",1,0,0);
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 3;
  param_1[0x9a] = 6;
  DAT_0091ca74 = 0;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) {
    uVar4 = param_1[4];
    uVar2 = FUN_0056bc60(0xe50258b1);
    FUN_005252d0(uVar4,0x42adb44c,uVar2);
  }
  puVar6 = &LAB_00513100;
  param_1[0x9a] = *(undefined4 *)(DAT_0091cf90 + 0x164);
  puVar7 = param_1;
  FUN_0079bac0(&LAB_00513100,param_1);
  FUN_00790970(puVar6,puVar7);
  if ((((param_1[4] != 0) && (iVar3 = FUN_00516af0(param_1[4]), iVar3 != 0)) &&
      (iVar3 = FUN_005b8550(0x9321399c), iVar3 != 0)) &&
     (iVar3 = FUN_005b1360(0x1b20c4), iVar3 != 0)) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  FUN_00515e90(param_1[4],0x626eb826);
  param_1[0x35] = 0xc407210;
  *(undefined1 *)(param_1 + 0x36) = 1;
  FUN_005252d0(param_1[4],0x4059a9c,&DAT_0089ddf0);
  FUN_005252d0(param_1[4],0x154d771c,&DAT_0089ddf0);
  *(undefined1 *)((int)param_1 + 0x1a9) = *(undefined1 *)(DAT_0091cf90 + 0x16c);
  *(undefined1 *)(DAT_0091cf90 + 0x16c) = 0;
  FUN_0055c450();
  iVar3 = param_1[4];
  uVar4 = FUN_005af1c0("UI_PC_Generic_Button_sm_1");
  if (((iVar3 == 0) || (iVar3 = FUN_00516af0(iVar3), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(uVar4), iVar3 == 0)) {
    iVar3 = 0;
  }
  iVar1 = param_1[4];
  param_1[0x73] = iVar3;
  uVar4 = FUN_005af1c0("UI_PC_Generic_Button_sm_2");
  if (((iVar1 == 0) || (iVar3 = FUN_00516af0(iVar1), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(uVar4), iVar3 == 0)) {
    iVar3 = 0;
  }
  iVar1 = param_1[4];
  param_1[0x74] = iVar3;
  uVar4 = FUN_005af1c0("UI_PC_Generic_Button_sm_3");
  if (((iVar1 == 0) || (iVar3 = FUN_00516af0(iVar1), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(uVar4), iVar3 == 0)) {
    iVar3 = 0;
  }
  iVar1 = param_1[4];
  param_1[0x75] = iVar3;
  uVar4 = FUN_005af1c0("UI_PC_Generic_Button_sm_4");
  if (((iVar1 == 0) || (iVar3 = FUN_00516af0(iVar1), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(uVar4), iVar3 == 0)) {
    iVar3 = 0;
  }
  param_1[0x76] = iVar3;
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x626eb826), iVar3 == 0)) {
    iVar3 = 0;
  }
  param_1[0x77] = iVar3;
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0xd4d9d042), iVar3 == 0)) {
    iVar3 = 0;
  }
  param_1[0x78] = iVar3;
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x14b76941), iVar3 == 0)) {
    iVar3 = 0;
  }
  param_1[0x79] = iVar3;
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x68cf7b18), iVar3 == 0)) {
    iVar3 = 0;
  }
  param_1[0x7a] = iVar3;
  if ((((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
      (iVar3 = FUN_005b8550(0x444969fd), iVar3 == 0)) || (*(int *)(iVar3 + 0x18) != 1)) {
    iVar3 = 0;
  }
  param_1[0x7d] = iVar3;
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     ((iVar3 = FUN_005b8550(0x444969fe), iVar3 == 0 || (*(int *)(iVar3 + 0x18) != 1)))) {
    iVar3 = 0;
  }
  param_1[0x7e] = iVar3;
  param_1[0x69] = 1;
  FUN_00522280();
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x444969fd), iVar3 == 0)) {
    iVar3 = 0;
  }
  FUN_00514c70(iVar3);
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x444969fe), iVar3 == 0)) {
    iVar3 = 0;
  }
  FUN_00514c70(iVar3);
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x3fbb7a4e), iVar3 == 0)) {
    iVar3 = 0;
  }
  FUN_00514c70(iVar3);
  if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0x688a1551), iVar3 == 0)) {
    iVar3 = 0;
  }
  FUN_00514c70(iVar3);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) {
    if (((param_1[4] == 0) || (iVar3 = FUN_00516af0(param_1[4]), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(0x1e617415), iVar3 == 0)) {
      iVar3 = 0;
    }
    FUN_00514c70(iVar3);
  }
  FUN_00554ad0();
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  uVar5 = (uint)*(byte *)(param_1 + 0x71);
  uVar4 = 0;
  FUN_0079bac0(0,uVar5);
  FUN_0079c7d0(uVar4,uVar5);
  ExceptionList = local_c;
  return param_1;
}

