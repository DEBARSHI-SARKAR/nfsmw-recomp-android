/* speed.exe 0077ae80 FUN_0077ae80; analysis pseudocode, not buildable source.
 * calls 007c9880 FUN_007c9880
 * calls 007c4b80 FUN_007c4b80
 * calls 00424c90 FUN_00424c90
 * calls 0041b250 FUN_0041b250
 * calls 007c99d0 FUN_007c99d0
 * calls 0041bbb0 FUN_0041bbb0
 * calls 005c5e80 FUN_005c5e80
 * calls 0077ae20 FUN_0077ae20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0077ae80(float *param_1,float *param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  int iStack_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_10;
  float local_c;
  
  local_c = param_2[2];
  local_10 = *param_2;
  fVar3 = param_2[4];
  local_40 = fVar3 - local_10;
  fVar4 = param_2[6];
  local_3c = fVar4 - local_c;
  FUN_007c4b80();
  local_28 = FUN_007c4b80();
  FUN_007c4b80();
  iVar10 = FUN_007c4b80();
  if ((((local_28 < 0) || ((int)param_1[7] <= local_28)) || (iVar10 < 0)) ||
     (bVar5 = false, (int)param_1[6] <= iVar10)) {
    bVar5 = true;
  }
  FUN_007c4b80();
  local_34 = FUN_007c4b80();
  FUN_007c4b80();
  local_30 = FUN_007c4b80();
  if (((local_34 < 0) || ((int)param_1[7] <= local_34)) ||
     ((local_30 < 0 || ((int)param_1[6] <= local_30)))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (ABS(local_40) < _DAT_008b5b18) {
    local_40 = 0.05;
  }
  if (ABS(local_3c) < _DAT_008b5b18) {
    local_3c = 0.05;
  }
  if (bVar5) {
    if (bVar6) {
      return;
    }
    fVar8 = -local_40;
    fVar2 = -local_3c;
    if (fVar8 <= _DAT_00890968) {
      local_10 = *param_1 + _DAT_00890cd4;
    }
    else {
      fVar7 = (float)(int)param_1[7];
      if ((int)param_1[7] < 0) {
        fVar7 = fVar7 + _DAT_00891214;
      }
      local_10 = (fVar7 * param_1[4] + *param_1) - _DAT_00890cd4;
    }
    if (fVar2 <= _DAT_00890968) {
      local_c = param_1[2] + _DAT_00890cd4;
    }
    else {
      fVar7 = (float)(int)param_1[6];
      if ((int)param_1[6] < 0) {
        fVar7 = fVar7 + _DAT_00891214;
      }
      local_c = (fVar7 * param_1[4] + param_1[2]) - _DAT_00890cd4;
    }
    fVar7 = (local_10 - fVar3) / fVar8;
    fVar9 = (local_c - fVar4) / fVar2;
    if (fVar9 <= fVar7) {
      local_10 = fVar9 * fVar8 + fVar3;
    }
    else {
      local_c = fVar7 * fVar2 + fVar4;
    }
    FUN_007c4b80();
    local_28 = FUN_007c4b80();
    FUN_007c4b80();
    iVar10 = FUN_007c4b80();
  }
  else if (bVar6) {
    FUN_007c4b80();
    local_34 = FUN_007c4b80();
    FUN_007c4b80();
    local_30 = FUN_007c4b80();
  }
  fVar3 = param_1[7];
  if ((uint)param_3[2] <= (uint)param_3[3]) {
    (**(code **)(*param_3 + 0xc))();
    FUN_0041b250();
  }
  piVar1 = (int *)(param_3[1] + param_3[3] * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)fVar3 * iVar10 + local_28;
  }
  param_3[3] = param_3[3] + 1;
  local_38 = 1;
  fVar13 = (float10)FUN_005c5e80();
  if (fVar13 < (float10)param_1[4] == (fVar13 == (float10)param_1[4])) {
LAB_0077b266:
    fVar3 = local_40 * (_DAT_0089096c / (float)fVar13);
    fVar4 = (_DAT_0089096c / (float)fVar13) * local_3c;
    fVar2 = fVar3;
    if (fVar3 < _DAT_00890968) {
      fVar2 = -fVar3;
    }
    if (fVar2 < _DAT_00891218) {
      fStack_1c = 10000.0;
    }
    else {
      fStack_1c = _DAT_0089096c / fVar3;
    }
    fVar2 = fVar4;
    if (fVar4 < _DAT_00890968) {
      fVar2 = -fVar4;
    }
    if (fVar2 < _DAT_00891218) {
      local_18 = 10000.0;
    }
    else {
      local_18 = _DAT_0089096c / fVar4;
    }
    bVar5 = fVar3 < _DAT_00890968;
    bVar6 = fVar4 < _DAT_00890968;
    if (bVar5) {
      fVar13 = (float10)FUN_007c99d0((double)(local_10 * param_1[5]));
    }
    else {
      fVar13 = (float10)FUN_007c9880();
    }
    fVar2 = param_1[4];
    if (bVar6) {
      fVar14 = (float10)FUN_007c99d0((double)(local_c * param_1[5]));
    }
    else {
      fVar14 = (float10)FUN_007c9880();
    }
    local_3c = (float)(fVar13 * (float10)fVar2);
    fVar2 = (float)(fVar14 * (float10)param_1[4]);
    iStack_44 = local_28;
    while (local_24 = fVar2, local_28 != local_34) {
      if (iVar10 == local_30) {
        if (local_28 != local_34) {
          if (bVar5) {
            local_28 = local_28 + -1;
            if (local_28 < local_34) {
              return;
            }
            while( true ) {
              fVar3 = param_1[7];
              if ((uint)param_3[2] <= (uint)param_3[3]) {
                (**(code **)(*param_3 + 0xc))();
                FUN_0041b250();
              }
              piVar1 = (int *)(param_3[1] + param_3[3] * 4);
              if (piVar1 != (int *)0x0) {
                *piVar1 = (int)fVar3 * iVar10 + local_28;
              }
              iVar12 = DAT_00905d48;
              param_3[3] = param_3[3] + 1;
              local_38 = local_38 + 1;
              if (iVar12 < local_38) break;
              local_28 = local_28 + -1;
              if (local_28 < local_34) {
                return;
              }
            }
          }
          else {
            local_28 = local_28 + 1;
            if (local_34 < local_28) {
              return;
            }
            while( true ) {
              fVar3 = param_1[7];
              if ((uint)param_3[2] <= (uint)param_3[3]) {
                (**(code **)(*param_3 + 0xc))();
                FUN_0041b250();
              }
              piVar1 = (int *)(param_3[1] + param_3[3] * 4);
              if (piVar1 != (int *)0x0) {
                *piVar1 = (int)fVar3 * iVar10 + local_28;
              }
              iVar12 = DAT_00905d48;
              param_3[3] = param_3[3] + 1;
              local_38 = local_38 + 1;
              if (iVar12 < local_38) break;
              local_28 = local_28 + 1;
              if (local_34 < local_28) {
                return;
              }
            }
          }
          goto LAB_0077b699;
        }
        break;
      }
      fVar2 = (local_3c - local_10) * fStack_1c;
      fVar8 = (local_24 - local_c) * local_18;
      if (fVar8 <= fVar2) {
        local_20 = fVar8 * fVar3 + local_10;
        if (bVar6) {
          local_40 = local_24 - param_1[4];
          iVar10 = iVar10 + -1;
        }
        else {
          local_40 = local_24 + param_1[4];
          iVar10 = iVar10 + 1;
        }
      }
      else {
        local_c = fVar2 * fVar4 + local_c;
        local_40 = local_24;
        local_24 = local_c;
        local_20 = local_3c;
        if (bVar5) {
          local_28 = local_28 + -1;
          iStack_44 = local_28;
          local_3c = local_3c - param_1[4];
        }
        else {
          local_28 = local_28 + 1;
          iStack_44 = local_28;
          local_3c = local_3c + param_1[4];
        }
      }
      iVar12 = (int)param_1[7] * iVar10 + local_28;
      if ((uint)param_3[2] <= (uint)param_3[3]) {
        (**(code **)(*param_3 + 0xc))();
        FUN_0041b250();
        local_28 = iStack_44;
      }
      piVar1 = (int *)(param_3[1] + param_3[3] * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = iVar12;
      }
      iVar12 = DAT_00905d48;
      param_3[3] = param_3[3] + 1;
      local_38 = local_38 + 1;
      fVar2 = local_40;
      local_c = local_24;
      local_10 = local_20;
      if (iVar12 < local_38) goto LAB_0077b699;
    }
    if (iVar10 == local_30) {
      return;
    }
    if (bVar6) {
      iVar10 = iVar10 + -1;
      if (iVar10 < local_30) {
        return;
      }
      while( true ) {
        FUN_0041bbb0();
        local_38 = local_38 + 1;
        if (DAT_00905d48 < local_38) break;
        iVar10 = iVar10 + -1;
        if (iVar10 < local_30) {
          return;
        }
      }
    }
    else {
      iVar10 = iVar10 + 1;
      if (local_30 < iVar10) {
        return;
      }
      while( true ) {
        FUN_0041bbb0();
        local_38 = local_38 + 1;
        if (DAT_00905d48 < local_38) break;
        iVar10 = iVar10 + 1;
        if (local_30 < iVar10) {
          return;
        }
      }
    }
LAB_0077b699:
    FUN_00424c90();
    FUN_0077ae20(param_2,0x3f800000,param_3);
    return;
  }
  if (local_28 == local_34) {
    if (iVar10 == local_30) {
      return;
    }
  }
  else if (iVar10 != local_30) goto LAB_0077b266;
  fVar3 = param_1[7];
  if ((uint)param_3[2] <= (uint)param_3[3]) {
    uVar11 = (**(code **)(*param_3 + 0xc))();
    FUN_0041b250(uVar11);
  }
  piVar1 = (int *)(param_3[1] + param_3[3] * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)fVar3 * local_30 + local_34;
  }
  param_3[3] = param_3[3] + 1;
  return;
}

