/* speed.exe 0043f520 FUN_0043f520; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 00425b50 FUN_00425b50
 * calls 00434bf0 FUN_00434bf0
 * calls 005d59f0 FUN_005d59f0
 * calls 006269b0 FUN_006269b0
 * calls 0043f120 FUN_0043f120
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043f520(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008695c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043f120();
  *param_1 = &PTR_FUN_00892f34;
  local_4 = 0;
  iVar8 = (**(code **)(*param_3 + 8))();
  if (((*(int *)(iVar8 + 0x1c) == 0) ||
      (piVar9 = (int *)FUN_005d59f0(&LAB_004037e0), piVar9 == (int *)0x0)) ||
     (iVar8 = (**(code **)(*piVar9 + 0x10))(), iVar8 == 0)) {
    param_1[8] = 0x3f000000;
    param_1[9] = 0x40000000;
  }
  else {
    puVar10 = (undefined4 *)FUN_00454810(0xc146fc03,0);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)FUN_006269b0(4);
    }
    param_1[8] = *puVar10;
    puVar10 = (undefined4 *)FUN_00454810(0x5c9f5f55,0);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)FUN_006269b0(4);
    }
    param_1[9] = *puVar10;
  }
  puVar10 = &DAT_00892f20;
  pfVar11 = (float *)&DAT_00890e5c;
  fVar6 = _DAT_0089096c - (float)param_1[8] * _DAT_0089119c;
  fVar7 = _DAT_00890d3c - (float)param_1[8] * _DAT_00890da4;
  do {
    fVar3 = pfVar11[-1];
    fVar1 = pfVar11[-1];
    fVar4 = *pfVar11;
    fVar5 = pfVar11[1];
    fVar2 = *pfVar11;
    uStack_10 = FUN_005cc240("AIGoalRam");
    iVar8 = param_1[5];
    uStack_14 = *puVar10;
    fStack_2c = fVar3;
    fStack_28 = fVar4;
    fStack_24 = fVar5;
    fStack_20 = fVar6 * fVar1;
    fStack_1c = fVar6 * fVar2;
    fStack_18 = fVar7;
    if ((iVar8 == 0) || ((uint)(param_1[7] - iVar8 >> 5) <= (uint)(param_1[6] - iVar8 >> 5))) {
      FUN_00434bf0(param_1[6],1,&fStack_2c);
    }
    else {
      iVar8 = param_1[6];
      FUN_00425b50(iVar8,1,&fStack_2c,param_1 + 4,fVar6);
      param_1[6] = iVar8 + 0x20;
    }
    pfVar11 = pfVar11 + 3;
    puVar10 = puVar10 + 1;
  } while ((int)pfVar11 < 0x890e98);
  param_1[1] = 4;
  param_1[2] = 2;
  *(undefined1 *)(param_1 + 3) = 1;
  ExceptionList = pvStack_c;
  return param_1;
}

