/* speed.exe 00485210 FUN_00485210; analysis pseudocode, not buildable source.
 * calls 00786940 FUN_00786940
 * calls 005d29d0 FUN_005d29d0
 * calls 00652ad0 _malloc
 * calls 004735e0 FUN_004735e0
 * calls 005d8660 FUN_005d8660
 * calls 0047b980 FUN_0047b980
 * calls 004716a0 FUN_004716a0
 * calls 0047ab00 FUN_0047ab00
 * calls 005d7930 FUN_005d7930
 * calls 00468fa0 FUN_00468fa0
 * calls 00444fe0 FUN_00444fe0
 * calls 006fbf80 FUN_006fbf80
 * calls 005d59f0 FUN_005d59f0
 * calls 00478ec0 FUN_00478ec0
 */

undefined4 * __thiscall FUN_00485210(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  int *piVar6;
  float *pfVar7;
  undefined1 local_75;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086ab30;
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
  FUN_0047b980();
  param_1[8] = &PTR___purecall_00895120;
  local_14._0_1_ = 2;
  *param_1 = &PTR_FUN_008951d0;
  *puVar1 = &PTR_LAB_008951b4;
  param_1[8] = &PTR_LAB_008951ac;
  FUN_00786940(0);
  param_1[0xf] = param_3;
  param_1[0x11] = 0;
  local_14._0_1_ = 3;
  param_1[0x12] = *(undefined4 *)(param_2 + 8);
  puVar2 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_14._0_1_ = 4;
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
  local_14 = CONCAT31(local_14._1_3_,3);
  param_1[0x10] = puVar2;
  FUN_006fbf80(param_1[0xf]);
  local_75 = 1;
  if (*(int **)(param_2 + 0x20) != (int *)0x0) {
    piVar4 = (int *)(**(code **)(**(int **)(param_2 + 0x20) + 0x14))();
    if (piVar4 != (int *)0x0) {
      local_75 = (**(code **)(*piVar4 + 0x24))();
    }
  }
  pvVar5 = _malloc(0x120);
  local_14._0_1_ = 5;
  if (pvVar5 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004716a0(0);
  }
  local_14 = CONCAT31(local_14._1_3_,3);
  param_1[10] = uVar3;
  FUN_004735e0();
  if (param_1[0xc] != 0) {
    FUN_00444fe0(auStack_60,param_1[0xc]);
    if (param_1[0x11] != 0) {
      piVar4 = (int *)FUN_005d59f0(&LAB_004039c0);
      if (piVar4 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*(int *)param_1[0x11] + 4))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x54))();
        pfVar7 = (float *)(**(code **)(*piVar4 + 0x3c))();
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
    FUN_00468fa0(0,auStack_60,param_1[0xd],param_1[0xe]);
  }
  pvVar5 = _malloc(0x290);
  local_14._0_1_ = 6;
  if (pvVar5 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_0047ab00(*(undefined4 *)(param_2 + 8),param_1[10],0);
  }
  param_1[9] = piVar4;
  local_14 = CONCAT31(local_14._1_3_,3);
  (**(code **)(*piVar4 + 0x34))();
  *(undefined1 *)(param_1[9] + 0x285) = local_75;
  ExceptionList = pvStack_1c;
  return param_1;
}

