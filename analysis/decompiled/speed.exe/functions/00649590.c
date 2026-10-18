/* speed.exe 00649590 FUN_00649590; analysis pseudocode, not buildable source.
 * calls 0045ed10 thunk_FUN_006bd920
 */

void __thiscall
FUN_00649590(int param_1,undefined4 param_2,float param_3,int param_4,undefined4 param_5)

{
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  local_28 = param_3 * param_3;
  local_2c = param_3;
  local_24 = local_28 * param_3;
  local_30 = 0x3f800000;
  thunk_FUN_006bd920(local_20,param_4 * 0x40 + *(int *)(param_1 + 0x28),&local_30);
  thunk_FUN_006bd920(param_2,param_5,local_20);
  return;
}

