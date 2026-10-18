/* speed.exe 0046da10 FUN_0046da10; analysis pseudocode, not buildable source.
 * calls 0046a420 FUN_0046a420
 * calls 0045ed10 thunk_FUN_006bd920
 * calls 0045f640 FUN_0045f640
 * calls 0046a3c0 FUN_0046a3c0
 * calls 0045ed20 thunk_FUN_006bd940
 */

void __thiscall FUN_0046da10(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_18;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_0045f640(&local_40,*(int *)(param_1 + 0x1c) + 0x40,*(int *)(param_1 + 0x1c) + 0x200,0x3d088889
              );
  if (param_3 != 0) {
    thunk_FUN_006bd940(&local_40,param_3,&local_40);
  }
  FUN_0046a3c0(local_40,local_3c,local_38);
  iVar1 = *(int *)(param_1 + 0x1c);
  local_30 = *(float *)(iVar1 + 0x200);
  local_18 = *(float *)(iVar1 + 0x208);
  local_2c = *(float *)(iVar1 + 0x204);
  if (param_4 != (float *)0x0) {
    local_30 = local_30 - *param_4;
    local_2c = local_2c - param_4[1];
    local_18 = local_18 - param_4[2];
  }
  local_28 = *(float *)(param_2 + 0x24);
  local_30 = local_30 * local_28;
  local_24 = 0;
  local_2c = local_2c * local_28;
  local_28 = local_18 * local_28;
  if (param_3 != 0) {
    thunk_FUN_006bd920(&local_30,param_3,&local_30);
  }
  FUN_0046a420(local_30,local_2c,local_28);
  return;
}

