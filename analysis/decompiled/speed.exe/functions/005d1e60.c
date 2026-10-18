/* speed.exe 005d1e60 FUN_005d1e60; analysis pseudocode, not buildable source.
 * calls 005cab00 FUN_005cab00
 * calls 004fa510 FUN_004fa510
 * calls 0040feb0 FUN_0040feb0
 */

void FUN_005d1e60(undefined4 param_1,float param_2,int param_3)

{
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_4c = param_2 * param_2;
  local_50 = local_4c * param_2;
  local_44 = 0x3f800000;
  local_48 = param_2;
  FUN_005cab00(&DAT_008a3200,param_1,local_40);
  FUN_004fa510(&local_50,local_40,param_3);
  FUN_0040feb0(param_3,param_3);
  *(undefined4 *)(param_3 + 0xc) = 0x3f800000;
  return;
}

