/* speed.exe 006cf0a0 FUN_006cf0a0; analysis pseudocode, not buildable source.
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 0045f490 FUN_0045f490
 * calls 0045f7c0 FUN_0045f7c0
 */

void FUN_006cf0a0(undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_80 = *param_3 - *param_2;
  local_7c = param_3[1] - param_2[1];
  local_78 = param_3[2] - param_2[2];
  local_68 = local_78;
  FUN_0045f490(&local_80,&local_80);
  local_90 = -*param_4;
  local_8c = -param_4[1];
  local_88 = -param_4[2];
  local_58 = local_88;
  FUN_0045f7c0(&local_70,&local_90,&local_80);
  FUN_0045f7c0(&local_90,&local_80,&local_70);
  FUN_0045f490(&local_70,&local_70);
  FUN_0045f490(&local_90,&local_90);
  *param_1 = local_70;
  param_1[1] = local_90;
  param_1[4] = local_6c;
  param_1[5] = local_8c;
  param_1[6] = local_7c;
  param_1[8] = local_68;
  param_1[2] = local_80;
  param_1[9] = local_88;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[10] = local_78;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  local_20 = -*param_2;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_1c = -param_2[1];
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_18 = -param_2[2];
  local_2c = 0;
  local_24 = 0;
  local_50 = 0x3f800000;
  local_3c = 0x3f800000;
  local_28 = 0x3f800000;
  local_14 = 0x3f800000;
  D3DXMatrixMultiply(param_1,&local_50,param_1);
  return;
}

