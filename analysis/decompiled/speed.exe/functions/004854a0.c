/* speed.exe 004854a0 FUN_004854a0; analysis pseudocode, not buildable source.
 * calls 00786940 FUN_00786940
 * calls 005d29d0 FUN_005d29d0
 * calls 00652ad0 _malloc
 * calls 005d8660 FUN_005d8660
 * calls 004716a0 FUN_004716a0
 * calls 005d7930 FUN_005d7930
 * calls 00468fa0 FUN_00468fa0
 * calls 00473ac0 FUN_00473ac0
 * calls 00444fe0 FUN_00444fe0
 * calls 006fbf80 FUN_006fbf80
 * calls 0047af20 FUN_0047af20
 * calls 005d59f0 FUN_005d59f0
 * calls 00478ec0 FUN_00478ec0
 * calls 0047a590 FUN_0047a590
 */

undefined4 * __thiscall FUN_004854a0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 uVar8;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086ab95;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_005d8660(0);
  *param_1 = &PTR_FUN_00894bac;
  puVar1 = param_1 + 6;
  local_14 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[7] = param_1 + 1;
  FUN_005d7930(&LAB_00402820,puVar1);
  *puVar1 = &PTR_FUN_00894974;
  local_14._0_1_ = 1;
  *param_1 = &PTR_FUN_00894c54;
  *puVar1 = &PTR_LAB_00894c38;
  FUN_00786940(0);
  param_1[0xe] = param_3;
  param_1[0x10] = 0;
  local_14._0_1_ = 2;
  param_1[0x11] = *(undefined4 *)(param_2 + 8);
  puVar2 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_14._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_008952f0;
    uVar3 = FUN_00478ec0();
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = puVar1;
  }
  local_14._0_1_ = 2;
  param_1[0xf] = puVar2;
  FUN_006fbf80(param_1[0xe]);
  pvVar4 = _malloc(0x120);
  local_14._0_1_ = 4;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004716a0(0);
  }
  local_14 = CONCAT31(local_14._1_3_,2);
  param_1[9] = uVar3;
  FUN_00473ac0();
  if (param_1[0xb] != 0) {
    FUN_00444fe0(local_60,param_1[0xb]);
    if (param_1[0x10] != 0) {
      piVar5 = (int *)FUN_005d59f0(&LAB_004039c0);
      if (piVar5 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*(int *)param_1[0x10] + 4))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x54))();
        pfVar7 = (float *)(**(code **)(*piVar5 + 0x3c))();
        fStack_6c = *pfVar7;
        fStack_68 = pfVar7[1];
        fStack_64 = pfVar7[2];
        (**(code **)(*piVar6 + 0xa0))(&fStack_6c,0);
        pfVar7 = (float *)(**(code **)(*piVar6 + 0x20))();
        fStack_6c = fStack_6c + *pfVar7;
        fStack_68 = fStack_68 + pfVar7[1];
        fStack_30 = fStack_64 + pfVar7[2];
        fStack_2c = -fStack_6c;
        fStack_28 = fStack_68;
      }
    }
    FUN_00468fa0(0,local_60,param_1[0xc],param_1[0xd]);
  }
  pvVar4 = _malloc(0xf0);
  local_14._0_1_ = 5;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar8 = FUN_0047a590();
    piVar5 = (int *)FUN_0047af20(uVar3,param_1[9],uVar8);
  }
  param_1[8] = piVar5;
  local_14 = CONCAT31(local_14._1_3_,2);
  (**(code **)(*piVar5 + 0x34))();
  ExceptionList = pvStack_1c;
  return param_1;
}

