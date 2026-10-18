/* speed.exe 006cf400 FUN_006cf400; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045db30 FUN_0045db30
 * calls 00444fe0 FUN_00444fe0
 * calls 0045dbf0 FUN_0045dbf0
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006be9f0 FUN_006be9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006cf400(undefined4 *param_1,int param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_c;
  float local_8;
  
  _DAT_008f9210 = -3.3333334e-05;
  iVar4 = *(int *)(param_2 + 0x40);
  if (iVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *param_1 = 0x3f800000;
    param_1[5] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[0xf] = 0x3f800000;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x10] = 0x3f800000;
    param_1[0x15] = 0x3f800000;
    param_1[0x1a] = 0x3f800000;
    param_1[0x1f] = 0x3f800000;
    return;
  }
  FUN_00444fe0(param_1,iVar4);
  local_8 = *(float *)(iVar4 + 0xbc);
  if (*(int *)(param_2 + 4) != 1) {
    local_c = *(float *)(iVar4 + 0xc0);
  }
  if ((float)_DAT_008942e0 != param_3) {
    local_8 = param_3;
  }
  if ((float)_DAT_008942e0 != param_4) {
    local_c = param_4;
  }
  uVar6 = FUN_007c4b80();
  fVar11 = (float10)FUN_0045db30(uVar6);
  fVar12 = (float10)FUN_0045dbf0(uVar6);
  fVar15 = (float10)_DAT_0089096c;
  uVar6 = FUN_007c4b80();
  fVar13 = (float10)FUN_0045db30(uVar6);
  fVar14 = (float10)FUN_0045dbf0(uVar6);
  pfVar1 = (float *)(param_1 + 0x10);
  *pfVar1 = 1.0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  *pfVar1 = (float)(fVar15 / ((float10)(float)fVar11 / fVar12));
  param_1[0x1b] = 0x3f800000;
  param_1[0x1f] = 0;
  fVar5 = local_c / (local_c - local_8);
  param_1[0x15] = (float)-((float10)_DAT_0089096c / ((float10)(float)fVar13 / fVar14));
  param_1[0x1a] = fVar5;
  param_1[0x1e] = -(fVar5 * local_8);
  fVar15 = (float10)FUN_006be9f0(*(undefined2 *)(iVar4 + 0xc4));
  *(float *)(param_2 + 0xc) = (float)fVar15;
  pfVar2 = (float *)(param_1 + 0x20);
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  D3DXMatrixMultiply(pfVar2,param_1,pfVar1);
  param_3._0_1_ = SUB41((float)fVar13,0);
  if (param_3._0_1_ != '\0') {
    bVar9 = true;
    bVar10 = false;
    uVar7 = 0;
    do {
      if (bVar9 || bVar10) {
        switch(uVar7) {
        default:
          param_1[0x50] = (float)param_1[0x23] + *pfVar2;
          param_1[0x51] = (float)param_1[0x27] + (float)param_1[0x24];
          param_1[0x52] = (float)param_1[0x2b] + (float)param_1[0x28];
          param_1[0x53] = (float)param_1[0x2f] + (float)param_1[0x2c];
          break;
        case 1:
          param_1[0x54] = (float)param_1[0x23] - *pfVar2;
          param_1[0x55] = (float)param_1[0x27] - (float)param_1[0x24];
          param_1[0x56] = (float)param_1[0x2b] - (float)param_1[0x28];
          param_1[0x57] = (float)param_1[0x2f] - (float)param_1[0x2c];
          break;
        case 2:
          param_1[0x58] = (float)param_1[0x23] + (float)param_1[0x21];
          param_1[0x59] = (float)param_1[0x27] + (float)param_1[0x25];
          param_1[0x5a] = (float)param_1[0x2b] + (float)param_1[0x29];
          param_1[0x5b] = (float)param_1[0x2f] + (float)param_1[0x2d];
          break;
        case 3:
          param_1[0x5c] = (float)param_1[0x23] - (float)param_1[0x21];
          param_1[0x5d] = (float)param_1[0x27] - (float)param_1[0x25];
          param_1[0x5e] = (float)param_1[0x2b] - (float)param_1[0x29];
          param_1[0x5f] = (float)param_1[0x2f] - (float)param_1[0x2d];
          break;
        case 4:
          param_1[0x60] = param_1[0x22];
          param_1[0x61] = param_1[0x26];
          param_1[0x62] = param_1[0x2a];
          param_1[99] = param_1[0x2e];
          break;
        case 5:
          param_1[100] = (float)param_1[0x23] - (float)param_1[0x22];
          param_1[0x65] = (float)param_1[0x27] - (float)param_1[0x26];
          param_1[0x66] = (float)param_1[0x2b] - (float)param_1[0x2a];
          param_1[0x67] = (float)param_1[0x2f] - (float)param_1[0x2e];
        }
      }
      pfVar3 = (float *)(param_1 + (uVar7 + 0x14) * 4);
      fVar5 = _DAT_0089096c /
              SQRT((float)param_1[(uVar7 + 0x14) * 4 + 2] * (float)param_1[(uVar7 + 0x14) * 4 + 2] +
                   pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3);
      *pfVar3 = fVar5 * *pfVar3;
      uVar8 = uVar7 + 1;
      bVar9 = uVar8 < 5;
      bVar10 = uVar8 == 5;
      param_1[uVar7 * 4 + 0x51] = fVar5 * (float)param_1[uVar7 * 4 + 0x51];
      param_1[uVar7 * 4 + 0x52] = fVar5 * (float)param_1[uVar7 * 4 + 0x52];
      param_1[uVar7 * 4 + 0x53] = fVar5 * (float)param_1[uVar7 * 4 + 0x53];
      uVar7 = uVar8;
    } while ((int)uVar8 < 6);
    FUN_00444fe0(param_1 + 0x30,pfVar1);
    param_1[0x3a] = _DAT_008f9210 + (float)param_1[0x3a];
    D3DXMatrixMultiply(param_1 + 0x40,param_1,param_1 + 0x30);
  }
  return;
}

