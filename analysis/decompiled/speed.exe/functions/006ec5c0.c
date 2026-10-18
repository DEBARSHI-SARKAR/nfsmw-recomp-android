/* speed.exe 006ec5c0 FUN_006ec5c0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 004884a0 FUN_004884a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_006ec5c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float local_34 [10];
  float local_c;
  float local_8;
  
  fVar1 = param_1[0x28];
  local_34[9] = *param_1 - *param_2;
  pfVar9 = param_3 + 0x1c;
  pfVar8 = param_2 + 0x28;
  local_c = param_1[1] - param_2[1];
  pfVar6 = param_2 + 6;
  local_8 = param_1[2] - param_2[2];
  *pfVar9 = DAT_008a2fd0;
  param_3[0x1d] = DAT_008a2fd4;
  param_3[0x1e] = DAT_008a2fd8;
  param_3[0x1f] = DAT_008a2fdc;
  iVar4 = 0;
  do {
    fVar2 = *pfVar8;
    fVar3 = local_8 * *pfVar6 + local_34[9] * pfVar6[-2] + local_c * pfVar6[-1];
    *(float *)((int)local_34 + iVar4 + 0x18) = fVar3;
    if (fVar3 < _DAT_00890968) {
      fVar3 = -fVar3;
    }
    *(float *)((int)local_34 + iVar4 + 0xc) = fVar3;
    if (fVar2 + fVar1 <= fVar3) {
      return 0;
    }
    iVar5 = iVar4 + 4;
    pfVar6 = pfVar6 + 4;
    pfVar8 = pfVar8 + 1;
    *(float *)((int)local_34 + iVar4) = fVar3 - (fVar2 + fVar1);
    iVar4 = iVar5;
  } while (iVar5 < 0xc);
  if (((param_2[0x28] <= local_34[3]) || (param_2[0x29] <= local_34[4])) ||
     (param_2[0x2a] <= local_34[5])) {
    if (param_2[0x28] <= local_34[3]) {
      fVar2 = _DAT_0089096c;
      if (_DAT_00890968 < local_34[6]) {
        fVar2 = _DAT_00890da8;
      }
      fVar2 = (local_34[0] + fVar1) * fVar2;
      *pfVar9 = fVar2 * param_2[4] + *pfVar9;
      param_3[0x1d] = fVar2 * param_2[5] + param_3[0x1d];
      param_3[0x1e] = fVar2 * param_2[6] + param_3[0x1e];
    }
    if (param_2[0x29] <= local_34[4]) {
      fVar2 = _DAT_0089096c;
      if (_DAT_00890968 < local_34[7]) {
        fVar2 = _DAT_00890da8;
      }
      fVar2 = (local_34[1] + fVar1) * fVar2;
      *pfVar9 = fVar2 * param_2[8] + *pfVar9;
      param_3[0x1d] = fVar2 * param_2[9] + param_3[0x1d];
      param_3[0x1e] = fVar2 * param_2[10] + param_3[0x1e];
    }
    if (param_2[0x2a] <= local_34[5]) {
      fVar2 = _DAT_0089096c;
      if (_DAT_00890968 < local_34[8]) {
        fVar2 = _DAT_00890da8;
      }
      fVar2 = (local_34[2] + fVar1) * fVar2;
      *pfVar9 = fVar2 * param_2[0xc] + *pfVar9;
      param_3[0x1d] = fVar2 * param_2[0xd] + param_3[0x1d];
      param_3[0x1e] = fVar2 * param_2[0xe] + param_3[0x1e];
    }
    fVar10 = (float10)FUN_005c5e80(param_3[0x1e] * param_3[0x1e] +
                                   param_3[0x1d] * param_3[0x1d] + *pfVar9 * *pfVar9);
    if (((float10)fVar1 < fVar10) || ((float)fVar10 == _DAT_00890968)) {
      return 0;
    }
    param_3[0x24] = (float)fVar10 - fVar1;
    FUN_004884a0(pfVar9,param_3 + 0x20);
    *pfVar9 = *param_1 + *pfVar9;
    param_3[0x1d] = param_3[0x1d] + param_1[1];
    fVar2 = param_3[0x1e];
  }
  else {
    uVar7 = (uint)(local_34[0] < local_34[1]);
    if (local_34[uVar7] < local_34[2]) {
      uVar7 = 2;
    }
    param_2 = param_2 + (uVar7 + 1) * 4;
    fVar2 = _DAT_0089096c;
    if (_DAT_00890968 < local_34[uVar7 + 6]) {
      fVar2 = _DAT_00890da8;
    }
    param_3[0x24] = local_34[uVar7];
    param_3[0x20] = fVar2 * *param_2;
    param_3[0x21] = fVar2 * param_2[1];
    param_3[0x22] = fVar2 * param_2[2];
    fVar2 = (fVar1 + local_34[uVar7]) * fVar2;
    *pfVar9 = fVar2 * *param_2 + *param_1;
    param_3[0x1d] = fVar2 * param_2[1] + param_1[1];
    fVar2 = fVar2 * param_2[2];
  }
  param_3[0x1e] = fVar2 + param_1[2];
  if (param_3 != param_1) {
    param_3[0x20] = param_3[0x20] * _DAT_00890da8;
    param_3[0x21] = param_3[0x21] * _DAT_00890da8;
    param_3[0x22] = param_3[0x22] * _DAT_00890da8;
  }
  return 1;
}

