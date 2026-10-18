/* speed.exe 00411820 FUN_00411820; analysis pseudocode, not buildable source.
 * calls 0076dd30 FUN_0076dd30
 * calls 00778910 FUN_00778910
 * calls 004100a0 FUN_004100a0
 * calls 006533b0 FUN_006533b0
 * calls 00402060 FUN_00402060
 * calls 00402020 FUN_00402020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00411820(int param_1,float param_2,float param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  if (*(char *)(iVar5 + 0x2c0) != '\0') {
    return (float10)_DAT_00890968;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  iVar9 = *(short *)(iVar5 + 0x8e) * 0x16 + DAT_009b38c0;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x58))();
  iVar9 = FUN_0076dd30(iVar9);
  if (iVar9 < 4) {
    fStack_c = *(float *)(param_1 + 0x50);
  }
  else {
    fStack_c = *(float *)(param_1 + 0x54);
  }
  if (*(char *)(param_1 + 0x4e) == '\0') {
    piVar1 = *(int **)(param_1 + 0x5c);
    piVar2 = *(int **)(param_1 + 0x40);
    uVar7 = (**(code **)(*piVar1 + 0x24))();
    uVar8 = (**(code **)(*piVar1 + 0x20))(uVar7);
    (**(code **)(*piVar2 + 0x48))(uVar8);
    fVar10 = (float10)FUN_00778910(uVar8,uVar7);
    fVar3 = _DAT_0089062c;
    if (iVar6 == 2) {
      fVar3 = _DAT_00890624;
    }
    fVar4 = (fVar3 * _DAT_00890d58) / (fStack_c * fStack_c);
    if (fVar4 <= ABS((float)fVar10)) {
      fVar4 = ABS((float)fVar10);
    }
    fVar3 = SQRT((fVar3 * _DAT_00890d58) / fVar4);
    if (fVar3 <= fStack_c) {
      fStack_c = fVar3;
    }
    if (((*(char *)(iVar5 + 0x55) != '\0') && (*(int *)(iVar5 + 0x5c) != 0)) &&
       (*(char *)(iVar5 + 0x60) == '\0')) {
      fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x5c) + 0x18))();
      fStack_8 = (float)fVar10;
      if (*(char *)(param_1 + 0x58) != '\0') {
        fStack_8 = fStack_8 + fStack_8;
      }
      fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x5c) + 0x14))();
      uVar7 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))();
      fVar11 = (float10)FUN_004100a0(iVar5 + 0x158,uVar7);
      fVar11 = fVar11 - (float10)(float)(fVar10 + fVar10);
      if (fVar11 <= (float10)_DAT_00890968) {
        fStack_4 = 0.0;
      }
      else {
        fStack_4 = (float)fVar11;
      }
      fVar3 = fStack_8 * _DAT_00891034;
      if (fStack_8 * _DAT_00891034 <= _DAT_0089096c) {
        fVar3 = _DAT_0089096c;
      }
      fVar10 = (float10)FUN_006533b0(fVar3 * param_2);
      if ((float10)fStack_4 < fVar10) {
        fVar10 = (float10)FUN_00402060((float)(((float10)*(float *)(iVar5 + 100) / fVar10) *
                                              (float10)fStack_4),0,fStack_c,param_2);
        fVar10 = (float10)FUN_00402020((float)fVar10);
        fStack_c = (float)fVar10;
      }
    }
  }
  if ((iVar6 != 2) && (param_2 = param_3 + param_3 + param_2, param_2 <= fStack_c)) {
    return (float10)param_2;
  }
  return (float10)fStack_c;
}

