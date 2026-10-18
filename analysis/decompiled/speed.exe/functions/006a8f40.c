/* speed.exe 006a8f40 FUN_006a8f40; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 00486900 FUN_00486900
 * calls 005d3bc0 FUN_005d3bc0
 * calls 00410180 FUN_00410180
 * calls 00401c10 FUN_00401c10
 * calls 00653790 FUN_00653790
 * calls 00401ae0 FUN_00401ae0
 * calls 00401b80 FUN_00401b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a8f40(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined1 auStack_1c [12];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  iVar6 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x4c))();
  bVar4 = false;
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x80))();
  fStack_c = pfVar7[1];
  fStack_10 = *pfVar7;
  fStack_4 = pfVar7[3];
  fStack_8 = pfVar7[2];
  fVar1 = -fStack_4;
  fStack_3c = DAT_008a2fb8;
  fStack_30 = DAT_008a2fb8;
  fVar2 = fStack_10 * param_2[4] + fStack_c * param_2[5] + fStack_8 * param_2[6];
  fStack_40 = DAT_008a2fb4;
  fStack_38 = DAT_008a2fbc;
  fStack_34 = DAT_008a2fb4;
  fStack_2c = DAT_008a2fbc;
  if (iVar6 == 0) {
    *(float *)(param_1 + 0x84) = param_2[0x30] + *(float *)(param_1 + 0x84);
    fVar3 = *(float *)(param_1 + 0x88);
    if (*(float *)(param_1 + 0x88) <= fVar1) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x88) = fVar3;
    fVar9 = (float10)_DAT_008aac70;
    if ((((_DAT_0089096c < *(float *)(param_1 + 0x84)) && (_DAT_008aacc8 < fVar2)) &&
        (_DAT_008aac9c < fVar3)) && ((param_2[0x15] < _DAT_00890968 && (fVar1 < _DAT_008aac74)))) {
      fVar10 = (float10)FUN_00401ae0(fVar1,0,0x40c00000);
      fVar9 = (float10)_DAT_0089096c;
      fVar11 = (float10)FUN_00401ae0(param_2[0x2f],0,0x41a00000);
      fVar9 = fVar11 * (float10)(float)(fVar9 - fVar10) * (float10)_DAT_008aac84 +
              (float10)_DAT_008aac70;
    }
    bVar4 = true;
    fStack_30 = (float)((float10)fStack_30 + -(fVar9 * (float10)param_2[0x2b]));
LAB_006a90f7:
    if ((_DAT_0089119c < param_2[5]) &&
       (cVar5 = (**(code **)(**(int **)(param_1 + 0x54) + 0x78))(), cVar5 == '\0')) {
      fVar9 = (float10)FUN_00401ae0(param_2[0x2f],0,0x40a00000);
      fVar10 = (float10)FUN_00410180(param_2 + 0x24);
      fVar10 = (float10)FUN_00653790((float)fVar10);
      FUN_00486900(param_2 + 0x24,param_2 + 0x28,&fStack_28);
      FUN_00401b80(&fStack_28,-(float)(fVar10 * (float10)(float)fVar9),&fStack_28);
      fStack_24 = 0.0;
      FUN_00401670(&fStack_28,param_2,&fStack_28);
      fStack_40 = fStack_40 + fStack_28;
      bVar4 = true;
      fStack_3c = fStack_3c + fStack_24;
      fStack_38 = fStack_20 + fStack_38;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (iVar6 < 2) goto LAB_006a90f7;
  }
  if ((((iVar6 == 0) && (_DAT_00899124 < fStack_c)) && (_DAT_00890cd4 < param_2[5])) &&
     ((_DAT_0089119c < fVar2 && (_DAT_008aabe0 < fVar1)))) {
    fVar10 = (float10)FUN_00401ae0(fVar1,0,0x41700000);
    fVar9 = (float10)_DAT_0089096c;
    fVar11 = (float10)FUN_00401ae0(param_2[0x2f],0,0x40a00000);
    FUN_005d3bc0(param_2,&fStack_10,&fStack_28);
    pfVar7 = param_2 + 8;
    fVar1 = fStack_28 * *pfVar7 + fStack_24 * param_2[9] + fStack_20 * param_2[10];
    if (fVar1 < _DAT_00895c40) {
      FUN_005d3bc0(&fStack_28,pfVar7,auStack_1c);
      FUN_00401c10(auStack_1c,
                   (fVar1 - _DAT_0089096c) * param_2[0x2b] * (float)fVar11 * (float)(fVar9 - fVar10)
                   * _DAT_00891184,&fStack_40,&fStack_40);
      bVar4 = true;
    }
    FUN_005d3bc0(&fStack_10,pfVar7,&fStack_28);
    fVar1 = fStack_28 * *param_2 + fStack_24 * param_2[1] + fStack_20 * param_2[2];
    if (fVar1 < _DAT_00895c40) {
      FUN_005d3bc0(&fStack_28,param_2,auStack_1c);
      FUN_00401c10(auStack_1c,
                   (fVar1 - _DAT_0089096c) * param_2[0x2b] * (float)fVar11 * (float)(fVar9 - fVar10)
                   * _DAT_008aad94,&fStack_40,&fStack_40);
      goto LAB_006a936a;
    }
  }
  if (!bVar4) {
    return;
  }
LAB_006a936a:
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  (**(code **)(*piVar8 + 0x84))(&fStack_34,&fStack_40);
  return;
}

