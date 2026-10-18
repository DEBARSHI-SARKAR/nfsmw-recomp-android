/* speed.exe 006c1160 FUN_006c1160; analysis pseudocode, not buildable source.
 * calls 004fe220 FUN_004fe220
 */

/* WARNING: Removing unreachable block (ram,0x006c1299) */
/* WARNING: Removing unreachable block (ram,0x006c12cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c1160(int param_1,float *param_2,float *param_3,byte param_4,int param_5,int param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  pfVar7 = DAT_0093cb1c;
  if ((DAT_0093cb1c != (float *)0x0) && (DAT_0093cb1c < DAT_0093cb20)) {
    if ((param_5 == 0) || (param_6 == 0)) {
      local_50 = *param_2 + *(float *)(param_1 + 0x50);
      local_60 = local_50 - *param_3;
      local_4c = *(float *)(param_1 + 0x54) + param_2[1];
      local_5c = local_4c - param_3[1];
      local_48 = param_2[2] + *(float *)(param_1 + 0x58);
      local_58 = local_48 - param_3[2];
      local_50 = local_50 + *param_3;
      local_4c = local_4c + param_3[1];
      local_48 = local_48 + param_3[2];
      local_30 = *(float *)(param_1 + 0x50) - *param_2;
      local_40 = local_30 + *param_3;
      local_2c = *(float *)(param_1 + 0x54) - param_2[1];
      local_3c = local_2c + param_3[1];
      local_28 = *(float *)(param_1 + 0x58) - param_2[2];
      local_38 = local_28 + param_3[2];
      local_30 = local_30 - *param_3;
      local_2c = local_2c - param_3[1];
      local_28 = local_28 - param_3[2];
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x50);
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(undefined4 *)(param_1 + 0x58);
      local_14 = 0x3f800000;
      FUN_004fe220(&local_20,param_5,param_6,&local_60,&local_50,&local_30,&local_40);
    }
    fVar3 = (float)*(ushort *)(param_1 + 0x62) * _DAT_00899ddc;
    uVar1 = *(uint *)(param_1 + 100);
    fVar4 = (float)(*(uint *)(param_1 + 0x60) & 0xffff) * _DAT_00899ddc;
    fVar5 = (float)*(ushort *)(param_1 + 0x66) * _DAT_00899ddc;
    *pfVar7 = local_60;
    pfVar7[1] = local_5c;
    pfVar7[2] = local_58;
    pfVar7[3] = *(float *)(param_1 + 8);
    fVar6 = (float)(uVar1 & 0xffff) * _DAT_00899ddc;
    pfVar7[4] = fVar5;
    DAT_0093cb1c = pfVar7 + 0x18;
    pfVar7[5] = fVar4;
    pfVar7[6] = local_50;
    pfVar7[7] = local_4c;
    pfVar7[8] = local_48;
    fVar2 = *(float *)(param_1 + 8);
    pfVar7[10] = fVar5;
    pfVar7[9] = fVar2;
    pfVar7[0xb] = fVar6;
    pfVar7[0xc] = local_40;
    pfVar7[0xd] = local_3c;
    pfVar7[0xe] = local_38;
    fVar2 = *(float *)(param_1 + 8);
    pfVar7[0x10] = fVar3;
    pfVar7[0xf] = fVar2;
    pfVar7[0x11] = fVar6;
    pfVar7[0x12] = local_30;
    pfVar7[0x13] = local_2c;
    pfVar7[0x14] = local_28;
    fVar2 = *(float *)(param_1 + 8);
    pfVar7[0x16] = fVar3;
    pfVar7[0x15] = fVar2;
    pfVar7[0x17] = fVar4;
    DAT_0093cb10 = param_4 & 1;
  }
  return;
}

