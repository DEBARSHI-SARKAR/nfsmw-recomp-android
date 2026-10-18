/* speed.exe 0059e420 FUN_0059e420; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 00466410 FUN_00466410
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059e420(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873133;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x40000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0xc;
  local_4 = 0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565430,puVar2);
  *puVar2 = &PTR_FUN_008a0310;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a2114;
  *puVar2 = &PTR_LAB_008a210c;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x14] = 0;
  uVar3 = FUN_005af1c0("Speedbreaker_Meter_Group");
  FUN_0058bbd0(uVar3);
  uVar3 = param_1[4];
  uVar4 = FUN_005af1c0("SPEEDBREAKER_METER_ICON_GROUP");
  uVar3 = FUN_00524850(uVar3,uVar4);
  param_1[0x10] = uVar3;
  uVar3 = FUN_005af1c0("Speedbreaker_Meter_Multi_Image");
  iVar5 = FUN_00524850(param_1[4],uVar3);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar2;
    *piVar6 = (int)puVar1;
  }
  param_1[0x11] = iVar5;
  uVar3 = FUN_0058bbd0(0x82d60021);
  param_1[0x12] = uVar3;
  iVar5 = FUN_00524850(param_1[4],0x1fdaf669);
  param_1[0x13] = iVar5;
  if (iVar5 != 0) {
    param_1[0x14] = *(undefined4 *)(*(int *)(iVar5 + 0x2c) + 0x38);
  }
  ExceptionList = local_c;
  return param_1;
}

