/* speed.exe 006bde60 FUN_006bde60; analysis pseudocode, not buildable source.
 * calls 007e7d5e D3DXMatrixMultiply
 */

undefined4 FUN_006bde60(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  
  local_8c = param_2[4];
  local_90 = *param_2;
  local_20 = -(float)param_2[0xc];
  local_80 = param_2[1];
  local_1c = -(float)param_2[0xd];
  local_88 = param_2[8];
  local_78 = param_2[9];
  local_18 = -(float)param_2[0xe];
  local_7c = param_2[5];
  local_6c = param_2[6];
  local_70 = param_2[2];
  local_68 = param_2[10];
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_14 = 0x3f800000;
  D3DXMatrixMultiply(param_1,&local_50,&local_90);
  return param_1;
}

