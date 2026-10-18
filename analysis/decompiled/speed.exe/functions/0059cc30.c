/* speed.exe 0059cc30 FUN_0059cc30; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 005d7930 FUN_005d7930
 * calls 00466410 FUN_00466410
 */

undefined4 * __thiscall FUN_0059cc30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872ef3;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x200000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0xc;
  local_4 = 0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565a30,puVar2);
  *puVar2 = &PTR_FUN_008a0468;
  *param_1 = &PTR_FUN_008a1f3c;
  *puVar2 = &PTR_LAB_008a1f2c;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1a] = 0;
  uVar3 = FUN_0058bbd0(0x62743f5);
  param_1[0xe] = uVar3;
  uVar3 = FUN_00524850(param_3,0x69aa01e7);
  param_1[0xf] = uVar3;
  uVar3 = FUN_00524850(param_3,0x9f59065a);
  param_1[0x10] = uVar3;
  uVar3 = FUN_005af1c0("Radar_DirectionArrow");
  uVar3 = FUN_00524850(param_3,uVar3);
  param_1[0x11] = uVar3;
  uVar3 = FUN_005af1c0("Radar_Icon");
  uVar3 = FUN_00524850(param_3,uVar3);
  param_1[0x12] = uVar3;
  iVar4 = FUN_00524850(param_1[4],0x839e7d77);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  param_1[0x13] = iVar4;
  iVar4 = FUN_00524850(param_1[4],0x9ee06631);
  if (iVar4 != 0) {
    piVar6 = (int *)FUN_00466410();
    piVar5 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      piVar6[2] = iVar4;
      piVar5 = piVar6;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  param_1[0x14] = iVar4;
  ExceptionList = local_c;
  return param_1;
}

