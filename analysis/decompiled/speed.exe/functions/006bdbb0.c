/* speed.exe 006bdbb0 FUN_006bdbb0; analysis pseudocode, not buildable source.
 * calls 0045db30 FUN_0045db30
 * calls 0045dbf0 FUN_0045dbf0
 * calls 007e7d5e D3DXMatrixMultiply
 */

void FUN_006bdbb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fVar1 = (float10)FUN_0045dbf0(param_3);
  fVar2 = (float10)FUN_0045db30(param_3);
  local_38 = (float)fVar2;
  local_2c = (float)-fVar2;
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_30 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_3c = (float)fVar1;
  local_28 = (float)fVar1;
  D3DXMatrixMultiply(param_1,param_2,&local_50);
  return;
}

