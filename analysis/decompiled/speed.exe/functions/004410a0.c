/* speed.exe 004410a0 FUN_004410a0; analysis pseudocode, not buildable source.
 * calls 0040abb0 FUN_0040abb0
 * calls 005c5e80 FUN_005c5e80
 * calls 00438fa0 FUN_00438fa0
 * calls 00410220 FUN_00410220
 * calls 005cc240 FUN_005cc240
 * calls 0040aaa0 FUN_0040aaa0
 * calls 005d59f0 FUN_005d59f0
 * calls 0043c820 FUN_0043c820
 * calls 007c5250 _qsort
 * calls 00410180 FUN_00410180
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004410a0(int param_1,int param_2,size_t param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 *puVar12;
  size_t _NumOfElements;
  float10 fVar13;
  float10 fVar14;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int *piStack_28;
  float fStack_24;
  float fStack_20;
  void *local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869728;
  pvStack_c = ExceptionList;
  if (param_4 < _DAT_00890604) {
    param_4 = 3.0;
  }
  if (param_5 < param_4 + _DAT_0089096c) {
    param_5 = param_4 + _DAT_0089096c;
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &pvStack_c;
  FUN_00438fa0(iVar7);
  iVar7 = (**(code **)(*(int *)(param_1 + 0x48) + 8))();
  if (*(int **)(iVar7 + 0x1c) != (int *)0x0) {
    piVar8 = (int *)(**(code **)(**(int **)(iVar7 + 0x1c) + 0x54))();
    fVar13 = (float10)(**(code **)(*piVar8 + 0x30))();
    if ((float10)_DAT_00891080 <= fVar13) {
      if (*(int **)(iVar7 + 0x1c) == (int *)0x0) {
        pfVar11 = (float *)&DAT_008a2fb4;
      }
      else {
        piVar8 = (int *)(**(code **)(**(int **)(iVar7 + 0x1c) + 0x54))();
        pfVar11 = (float *)(**(code **)(*piVar8 + 0x24))();
      }
      fStack_58 = *pfVar11;
      fStack_54 = pfVar11[1];
      goto LAB_00441192;
    }
  }
  pfVar11 = (float *)(iVar7 + 0x20);
  fStack_58 = *pfVar11;
  fStack_54 = *(float *)(iVar7 + 0x24);
LAB_00441192:
  fStack_50 = pfVar11[2];
  FUN_00410220(&fStack_58);
  fStack_44 = -fStack_58;
  fStack_40 = fStack_50;
  fStack_4c = fStack_50;
  fStack_48 = 0.0;
  fStack_3c = 0.0;
  fStack_38 = fStack_44;
  FUN_00410220(&fStack_40);
  fStack_34 = *(float *)(iVar7 + 0x10);
  fStack_30 = *(float *)(iVar7 + 0x14);
  fStack_2c = *(float *)(iVar7 + 0x18);
  iVar7 = FUN_005cc240("AIGoalFleePursuit");
  puVar12 = *(undefined4 **)(param_2 + 4);
  if (puVar12 != *(undefined4 **)(param_2 + 8)) {
    do {
      piVar8 = (int *)*puVar12;
      piVar9 = (int *)FUN_005d59f0(&LAB_00403700);
      if (piVar9 != (int *)0x0) {
        piVar10 = (int *)(**(code **)(*piVar9 + 8))();
        iVar1 = *(int *)(param_1 + 0xbc);
        pfVar11 = (float *)(**(code **)(*piVar10 + 0xc))();
        fVar2 = *pfVar11 - *(float *)(iVar1 + 0x10);
        fVar4 = pfVar11[1] - *(float *)(iVar1 + 0x14);
        fVar3 = pfVar11[2] - *(float *)(iVar1 + 0x18);
        fVar13 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
        if ((((fVar13 <= (float10)_DAT_008905f8) &&
             (cVar6 = (**(code **)(*piVar9 + 0x68))(), cVar6 != '\0')) &&
            (piVar10 = (int *)(**(code **)(*piVar8 + 0x80))(), *piVar10 == DAT_0091ddbc)) &&
           (piVar10 = (int *)(**(code **)(*piVar9 + 0xc0))(), *piVar10 != iVar7)) {
          piVar10 = (int *)(**(code **)(*piVar9 + 8))();
          piVar10 = (int *)(**(code **)(*piVar10 + 0x44))();
          if (*piVar10 != DAT_0092c4f4) {
            piVar9 = (int *)(**(code **)(*piVar9 + 8))();
            pfVar11 = (float *)(**(code **)(*piVar9 + 0xc))();
            fStack_4c = *pfVar11 - fStack_34;
            fStack_48 = pfVar11[1] - fStack_30;
            fStack_44 = pfVar11[2] - fStack_2c;
            fVar13 = (float10)FUN_00410180(&fStack_4c);
            fVar14 = (float10)FUN_0040aaa0(fStack_4c * fStack_58 +
                                           fStack_44 * fStack_50 + fStack_54 * fStack_48,
                                           fStack_4c * fStack_40 +
                                           fStack_3c * fStack_48 + fStack_38 * fStack_44);
            fStack_24 = (float)fVar14;
            piStack_28 = piVar8;
            fStack_20 = (float)fVar13;
            FUN_0043c820(&piStack_28);
          }
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != *(undefined4 **)(param_2 + 8));
  }
  pvVar5 = local_18;
  iVar7 = 0;
  if (local_18 != (void *)0x0) {
    _NumOfElements = (local_14 - (int)local_18) / 0xc;
    if (_NumOfElements != 0) {
      if ((int)param_3 < (int)_NumOfElements) {
        _qsort(local_18,_NumOfElements,0xc,(_PtFuncCompare *)&LAB_0040ab90);
        iVar7 = _NumOfElements - param_3;
        FUN_0040abb0(pvVar5,iVar7,param_5,&fStack_58,&fStack_40);
        _NumOfElements = param_3;
      }
      FUN_0040abb0((void *)((int)pvVar5 + iVar7 * 0xc),_NumOfElements,param_4,&fStack_58,&fStack_40)
      ;
      local_4 = 0xffffffff;
      FUN_005d0370(pvVar5,((local_10 - (int)pvVar5) / 0xc) * 0xc,0);
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  local_4 = 0xffffffff;
  if (local_18 != (void *)0x0) {
    FUN_005d0370(local_18,((local_10 - (int)local_18) / 0xc) * 0xc,0);
  }
  ExceptionList = pvStack_c;
  return 0;
}

