/* speed.exe 00468af0 FUN_00468af0; analysis pseudocode, not buildable source.
 * calls 006bde60 FUN_006bde60
 * calls 006cf0a0 FUN_006cf0a0
 * calls 006bd940 FUN_006bd940
 */

void FUN_00468af0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  local_b0 = -*(float *)(param_1 + 4);
  local_ac = -*(float *)(param_1 + 0x14);
  local_a8 = -*(float *)(param_1 + 0x24);
  FUN_006cf0a0(local_90,param_2,param_3,&local_b0);
  FUN_006bde60(local_50,local_90);
  FUN_006bd940(&local_c0,local_90,param_3);
  local_c0 = local_c0 - local_b8 * *param_4;
  local_bc = local_bc - local_b8 * param_4[1];
  FUN_006bd940(local_a0,local_50,&local_c0);
  FUN_006cf0a0(param_1,param_2,local_a0,&local_b0);
  return;
}

