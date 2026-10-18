/* speed.exe 006bdd50 FUN_006bdd50; analysis pseudocode, not buildable source.
 * calls 007e7d5e D3DXMatrixMultiply
 */

void FUN_006bdd50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
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
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_3;
  local_1c = param_3[1];
  local_18 = param_3[2];
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
  D3DXMatrixMultiply(param_1,param_2,&local_50);
  return;
}

