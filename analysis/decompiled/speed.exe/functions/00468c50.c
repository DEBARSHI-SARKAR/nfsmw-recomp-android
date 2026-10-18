/* speed.exe 00468c50 FUN_00468c50; analysis pseudocode, not buildable source.
 * calls 00651750 FUN_00651750
 * calls 00651770 FUN_00651770
 * calls 0045ed10 thunk_FUN_006bd920
 * calls 0045f640 FUN_0045f640
 * calls 0045ed20 thunk_FUN_006bd940
 */

void __thiscall FUN_00468c50(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 local_30 [24];
  float local_18;
  
  FUN_0045f640(local_30,*(int *)(param_1 + 0x1c) + 0x40,*(int *)(param_1 + 0x1c) + 0x200,0x3d088889)
  ;
  if (param_3 != 0) {
    thunk_FUN_006bd940(local_30,param_3,local_30);
  }
  FUN_00651750(local_30);
  iVar1 = *(int *)(param_1 + 0x1c);
  local_40 = *(float *)(iVar1 + 0x200);
  local_3c = *(float *)(iVar1 + 0x204);
  local_18 = *(float *)(iVar1 + 0x208);
  if (param_4 != (float *)0x0) {
    local_40 = local_40 - *param_4;
    local_3c = local_3c - param_4[1];
    local_18 = local_18 - param_4[2];
  }
  local_38 = *(float *)(param_2 + 0x24);
  local_40 = local_40 * local_38;
  local_34 = 0;
  local_3c = local_3c * local_38;
  local_38 = local_18 * local_38;
  if (param_3 != 0) {
    thunk_FUN_006bd920(&local_40,param_3,&local_40);
  }
  FUN_00651770(&local_40);
  return;
}

