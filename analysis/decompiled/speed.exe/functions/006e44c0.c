/* speed.exe 006e44c0 FUN_006e44c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 007e7d8e D3DXMatrixTranslation
 * calls 007538d0 FUN_007538d0
 * calls 004700d0 FUN_004700d0
 * calls 006cf0a0 FUN_006cf0a0
 * calls 006e3bc0 FUN_006e3bc0
 * calls 00744d40 FUN_00744d40
 * calls 007e7da0 D3DXVec3TransformNormal
 * calls 006e4370 FUN_006e4370
 * calls 006c8cd0 FUN_006c8cd0
 * calls 006c6810 FUN_006c6810
 * calls 006e0e30 FUN_006e0e30
 * calls 00723fa0 FUN_00723fa0
 * calls 006d7f70 FUN_006d7f70
 * calls 006d7950 FUN_006d7950
 * calls 006e2a40 FUN_006e2a40
 * calls 007e7d88 D3DXMatrixPerspectiveLH
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006bd3b0 FUN_006bd3b0
 * calls 006e2ac0 FUN_006e2ac0
 * calls 007e7d94 D3DXVec3TransformCoordArray
 * calls 006e0200 FUN_006e0200
 * calls 0045dbf0 FUN_0045dbf0
 * calls 00444fe0 FUN_00444fe0
 * calls 007e7d82 D3DXMatrixOrthoLH
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f490 FUN_0045f490
 * calls 007e7d9a D3DXVec3Normalize
 * calls 0045db30 FUN_0045db30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e44c0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float *pfVar17;
  int *piVar18;
  float10 fVar19;
  float10 fVar20;
  undefined4 uVar21;
  float **ppfVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float *pfStack_44c;
  float *pfStack_448;
  float *pfStack_444;
  float *pfStack_440;
  float **ppfStack_43c;
  float *pfStack_438;
  float *pfStack_434;
  float local_41c;
  float local_414;
  float *local_410;
  float *local_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  undefined4 local_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8 [3];
  undefined1 auStack_3dc [4];
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  float local_3d0;
  float local_3cc [5];
  undefined4 *local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined1 auStack_354 [36];
  undefined4 auStack_330 [3];
  undefined1 auStack_324 [20];
  undefined1 local_310 [100];
  undefined1 auStack_2ac [28];
  float local_290;
  float local_28c;
  float local_288;
  undefined1 auStack_278 [24];
  undefined4 auStack_260 [3];
  undefined1 auStack_254 [52];
  undefined1 auStack_220 [36];
  undefined1 auStack_1fc [188];
  undefined1 local_140 [44];
  void *pvStack_114;
  undefined4 uStack_100;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087e6eb;
  pvStack_1c = ExceptionList;
  local_3b8 = &DAT_00919c70 + param_3 * 0x1c;
  _DAT_00982cfc = param_3;
  DAT_00982d01 = 1;
  ExceptionList = &pvStack_1c;
  if (DAT_00982c08 != 0) {
    pfStack_438 = (float *)(&DAT_00919cd0)[param_3 * 0x1c];
    pfStack_434 = (float *)0x1;
    ppfStack_43c = (float **)0x6e4517;
    ExceptionList = &pvStack_1c;
    FUN_006bd3b0();
  }
  iVar10 = param_1[0x10];
  _DAT_00982d30 = *(float *)(iVar10 + 0x40);
  _DAT_00982d34 = *(float *)(iVar10 + 0x44);
  _DAT_00982d38 = *(float *)(iVar10 + 0x48);
  pfStack_434 = (float *)(DAT_009b392c + 0x180);
  pfStack_438 = &local_3f0;
  ppfStack_43c = (float **)0x6e455f;
  FUN_0045f490();
  local_3cc[0] = local_3ec * _DAT_008faeb8;
  local_28c = local_3ec;
  ppfStack_43c = &local_410;
  pfStack_440 = (float *)&DAT_00982d30;
  local_3cc[1] = local_3e8[0] * _DAT_008faeb8;
  local_288 = local_3e8[0];
  local_290 = local_3f0;
  pfStack_448 = (float *)local_140;
  pfStack_444 = (float *)&DAT_00982d50;
  _DAT_00982d50 = local_3f0 * _DAT_008faeb8 + _DAT_00982d30;
  local_410 = (float *)0x0;
  local_40c = (float *)0x0;
  _DAT_00982d54 = local_3cc[0] + _DAT_00982d34;
  local_408 = 1.0;
  _DAT_00982d58 = local_3cc[1] + _DAT_00982d38;
  pfStack_44c = (float *)0x6e4613;
  local_3e8[0] = _DAT_00982d58;
  FUN_006cf0a0();
  pfStack_434 = (float *)DAT_00925970;
  pfStack_438 = (float *)local_140;
  ppfStack_43c = (float **)0x6e462c;
  FUN_004700d0();
  pfStack_434 = (float *)param_3;
  pfStack_438 = (float *)0x6e4632;
  FUN_006d7950();
  pfStack_434 = (float *)0x6e463f;
  FUN_006e2a40();
  pfStack_434 = (float *)0x6e4649;
  FUN_006e2a40();
  pfStack_434 = (float *)0x6e468f;
  uVar7 = FUN_007c4b80();
  pfStack_438 = (float *)0x6e4697;
  pfStack_434 = (float *)uVar7;
  fVar19 = (float10)FUN_0045db30();
  ppfStack_43c = (float **)0x6e46a1;
  pfStack_438 = (float *)uVar7;
  fVar20 = (float10)FUN_0045dbf0();
  local_414 = (float)((float10)_DAT_0089096c / ((float10)(float)fVar19 / fVar20));
  ppfStack_43c = (float **)0x6e46cd;
  pfVar8 = (float *)FUN_007c4b80();
  pfStack_440 = (float *)0x6e46d5;
  ppfStack_43c = (float **)pfVar8;
  fVar19 = (float10)FUN_0045db30();
  pfStack_444 = (float *)0x6e46df;
  pfStack_440 = pfVar8;
  fVar20 = (float10)FUN_0045dbf0();
  pfStack_434 = (float *)&DAT_00983e00;
  _DAT_00983e04 = 0;
  _DAT_00983e08 = 0;
  _DAT_00983e0c = 0;
  _DAT_00983e10 = 0;
  _DAT_00983e18 = 0;
  _DAT_00983e1c = 0;
  _DAT_00983e20 = 0;
  _DAT_00983e24 = 0;
  _DAT_00983e30 = 0;
  _DAT_00983e34 = 0;
  _DAT_00983e00 = local_414;
  _DAT_00983e2c = 0x3f800000;
  _DAT_00983e3c = 0;
  _DAT_00983e28 = _DAT_00901ab0 / (_DAT_00901ab0 - DAT_00901aac);
  _DAT_00983e14 = (float)-((float10)_DAT_0089096c / ((float10)(float)fVar19 / fVar20));
  _DAT_00983e38 = -(DAT_00901aac * _DAT_00983e28);
  pfStack_438 = (float *)0x6e47b3;
  puVar9 = (undefined4 *)FUN_006c8cd0();
  puVar16 = &DAT_00986df0;
  for (iVar10 = 0x36; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar16 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar16 = puVar16 + 1;
  }
  DAT_00982d04 = *param_1;
  fVar26 = ((float)*(int *)(param_1[0x18] + 0x18) / (float)*(int *)(param_1[0x18] + 0x14)) *
           _DAT_00901aa8;
  pfStack_434 = (float *)0x6e480f;
  uVar7 = FUN_007c4b80();
  pfStack_438 = (float *)0x6e4817;
  pfStack_434 = (float *)uVar7;
  fVar19 = (float10)FUN_0045db30();
  ppfStack_43c = (float **)0x6e4821;
  pfStack_438 = (float *)uVar7;
  fVar20 = (float10)FUN_0045dbf0();
  local_414 = (float)((float10)_DAT_0089096c / ((float10)(float)fVar19 / fVar20));
  ppfStack_43c = (float **)0x6e484d;
  pfVar8 = (float *)FUN_007c4b80();
  pfStack_440 = (float *)0x6e4855;
  ppfStack_43c = (float **)pfVar8;
  fVar19 = (float10)FUN_0045db30();
  pfStack_444 = (float *)0x6e485f;
  pfStack_440 = pfVar8;
  fVar20 = (float10)FUN_0045dbf0();
  pfStack_434 = (float *)&DAT_00983e00;
  _DAT_00983e04 = 0;
  _DAT_00983e08 = 0;
  _DAT_00983e0c = 0;
  _DAT_00983e10 = 0;
  _DAT_00983e18 = 0;
  _DAT_00983e1c = 0;
  _DAT_00983e20 = 0;
  _DAT_00983e24 = 0;
  _DAT_00983e30 = 0;
  _DAT_00983e34 = 0;
  _DAT_00983e00 = local_414;
  _DAT_00983e2c = 0x3f800000;
  _DAT_00983e3c = 0;
  _DAT_00983e28 = _DAT_00901ab0 / (_DAT_00901ab0 - DAT_00901aac);
  _DAT_00983e14 = (float)-((float10)_DAT_0089096c / ((float10)(float)fVar19 / fVar20));
  _DAT_00983e38 = -(DAT_00901aac * _DAT_00983e28);
  pfStack_438 = (float *)0x6e4932;
  puVar9 = (undefined4 *)FUN_006c8cd0();
  pfStack_434 = (float *)0x2;
  puVar16 = &DAT_00987ce0;
  for (iVar10 = 0x36; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar16 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar16 = puVar16 + 1;
  }
  pfStack_438 = (float *)0x5;
  ppfStack_43c = (float **)0x0;
  pfStack_440 = (float *)0x6e494c;
  FUN_006c6810();
  pfStack_440 = (float *)*param_1;
  pfStack_444 = (float *)local_310;
  pfStack_448 = (float *)0x6e495f;
  FUN_00444fe0();
  _DAT_00982d08 = 0;
  local_41c = DAT_00901aac;
  pfVar8 = (float *)(DAT_00987b58 + 0x14);
  fVar2 = _DAT_00901ab0;
  for (uVar13 = 0; (DAT_00987b58 != 0 && (uVar13 < (uint)((DAT_00987b5c - DAT_00987b58) / 0x18)));
      uVar13 = uVar13 + 1) {
    if (pfVar8[-3] <= local_41c) {
      local_41c = pfVar8[-3];
    }
    if (fVar2 <= *pfVar8) {
      fVar2 = *pfVar8;
    }
    pfVar8 = pfVar8 + 6;
  }
  local_3ec = 0.0;
  local_3e8[0] = 0.0;
  local_3e8[1] = 0.0;
  local_14 = 0;
  if (DAT_00988054 == (float *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = ((int)DAT_00988058 - (int)DAT_00988054) / 0x18;
  }
  pfStack_434 = (float *)(iVar10 * 8 + 8);
  pfStack_438 = (float *)0x6e4a17;
  FUN_006e3bc0();
  puVar14 = &DAT_00986e68;
  do {
    pfStack_438 = (float *)0x6e4a2a;
    pfStack_434 = (float *)puVar14;
    FUN_006e4370();
    puVar14 = puVar14 + 0xc;
  } while ((int)puVar14 < 0x986ec8);
  pfVar8 = DAT_00988054;
  if (DAT_00988054 != DAT_00988058) {
    do {
      pfVar15 = pfVar8 + 6;
      uVar13 = 0;
      do {
        if ((uVar13 & 4) == 0) {
          local_3cc[1] = pfVar8[5];
        }
        else {
          local_3cc[1] = pfVar8[2];
        }
        if ((uVar13 & 2) == 0) {
          local_3cc[0] = pfVar8[4];
        }
        else {
          local_3cc[0] = pfVar8[1];
        }
        if ((uVar13 & 1) == 0) {
          local_3d0 = pfVar8[3];
        }
        else {
          local_3d0 = *pfVar8;
        }
        pfStack_434 = &local_3d0;
        pfStack_438 = (float *)0x6e4a90;
        FUN_006e4370();
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 8);
      pfVar8 = pfVar15;
    } while (pfVar15 != DAT_00988058);
  }
  pfStack_434 = (float *)*param_1;
  local_3e8[2] = _DAT_00901aa0 + _DAT_00890cd4;
  pfStack_438 = &local_290;
  ppfStack_43c = (float **)&local_3fc;
  pfStack_440 = (float *)0x6e4ac6;
  D3DXVec3TransformNormal();
  pfStack_444 = &local_408;
  pfStack_448 = (float *)0x6e4ad3;
  pfStack_440 = pfStack_444;
  D3DXVec3Normalize();
  local_3f0 = (float)local_40c * _DAT_00890da8 - local_408 * _DAT_00890968;
  pfStack_44c = &local_3f0;
  fVar25 = local_408 * _DAT_00890968 - (float)local_410 * _DAT_00890da8;
  fVar4 = (float)local_410 * _DAT_00890968 - (float)local_40c * _DAT_00890968;
  pfStack_448 = pfStack_44c;
  local_3ec = fVar25;
  local_3e8[0] = fVar4;
  D3DXVec3Normalize();
  fVar2 = local_3f0 * local_414 - (float)local_410 * fStack_3f4;
  local_3cc[0] = (float)local_410 * fStack_3f8 - local_3f0 * fVar26;
  local_3cc[1] = fStack_3f4 * fVar26 - local_414 * fStack_3f8;
  local_3d0 = fVar2;
  D3DXVec3Normalize(&local_3d0,&local_3d0);
  pfVar15 = local_40c;
  pfVar8 = local_410;
  local_3cc[0] = fStack_400;
  local_3cc[2] = (float)uStack_3d8;
  local_3cc[4] = (float)local_3fc;
  uStack_3b4 = uStack_3d4;
  local_3cc[3] = 0.0;
  uStack_3b0 = 0;
  fStack_3ac = fStack_3f8;
  fStack_3a4 = local_3d0;
  fStack_3a0 = 0.0;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 0.0;
  fStack_390 = 1.0;
  if (local_410 == (float *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = ((int)local_40c - (int)local_410) / 0xc;
  }
  fVar24 = 1.68156e-44;
  piVar23 = (int *)0xc;
  _DAT_00988000 = fVar25;
  _DAT_00988004 = fVar4;
  _DAT_00988008 = fVar26;
  pfVar17 = local_410;
  local_3cc[1] = fVar25;
  local_3b8 = (undefined4 *)fVar4;
  fStack_3a8 = fVar26;
  D3DXVec3TransformCoordArray(local_410,0xc,local_410,0xc,local_3cc,iVar10);
  FUN_006e0e30(&stack0xfffffbd4);
  fVar26 = 0.0;
  fStack_404 = (fStack_390 + fStack_39c) * _DAT_008933d4;
  fVar25 = 0.0;
  local_408 = (fStack_394 + fStack_3a0) * _DAT_008933d4;
  pfStack_44c = (float *)((fStack_398 + fStack_3a4) * _DAT_008933d4);
  pfStack_448 = (float *)(local_408 + _DAT_009885bc);
  pfStack_444 = (float *)(fStack_39c - fVar4);
  fVar4 = 0.0;
  local_40c = pfStack_44c;
  while (pfVar8 != pfVar15) {
    pfVar11 = pfVar8 + 3;
    fVar5 = pfVar8[2] - (float)pfStack_444;
    pfVar1 = pfVar8 + 1;
    local_40c = (float *)(*pfVar8 - ((float)pfStack_44c + _DAT_009885c0));
    pfVar8 = pfVar11;
    if (_DAT_00890968 < fVar5) {
      fVar6 = (float)local_40c * (_DAT_0089096c / fVar5);
      if (fVar25 <= ABS(fVar6)) {
        fVar25 = ABS(fVar6);
      }
      fVar6 = (_DAT_0089096c / fVar5) * (*pfVar1 - (float)pfStack_448);
      if (fVar26 <= ABS(fVar6)) {
        fVar26 = ABS(fVar6);
      }
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
    }
  }
  D3DXMatrixTranslation
            (auStack_1fc,-((float)pfStack_44c + _DAT_009885c0),-(float)pfStack_448,
             -(float)pfStack_444);
  fVar26 = (float)pfVar17 * fVar2 * _DAT_00901a98;
  fVar25 = (float)piVar23 * fVar2 * _DAT_00901a94;
  D3DXMatrixPerspectiveLH(&local_28c,fVar25 + fVar25,fVar26 + fVar26,fVar2,fVar24 * _DAT_00901a9c);
  D3DXMatrixMultiply(&local_408,&local_408,auStack_220);
  D3DXMatrixMultiply(&local_414,&local_414,auStack_2ac);
  local_3cc[1] = 1.0;
  local_3cc[2] = 0.0;
  local_3cc[3] = 0.0;
  local_3cc[4] = 0.0;
  local_3b8 = (undefined4 *)0x0;
  uStack_3b4 = 0;
  uStack_3b0 = 0xbf800000;
  fStack_3ac = 0.0;
  fStack_3a8 = 0.0;
  fStack_3a4 = 1.0;
  fStack_3a0 = 0.0;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = -0.5;
  fStack_390 = 1.5;
  uStack_38c = 0x3f800000;
  D3DXMatrixOrthoLH(auStack_278,DAT_00901a84,DAT_00901a88,DAT_00901a8c,DAT_00901a90);
  D3DXMatrixMultiply(auStack_3dc,auStack_3dc,&local_28c);
  ppfVar22 = &pfStack_440;
  D3DXMatrixMultiply(ppfVar22,ppfVar22,local_3e8);
  D3DXMatrixMultiply(auStack_324,*param_1);
  iVar10 = *piVar23;
  puVar9 = auStack_330;
  puVar16 = (undefined4 *)(iVar10 + 0x40);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar16 = puVar16 + 1;
  }
  D3DXMatrixMultiply(iVar10 + 0x80,iVar10,(undefined4 *)(iVar10 + 0x40));
  pfVar8 = (float *)*piVar23;
  local_3cc[0] = 1.0;
  local_3cc[1] = 0.0;
  local_3cc[2] = 0.0;
  local_3cc[3] = 0.0;
  local_3cc[4] = 0.0;
  local_3b8 = (undefined4 *)0x3f800000;
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  fStack_3ac = 0.0;
  fStack_3a8 = 0.0;
  fStack_3a4 = 1.0;
  fStack_3a0 = 0.0;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 0.0;
  fStack_390 = 1.0;
  pfVar15 = local_3cc;
  pfVar17 = pfVar8;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar17 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar17 = pfVar17 + 1;
  }
  D3DXMatrixMultiply(pfVar8 + 0x20,pfVar8,pfVar8 + 0x10);
  DAT_00982b38 = 1;
  if (DAT_00982c08 == 0) {
    uVar7 = *(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x18c);
    uVar21 = 0xf;
  }
  else {
    uVar7 = *(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x18c);
    uVar21 = 0;
  }
  (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x68))(*(int **)(DAT_0093de78 + 0x48),uVar7,uVar21)
  ;
  DAT_008fae6c = 1;
  FUN_007538d0(piVar23,0);
  if (DAT_00982cdc == 0) {
    _DAT_00982cd4 = DAT_00982cdc;
  }
  else {
    iVar10 = DAT_009877b4 + DAT_00982cdc * 8;
    FUN_006e2ac0(DAT_009877b4,iVar10,iVar10 - DAT_009877b4 >> 3);
    FUN_006e0200();
    DAT_008fae70 = 0xffffffff;
  }
  if (0 < DAT_00901830) {
    if (DAT_008faecc == 0) {
      uVar13 = DAT_00982b9c | 0x100;
    }
    else if (DAT_00901830 == 1) {
      uVar13 = 0x2000;
    }
    else {
      uVar13 = 0x200;
    }
    FUN_00723fa0(piVar23,uVar13);
    if (DAT_00982cdc == 0) {
      _DAT_00982cd4 = DAT_00982cdc;
    }
    else {
      iVar10 = DAT_009877b4 + DAT_00982cdc * 8;
      FUN_006e2ac0(DAT_009877b4,iVar10,iVar10 - DAT_009877b4 >> 3);
      FUN_006e0200();
      DAT_008fae70 = 0xffffffff;
    }
  }
  DAT_00903328 = 1;
  if (DAT_00903320 != 0) {
    if (DAT_00982c08 != 0) {
      (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x68))
                (*(int **)(DAT_0093de78 + 0x48),
                 *(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x18c),1);
    }
    puVar9 = (undefined4 *)param_1[0x11];
    piVar18 = (int *)0x0;
    if (((puVar9 != param_1 + 0x11) && (puVar9 != (undefined4 *)0x0)) &&
       (puVar9 != (undefined4 *)&DAT_00000004)) {
      if ((puVar9 == param_1 + 0x11) || (puVar9 == (undefined4 *)0x0)) {
        piVar18 = (int *)0x0;
      }
      else {
        piVar18 = puVar9 + -1;
      }
      iVar10 = (**(code **)(*piVar18 + 0x10))();
      if (iVar10 == 0) {
        piVar18 = (int *)FUN_00744d40(DAT_00901940);
      }
      else {
        piVar18 = (int *)FUN_00744d40(*(undefined4 *)(iVar10 + 0x94));
        DAT_00901940 = *(undefined4 *)(iVar10 + 0x94);
      }
      if (piVar18 != (int *)0x0) {
        (**(code **)(*piVar18 + 0xc))(piVar23,0);
        if (DAT_00982cdc == 0) {
          _DAT_00982cd4 = DAT_00982cdc;
        }
        else {
          iVar10 = DAT_009877b4 + DAT_00982cdc * 8;
          FUN_006e2ac0(DAT_009877b4,iVar10,iVar10 - DAT_009877b4 >> 3);
          FUN_006e0200();
          DAT_008fae70 = 0xffffffff;
        }
      }
    }
    puVar9 = DAT_009b37cc;
    puVar16 = DAT_009b37cc;
    if (DAT_009b37cc != DAT_009b37cc + DAT_009b37d4) {
      do {
        piVar3 = (int *)*puVar16;
        if (((piVar3 != (int *)0x0) && (piVar3 != piVar18)) && (1 < piVar3[10])) {
          (**(code **)(*piVar3 + 0xc))(piVar23,0);
          puVar9 = DAT_009b37cc;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar9 + DAT_009b37d4);
    }
    if (DAT_00982cdc == 0) {
      _DAT_00982cd4 = 0;
    }
    else {
      iVar10 = DAT_009877b4 + DAT_00982cdc * 8;
      FUN_006e2ac0(DAT_009877b4,iVar10,iVar10 - DAT_009877b4 >> 3);
      FUN_006e0200();
      DAT_008fae70 = 0xffffffff;
    }
  }
  DAT_00903328 = 1;
  FUN_006e0200();
  DAT_008fae70 = 0xffffffff;
  if (DAT_008faecc != 0) {
    FUN_006d7f70(piVar23);
  }
  fStack_3a4 = 0.5;
  fStack_3a0 = 0.0;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 0.0;
  fStack_390 = -0.5;
  uStack_38c = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_37c = 0x3f800000;
  uStack_378 = 0;
  uStack_374 = 0x3f002000;
  uStack_370 = 0x3f002000;
  uStack_36c = 0;
  uStack_368 = 0x3f800000;
  D3DXMatrixMultiply(auStack_254,auStack_354,local_3cc + 10);
  iVar10 = *piVar23;
  puVar9 = auStack_260;
  puVar16 = (undefined4 *)(iVar10 + 0x40);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar16 = puVar16 + 1;
  }
  D3DXMatrixMultiply(iVar10 + 0x80,iVar10,(undefined4 *)(iVar10 + 0x40));
  uStack_100 = 0xffffffff;
  if (&pfStack_44c != (float **)0x0) {
    FUN_005d0370(&pfStack_44c,(((int)ppfVar22 - (int)&pfStack_44c) / 0xc) * 0xc,
                 &PTR_LAB_004c5452_1_00890f10);
  }
  DAT_00982b38 = 0;
  (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x68))
            (*(int **)(DAT_0093de78 + 0x48),*(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x18c),7
            );
  DAT_00982d01 = 0;
  DAT_008fae6c = 2;
  ExceptionList = pvStack_114;
  return;
}

