/* speed.exe 004141d0 FUN_004141d0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00410180 FUN_00410180
 * calls 00407940 FUN_00407940
 * calls 00401ce0 FUN_00401ce0
 * calls 00410220 FUN_00410220
 * calls 00402060 FUN_00402060
 * calls 006533b0 FUN_006533b0
 * calls 0040e240 FUN_0040e240
 * calls 005c5e80 FUN_005c5e80
 * calls 00454810 FUN_00454810
 * calls 00409ed0 FUN_00409ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004141d0(int param_1,float param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST1;
  float fStack_5c;
  float fStack_58;
  int *piStack_54;
  float local_50;
  int *local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  local_4c = (int *)0xbf800000;
  if (*(float *)(param_1 + 0xa0) < _DAT_00890968 == (*(float *)(param_1 + 0xa0) == _DAT_00890968)) {
    if (param_4 == '\0') {
      if ((*(char *)(param_1 + 100) == '\0') || (*(char *)(param_1 + 0x66) != '\0')) {
        iVar7 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
        if (*(char *)(iVar7 + 0x2c0) != '\0') {
          return (float10)_DAT_00890968;
        }
        fVar12 = (float10)FUN_006533b0(param_3);
        local_50 = *(float *)(param_1 + 0x98);
        fVar12 = (float10)FUN_00407940(param_2,local_50,
                                       (float)(((((float10)*(float *)(param_1 + 0x9c) -
                                                 (float10)*(float *)(param_1 + 0x98)) * fVar12 +
                                                (float10)*(float *)(param_1 + 0x98)) -
                                               (float10)local_50) /
                                              (float10)*(float *)(param_1 + 0xa0)),
                                       *(undefined4 *)(param_1 + 0xa0));
      }
      else {
        iVar7 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
        (**(code **)(**(int **)(param_1 + 0x48) + 0x34))(&fStack_c);
        fStack_1c = *(float *)(iVar7 + 0xbc);
        fStack_18 = *(float *)(iVar7 + 0xc0);
        fStack_14 = *(float *)(iVar7 + 0xc4);
        FUN_00410220(&fStack_1c);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 100))();
        local_4c = (int *)(*(float *)(param_1 + 0x68) - *(float *)(iVar4 + 0x10));
        fStack_48 = *(float *)(param_1 + 0x6c) - *(float *)(iVar4 + 0x14);
        fStack_44 = *(float *)(param_1 + 0x70) - *(float *)(iVar4 + 0x18);
        FUN_00410220(&local_4c);
        pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
        fStack_40 = *(float *)(iVar7 + 0x98) - *pfVar6;
        fStack_3c = *(float *)(iVar7 + 0x9c) - pfVar6[1];
        fStack_38 = *(float *)(iVar7 + 0xa0) - pfVar6[2];
        fStack_28 = fStack_40;
        fStack_24 = fStack_3c;
        fStack_20 = fStack_38;
        cVar3 = FUN_0040e240(&piStack_54);
        if (cVar3 != '\0') {
          iVar5 = (**(code **)(*piStack_54 + 0x48))();
          FUN_00401ce0(iVar5 + 0x98,(float *)(iVar4 + 0x10),&fStack_28);
        }
        FUN_00410220(&fStack_40);
        FUN_00410220(&fStack_28);
        fStack_1c = *(float *)(iVar4 + 0x10);
        fStack_18 = *(float *)(iVar4 + 0x14);
        fStack_14 = *(float *)(iVar4 + 0x18);
        pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
        fStack_34 = *pfVar6 - fStack_1c;
        fStack_30 = pfVar6[1] - fStack_18;
        fStack_2c = pfVar6[2] - fStack_14;
        fVar1 = fStack_34 * (float)local_4c + fStack_30 * fStack_48 + fStack_2c * fStack_44;
        fVar12 = (float10)FUN_00409ed0();
        fVar2 = _DAT_008910c8;
        if (_DAT_00890968 < fVar1) {
          fVar2 = _DAT_0089098c;
        }
        piStack_54 = (int *)(float)(fVar12 - (float10)fVar1 * (float10)fVar2);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x94))();
        fStack_58 = *(float *)(*(int *)(iVar4 + 8) + 8) * _DAT_0089098c;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
        if (iVar4 != 0) {
          piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
          cVar3 = (**(code **)(*piVar8 + 0x124))();
          if (cVar3 != '\0') {
            fStack_58 = fStack_58 * _DAT_008910c4;
          }
        }
        fVar12 = (float10)FUN_00402060(piStack_54,0x4031c71d,fStack_58);
        piStack_54 = (int *)(float)fVar12;
        if (fVar1 <= _DAT_00890968) {
          fStack_5c = fStack_58;
        }
        else {
          fVar12 = (float10)FUN_00409ed0();
          fStack_5c = (float)(extraout_ST1 - fVar12);
        }
        fVar12 = (float10)FUN_00402060(fStack_5c,0x4131c71d,fStack_58);
        fVar9 = (float10)FUN_00402060(fStack_10 * (float)local_4c +
                                      fStack_c * fStack_48 + fStack_8 * fStack_44 + _DAT_00890634,0,
                                      0x3f800000);
        fVar10 = (float10)(float)piStack_54;
        fVar1 = -fVar1;
        fStack_1c = (float)local_4c * fVar1 + fStack_34;
        fStack_18 = fStack_48 * fVar1 + fStack_30;
        fStack_14 = fStack_44 * fVar1 + fStack_2c;
        fVar11 = (float10)FUN_00410180(&fStack_1c);
        fVar12 = (float10)(float)((fVar10 - (float10)(float)fVar12) * fVar9 + (float10)(float)fVar12
                                 );
        if ((float10)_DAT_00890968 < fVar12) {
          fVar12 = fVar12 * (float10)_DAT_00890634;
        }
        fVar12 = (float10)FUN_005c5e80((float)(fVar12 * fVar12 +
                                              fVar11 * (float10)_DAT_00890d34 *
                                              fVar11 * (float10)_DAT_00890d34),0,0x3f800000);
        fVar12 = (float10)FUN_00402060((float)((float10)_DAT_0089096c -
                                              (fVar12 - (float10)_DAT_008910bc) *
                                              (float10)_DAT_008910b8));
        local_50 = (float)fVar12;
        fVar1 = fStack_24 * fStack_3c + fStack_20 * fStack_38 + fStack_1c * fStack_34;
        if (fVar1 < _DAT_00890968) {
          fVar1 = -fVar1;
        }
        fVar12 = (float10)FUN_00402060(fVar1 + _DAT_00890864,0,0x3f800000);
        fVar12 = (float10)FUN_00402060((float)(fVar12 * (float10)local_50 * (float10)fStack_58 +
                                              ((float10)_DAT_0089096c - fVar12 * (float10)local_50)
                                              * (float10)(float)piStack_54),0,fStack_58);
        piStack_54 = (int *)(float)fVar12;
        if (*(char *)(iVar7 + 0x2c0) == '\0') {
          fVar12 = (float10)FUN_00407940(param_2,*(undefined4 *)(param_1 + 0x98),
                                         (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x98)) /
                                         *(float *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa0))
          ;
        }
        else {
          fVar12 = (float10)_DAT_00890968;
        }
        if ((float10)(float)piStack_54 < fVar12) {
          fVar12 = (float10)(float)piStack_54;
        }
        local_4c = piStack_54;
      }
      local_50 = (float)fVar12;
    }
    else {
      local_50 = *(float *)(param_1 + 0xa0);
    }
  }
  else {
    local_50 = 0.0;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x94))();
  pfVar6 = (float *)FUN_00454810(0xec57e16b,0);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  param_2 = *pfVar6;
  if (((*(char *)(param_1 + 100) == '\0') || (DAT_0091e000 == 0)) ||
     (*(char *)(DAT_0091e000 + 0x198a) == '\0')) {
    iVar7 = (**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
    if (iVar7 != 0) {
      piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
      cVar3 = (**(code **)(*piVar8 + 0x124))();
      if (cVar3 != '\0') {
        param_2 = param_2 * _DAT_00890e04;
      }
    }
  }
  else {
    param_2 = param_2 + param_2;
  }
  fVar12 = (float10)FUN_006533b0(param_3);
  fVar12 = fVar12 * (float10)param_2 * (float10)local_50;
  if ((_DAT_00890968 < (float)local_4c) && ((float10)(float)local_4c < fVar12)) {
    fVar12 = (float10)(float)local_4c;
  }
  return fVar12;
}

