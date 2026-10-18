/* speed.exe 005b9d10 FUN_005b9d10; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 * calls 005aeb00 FUN_005aeb00
 * calls 005aed00 FUN_005aed00
 * calls 005ad5b0 FUN_005ad5b0
 * calls 005aeba0 FUN_005aeba0
 * calls 005ad0f0 FUN_005ad0f0
 * calls 005aeb60 FUN_005aeb60
 * calls 0050d5f0 FUN_0050d5f0
 * calls 005aecb0 FUN_005aecb0
 * calls 005aebf0 FUN_005aebf0
 * calls 005b54d0 FUN_005b54d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b9d10(undefined1 *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  float local_18;
  undefined1 local_10 [16];
  
  iVar11 = 0;
  local_18 = 0.0;
  pfVar1 = (float *)(param_1 + 0x18);
  if (param_1[0x2c] == '\0') {
    iVar7 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar7 = FUN_005ad440();
  }
  if (iVar7 == 0) goto LAB_005b9f1b;
  do {
    iVar7 = *(int *)(iVar7 + 4);
    iVar11 = iVar11 + 1;
  } while (iVar7 != 0);
  if (iVar11 == 0) goto LAB_005b9f1b;
  bVar6 = param_1[3] & 0x7f;
  if ((param_1[3] & 0x7f) == 0) {
    iVar11 = FUN_005aed00(param_2);
    if (iVar11 == 0) goto LAB_005b9f1b;
    iVar7 = *(int *)(iVar11 + 8);
    if (iVar7 == 0) {
      local_18 = 1.0;
    }
    else if (param_2 < *(int *)(iVar11 + 0xc)) {
      local_18 = (float)(*(int *)(iVar11 + 0xc) - *(int *)(iVar7 + 0xc));
      if (local_18 <= _DAT_008910cc) goto LAB_005b9f0d;
      local_18 = (float)(param_2 - *(int *)(iVar7 + 0xc)) / local_18;
    }
    else {
      local_18 = 1.0;
    }
  }
  else if (bVar6 == 1) {
    iVar7 = FUN_005aed00(param_2);
    if (iVar7 == 0) goto LAB_005b9f1b;
    iVar2 = *(int *)(iVar7 + 0xc);
    if (iVar2 < param_2) {
      iVar11 = FUN_005ad5b0();
      local_18 = (float)((((*(int *)(param_1 + 4) << 8) >> 8) + *(int *)(iVar11 + 0xc)) -
                        *(int *)(iVar7 + 0xc));
      if (local_18 <= _DAT_008910cc) goto LAB_005b9f0d;
      local_18 = (float)(param_2 - *(int *)(iVar7 + 0xc)) / local_18;
    }
    else {
      iVar11 = iVar7;
      if (iVar2 == param_2) {
        local_18 = 0.0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
        if (iVar7 == 0) {
          iVar8 = (*(int *)(param_1 + 4) << 8) >> 8;
          iVar7 = FUN_005aecb0(iVar8);
          iVar8 = iVar8 - *(int *)(iVar7 + 0xc);
          local_18 = (float)(iVar8 + iVar2);
          if (local_18 <= _DAT_008910cc) {
LAB_005b9f0d:
            local_18 = 0.0;
          }
          else {
            local_18 = (float)(iVar8 + param_2) / local_18;
          }
        }
        else {
          local_18 = (float)(iVar2 - *(int *)(iVar7 + 0xc));
          if (local_18 <= _DAT_008910cc) goto LAB_005b9f0d;
          local_18 = (float)(param_2 - *(int *)(iVar7 + 0xc)) / local_18;
        }
      }
    }
  }
  else {
    if (bVar6 != 2) goto LAB_005b9f1b;
    iVar11 = (*(int *)(param_1 + 4) << 8) >> 8;
    if (iVar11 < param_2) {
      param_2 = iVar11 * 2 - param_2;
    }
    iVar11 = FUN_005aed00(param_2);
    iVar7 = 0;
  }
  if (iVar11 != 0) {
    iVar2 = iVar7;
    if ((local_18 != _DAT_00890968) && (iVar2 = iVar11, local_18 != _DAT_0089096c)) {
      switch(*param_1) {
      case 1:
        FUN_005aeb00(*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar11 + 0x10),local_18,pfVar1,
                     param_3);
        return;
      case 2:
        *param_3 = (*(float *)(iVar11 + 0x10) - *(float *)(iVar7 + 0x10)) * local_18 +
                   *(float *)(iVar7 + 0x10) + *pfVar1;
        return;
      case 3:
        FUN_005aeb60(iVar7 + 0x10,iVar11 + 0x10,local_18,pfVar1,param_3);
        return;
      case 4:
        FUN_005aeba0(iVar7 + 0x10,iVar11 + 0x10,local_18,pfVar1,param_3);
        return;
      case 5:
        FUN_005b54d0(iVar7 + 0x10,iVar11 + 0x10,local_18,pfVar1,param_3);
        return;
      case 6:
        FUN_005aebf0(iVar7 + 0x10,iVar11 + 0x10,local_18,pfVar1,param_3);
        return;
      default:
        return;
      }
    }
    pfVar10 = (float *)(iVar2 + 0x10);
    switch(*param_1) {
    case 1:
      *param_3 = (float)((int)*pfVar1 + (int)*pfVar10);
      return;
    case 2:
      *param_3 = *pfVar1 + *pfVar10;
      return;
    case 3:
      *param_3 = *pfVar1 + *pfVar10;
      param_3[1] = *(float *)(iVar2 + 0x14) + *(float *)(param_1 + 0x1c);
      return;
    case 4:
      *param_3 = *pfVar1 + *pfVar10;
      param_3[1] = *(float *)(iVar2 + 0x14) + *(float *)(param_1 + 0x1c);
      param_3[2] = *(float *)(iVar2 + 0x18) + *(float *)(param_1 + 0x20);
      return;
    case 5:
      uVar9 = FUN_005ad0f0(local_10,pfVar1);
      FUN_0050d5f0(uVar9);
      return;
    case 6:
      param_3[2] = (float)(*(int *)(iVar2 + 0x18) + *(int *)(param_1 + 0x20));
      param_3[1] = (float)(*(int *)(iVar2 + 0x14) + *(int *)(param_1 + 0x1c));
      *param_3 = (float)((int)*pfVar1 + (int)*pfVar10);
      param_3[3] = (float)(*(int *)(iVar2 + 0x1c) + *(int *)(param_1 + 0x24));
      return;
    default:
      return;
    }
  }
LAB_005b9f1b:
  switch(*param_1) {
  case 1:
  case 2:
    *param_3 = *pfVar1;
    return;
  case 3:
    fVar3 = *(float *)(param_1 + 0x1c);
    *param_3 = *pfVar1;
    param_3[1] = fVar3;
    return;
  case 4:
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar4 = *(float *)(param_1 + 0x20);
    *param_3 = *pfVar1;
    param_3[1] = fVar3;
    param_3[2] = fVar4;
    return;
  case 5:
  case 6:
    fVar3 = *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0x20);
    *param_3 = *pfVar1;
    param_3[3] = fVar3;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    return;
  default:
    return;
  }
}

