/* speed.exe 007640a0 FUN_007640a0; analysis pseudocode, not buildable source.
 * calls 004876f0 FUN_004876f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007640a0(float *param_1,float param_2,undefined4 param_3,undefined4 *param_4,
                 undefined2 *param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_5 = *(undefined2 *)((int)param_1 + 0x26);
  local_4c = *param_1;
  local_48 = param_1[1];
  local_44 = param_1[2];
  pfVar3 = param_1 + 0xc;
  pfVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  local_64 = param_1[4];
  fVar1 = param_1[5];
  local_60 = param_1[5];
  local_5c = param_1[6];
  local_4c = local_30 * fVar1 + local_4c;
  local_10 = 0;
  local_48 = local_2c * fVar1 + local_48;
  local_c = 0;
  local_8 = 0;
  local_4 = 0x3f800000;
  local_44 = local_28 * fVar1 + local_44;
  local_58 = param_2 * _DAT_00890968;
  local_54 = local_58;
  local_50 = local_58;
  FUN_004876f0(local_40,&local_4c,&local_64,1,&local_58);
  return;
}

