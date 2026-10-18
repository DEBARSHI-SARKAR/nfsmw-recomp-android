/* speed.exe 0048ea60 FUN_0048ea60; analysis pseudocode, not buildable source.
 * calls 0048ddf0 FUN_0048ddf0
 * calls 0048dec0 FUN_0048dec0
 */

void FUN_0048ea60(undefined4 param_1,float *param_2,int param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0048ddf0((float *)(param_3 + 0x10),param_1,&local_20);
  *(float *)(param_3 + 0x10) = local_20;
  *(float *)(param_3 + 0x14) = local_1c;
  local_10 = *(undefined4 *)(param_3 + 0x20);
  *(float *)(param_3 + 0x18) = local_18;
  local_c = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_3 + 0x1c) = local_14;
  local_8 = *(undefined4 *)(param_3 + 0x28);
  local_4 = 0x3f800000;
  FUN_0048dec0(param_1,&local_10,&local_20);
  *(float *)(param_3 + 0x20) = local_20 + *param_2;
  *(float *)(param_3 + 0x24) = local_1c + param_2[1];
  *(float *)(param_3 + 0x28) = local_18 + param_2[2];
  return;
}

