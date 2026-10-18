/* speed.exe 004700d0 FUN_004700d0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006bd940 FUN_006bd940
 * calls 00444fe0 FUN_00444fe0
 * calls 0045ed30 FUN_0045ed30
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004700d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 extraout_ST0;
  undefined4 local_90 [12];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 local_24;
  
  if (DAT_00911020 == 0) {
    puVar5 = param_1;
    puVar6 = param_1 + 0x38;
    for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    param_1[0xa9] = param_3;
    if ((DAT_00911190 == 0) || (DAT_00926120 != 0)) {
      if (DAT_00911234 != 0) {
        DAT_00911234 = 0;
      }
    }
    else {
      if (DAT_00911234 == 0) {
        DAT_00911234 = 1;
      }
      puVar5 = &DAT_009111a0;
      puVar6 = local_90;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_60 = local_60 * _DAT_00890dc4;
      local_5c = local_5c * _DAT_00890dc4;
      local_58 = local_58 * _DAT_00890dc4;
      param_2 = local_90;
      local_54 = 0x3f800000;
    }
    FUN_00444fe0(param_1,param_2);
    FUN_0045ed30(local_50,param_1);
    pfVar1 = (float *)(param_1 + 0x10);
    local_44 = 0;
    local_34 = 0;
    local_24 = 0;
    FUN_006bd940(pfVar1,local_50,param_1 + 0xc);
    *pfVar1 = -*pfVar1;
    param_1[0x11] = -(float)param_1[0x11];
    param_1[0x12] = -(float)param_1[0x12];
    FUN_0045f490(param_1 + 0x14,local_30);
    fVar2 = (float)param_1[0x2c];
    param_1[0x18] = fVar2 * (float)param_1[0x14];
    param_1[0x19] = (float)param_1[0x15] * fVar2;
    param_1[0x1a] = (float)param_1[0x16] * fVar2;
    param_1[0x18] = *pfVar1 + (float)param_1[0x18];
    param_1[0x19] = (float)param_1[0x11] + (float)param_1[0x19];
    param_1[0x1a] = (float)param_1[0x12] + (float)param_1[0x1a];
    if (*(char *)(param_1 + 0xa8) != '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
      puVar5 = param_1;
      puVar6 = param_1 + 0x38;
      for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1[0xa9] = 0x3f800000;
    }
    if (_DAT_00890968 < (float)param_1[0xa9]) {
      fVar2 = _DAT_0089096c / (float)param_1[0xa9];
      param_1[0x82] = (float)param_1[0x12] - (float)param_1[0x4a];
      param_1[0x80] = (float)param_1[0x10] - (float)param_1[0x48];
      param_1[0x81] = (float)param_1[0x11] - (float)param_1[0x49];
      param_1[0x80] = fVar2 * (float)param_1[0x80];
      param_1[0x81] = fVar2 * (float)param_1[0x81];
      param_1[0x82] = fVar2 * (float)param_1[0x82];
      param_1[0x86] = (float)param_1[0x16] - (float)param_1[0x4e];
      param_1[0x84] = (float)param_1[0x14] - (float)param_1[0x4c];
      param_1[0x85] = (float)param_1[0x15] - (float)param_1[0x4d];
      param_1[0x84] = fVar2 * (float)param_1[0x84];
      param_1[0x85] = fVar2 * (float)param_1[0x85];
      param_1[0x86] = fVar2 * (float)param_1[0x86];
      param_1[0x8a] = (float)param_1[0x1a] - (float)param_1[0x52];
      param_1[0x88] = (float)param_1[0x18] - (float)param_1[0x50];
      param_1[0x89] = (float)param_1[0x19] - (float)param_1[0x51];
      param_1[0x88] = fVar2 * (float)param_1[0x88];
      param_1[0x89] = fVar2 * (float)param_1[0x89];
      param_1[0x8a] = fVar2 * (float)param_1[0x8a];
      param_1[0x9c] = ((float)param_1[0x2c] - (float)param_1[100]) * fVar2;
      param_1[0x9d] = ((float)param_1[0x2d] - (float)param_1[0x65]) * fVar2;
      param_1[0x9e] = ((float)param_1[0x2e] - (float)param_1[0x66]) * fVar2;
      param_1[0x9f] = ((float)param_1[0x2f] - (float)param_1[0x67]) * fVar2;
      param_1[0xa0] = ((float)param_1[0x30] - (float)param_1[0x68]) * fVar2;
      uVar3 = FUN_007c4b80();
      *(undefined2 *)(param_1 + 0xa1) = uVar3;
      param_1[0xa2] =
           (float)(((float10)(float)param_1[0x32] - (float10)(float)param_1[0x6a]) * extraout_ST0);
      param_1[0xa3] =
           (float)(((float10)(float)param_1[0x33] - (float10)(float)param_1[0x6b]) * extraout_ST0);
      param_1[0x8e] = (float)param_1[0x1e] - (float)param_1[0x56];
      param_1[0x8f] = (float)param_1[0x1f] - (float)param_1[0x57];
      param_1[0x8c] = (float)param_1[0x1c] - (float)param_1[0x54];
      param_1[0x8d] = (float)param_1[0x1d] - (float)param_1[0x55];
      param_1[0x8c] = (float)(extraout_ST0 * (float10)(float)param_1[0x8c]);
      param_1[0x8d] = (float)(extraout_ST0 * (float10)(float)param_1[0x8d]);
      param_1[0x8e] = (float)(extraout_ST0 * (float10)(float)param_1[0x8e]);
      param_1[0x8f] = (float)(extraout_ST0 * (float10)(float)param_1[0x8f]);
      param_1[0x96] = (float)param_1[0x26] - (float)param_1[0x5e];
      param_1[0x97] = (float)param_1[0x27] - (float)param_1[0x5f];
      param_1[0x94] = (float)param_1[0x24] - (float)param_1[0x5c];
      param_1[0x95] = (float)param_1[0x25] - (float)param_1[0x5d];
      param_1[0x94] = (float)(extraout_ST0 * (float10)(float)param_1[0x94]);
      param_1[0x95] = (float)(extraout_ST0 * (float10)(float)param_1[0x95]);
      param_1[0x96] = (float)(extraout_ST0 * (float10)(float)param_1[0x96]);
      param_1[0x97] = (float)(extraout_ST0 * (float10)(float)param_1[0x97]);
      param_1[0x92] = (float)param_1[0x22] - (float)param_1[0x5a];
      param_1[0x93] = (float)param_1[0x23] - (float)param_1[0x5b];
      param_1[0x90] = (float)param_1[0x20] - (float)param_1[0x58];
      param_1[0x91] = (float)param_1[0x21] - (float)param_1[0x59];
      param_1[0x90] = (float)(extraout_ST0 * (float10)(float)param_1[0x90]);
      param_1[0x91] = (float)(extraout_ST0 * (float10)(float)param_1[0x91]);
      param_1[0x92] = (float)(extraout_ST0 * (float10)(float)param_1[0x92]);
      param_1[0x93] = (float)(extraout_ST0 * (float10)(float)param_1[0x93]);
      param_1[0x9a] = (float)param_1[0x2a] - (float)param_1[0x62];
      param_1[0x9b] = (float)param_1[0x2b] - (float)param_1[99];
      param_1[0x98] = (float)param_1[0x28] - (float)param_1[0x60];
      param_1[0x99] = (float)param_1[0x29] - (float)param_1[0x61];
      param_1[0x98] = (float)(extraout_ST0 * (float10)(float)param_1[0x98]);
      param_1[0x99] = (float)(extraout_ST0 * (float10)(float)param_1[0x99]);
      param_1[0x9a] = (float)(extraout_ST0 * (float10)(float)param_1[0x9a]);
      param_1[0x9b] = (float)(extraout_ST0 * (float10)(float)param_1[0x9b]);
    }
  }
  return;
}

