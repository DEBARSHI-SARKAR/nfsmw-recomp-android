/* speed.exe 005028a0 FUN_005028a0; analysis pseudocode, not buildable source.
 * calls 006bd900 FUN_006bd900
 */

void __thiscall FUN_005028a0(int param_1,int param_2,float param_3)

{
  int iVar1;
  float local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    local_50[0] = param_3;
    local_50[5] = param_3;
    local_28 = param_3;
    local_50[1] = 0.0;
    local_50[2] = 0.0;
    local_50[3] = 0.0;
    local_50[4] = 0.0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = (*(float *)(param_2 + 0x30) - *(float *)(iVar1 + 0x40)) * param_3 +
               *(float *)(iVar1 + 0x40);
    local_1c = (*(float *)(param_2 + 0x34) - *(float *)(iVar1 + 0x44)) * param_3 +
               *(float *)(iVar1 + 0x44);
    local_18 = (*(float *)(param_2 + 0x38) - *(float *)(iVar1 + 0x48)) * param_3 +
               *(float *)(iVar1 + 0x48);
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    local_14 = 0x3f800000;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    FUN_006bd900(param_2,param_2,local_50);
  }
  return;
}

