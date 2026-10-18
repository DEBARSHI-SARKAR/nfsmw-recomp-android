/* speed.exe 006b8060 FUN_006b8060; analysis pseudocode, not buildable source.
 * calls 0041cb10 FUN_0041cb10
 * calls 006269b0 FUN_006269b0
 * calls 005d59f0 FUN_005d59f0
 * calls 0069b100 FUN_0069b100
 * calls 005d7930 FUN_005d7930
 * calls 006b7ad0 FUN_006b7ad0
 * calls 0042e340 FUN_0042e340
 * calls 004040f0 FUN_004040f0
 * calls 005cc240 FUN_005cc240
 * calls 00454810 FUN_00454810
 */

undefined4 * __thiscall FUN_006b8060(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087dc34;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006b7ad0();
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x65;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x66] = iVar4;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008ab02c;
  local_4._0_1_ = 1;
  FUN_0042e340();
  *param_1 = &PTR_FUN_008acba8;
  param_1[2] = &PTR_LAB_008acb9c;
  param_1[0x12] = &PTR_LAB_008acaf0;
  param_1[0x14] = &PTR_LAB_008aca48;
  param_1[0x16] = &PTR_LAB_008aca40;
  param_1[0x18] = &PTR_LAB_008aca08;
  param_1[0x19] = &PTR_FUN_008aca04;
  param_1[0x1a] = &PTR_LAB_008ac9f4;
  param_1[0x4c] = &PTR_LAB_008ac9d4;
  *puVar1 = &PTR_LAB_008ac9c0;
  param_1[0x67] = &PTR_LAB_008ac9b0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = DAT_008a2fb4;
  param_1[0x6e] = DAT_008a2fb8;
  param_1[0x6f] = DAT_008a2fbc;
  param_1[0x70] = DAT_008a2fb4;
  param_1[0x71] = DAT_008a2fb8;
  param_1[0x72] = DAT_008a2fbc;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar3 = FUN_005d59f0();
  param_1[0x6a] = uVar3;
  (**(code **)(*(int *)param_1[0x4e] + 0x48))();
  iVar4 = FUN_00454810();
  if (iVar4 == 0) {
    iVar4 = FUN_006269b0();
  }
  iVar4 = *(int *)(iVar4 + 4);
  if (iVar4 != 0) {
    iVar2 = *(int *)param_1[0x1e];
    uStack_54 = *(undefined4 *)(iVar2 + 0x90);
    uStack_50 = *(undefined4 *)(iVar2 + 0x94);
    uStack_4c = *(undefined4 *)(iVar2 + 0x98);
    iVar2 = *(int *)param_1[0x1e];
    uStack_48 = *(undefined4 *)(iVar2 + 0x10);
    uStack_44 = *(undefined4 *)(iVar2 + 0x14);
    uStack_40 = *(undefined4 *)(iVar2 + 0x18);
    FUN_004040f0();
    puStack_34 = auStack_3c;
    puStack_24 = &uStack_54;
    uStack_38 = 0xa6b47fac;
    uStack_2c = 4;
    puStack_20 = &uStack_48;
    uStack_1c = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    iStack_28 = iVar4;
    puStack_18 = param_1 + 0x67;
    FUN_005cc240("PVehicle");
    piVar5 = (int *)FUN_0041cb10();
    if (piVar5 != (int *)0x0) {
      iVar4 = FUN_005d59f0();
      param_1[0x69] = iVar4;
      if (iVar4 == 0) {
        (**(code **)(*piVar5 + 8))();
      }
      else {
        (**(code **)(*(int *)param_1[0xd] + 0xc))();
        FUN_0069b100();
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

