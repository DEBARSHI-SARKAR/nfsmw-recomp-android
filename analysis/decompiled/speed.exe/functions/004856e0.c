/* speed.exe 004856e0 FUN_004856e0; analysis pseudocode, not buildable source.
 * calls 00648db0 FUN_00648db0
 * calls 00786940 FUN_00786940
 * calls 005d29d0 FUN_005d29d0
 * calls 00652ad0 _malloc
 * calls 004846c0 FUN_004846c0
 * calls 005d8660 FUN_005d8660
 * calls 0046d500 FUN_0046d500
 * calls 0046d3f0 FUN_0046d3f0
 * calls 005d7930 FUN_005d7930
 * calls 00473fd0 FUN_00473fd0
 * calls 00444fe0 FUN_00444fe0
 * calls 006fbf80 FUN_006fbf80
 * calls 005d59f0 FUN_005d59f0
 * calls 00478ec0 FUN_00478ec0
 */

undefined4 * __thiscall FUN_004856e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
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
  puStack_18 = &LAB_0086abef;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_005d8660(0);
  *param_1 = &PTR_FUN_00894bac;
  puVar3 = param_1 + 6;
  local_14 = 0;
  *puVar3 = &PTR_FUN_00890970;
  param_1[7] = param_1 + 1;
  FUN_005d7930(&LAB_00402820,puVar3);
  *puVar3 = &PTR_FUN_00894974;
  local_14._0_1_ = 1;
  *param_1 = &PTR_FUN_00894ca0;
  *puVar3 = &PTR_LAB_00894c84;
  FUN_00648db0(0,0x98c7a2f5,"CDActionIce",0);
  local_14._0_1_ = 2;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = &DAT_00890978;
  FUN_00786940(0);
  local_14._0_1_ = 3;
  param_1[0xb6] = param_3;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  puVar1 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_14._0_1_ = 4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_008952f0;
    uVar2 = FUN_00478ec0();
    puVar1[2] = uVar2;
    puVar1[3] = 0;
    puVar1[4] = puVar3;
  }
  local_14 = CONCAT31(local_14._1_3_,3);
  param_1[0xb7] = puVar1;
  FUN_006fbf80(param_1[0xb6]);
  if (*(int **)(param_2 + 0x20) != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_2 + 0x20) + 0xc))();
    param_1[0xaf] = puVar3[3];
    param_1[0xac] = *puVar3;
    param_1[0xad] = puVar3[1];
    param_1[0xae] = puVar3[2];
  }
  pvVar4 = _malloc(0x90);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0046d500();
  }
  param_1[0xb0] = uVar2;
  FUN_00473fd0();
  if (param_1[0xb3] != 0) {
    FUN_00444fe0(auStack_60,param_1[0xb3]);
    if (param_1[0xb8] != 0) {
      piVar5 = (int *)FUN_005d59f0(&LAB_004039c0);
      if (piVar5 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*(int *)param_1[0xb8] + 4))();
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
    FUN_0046d3f0(0,auStack_60,param_1[0xb4],param_1[0xb5]);
  }
  pvVar4 = _malloc(0x130);
  local_14 = CONCAT31(local_14._1_3_,5);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004846c0(*(undefined4 *)(param_2 + 8),param_1[0xb0]);
  }
  param_1[0xb1] = uVar2;
  ExceptionList = pvStack_1c;
  return param_1;
}

