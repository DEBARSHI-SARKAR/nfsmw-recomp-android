/* speed.exe 00738b40 FUN_00738b40; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd920 FUN_006bd920
 */

void __thiscall FUN_00738b40(int param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00444fe0(param_2,*(undefined4 *)(param_1 + 0x34));
  local_2c = *(undefined4 *)(param_1 + 0x54);
  local_30 = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined4 *)(param_1 + 0x58);
  local_24 = *(undefined4 *)(param_1 + 0x5c);
  FUN_006bd920(&local_20,*(undefined4 *)(param_1 + 0x34),&local_30);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) - local_20;
  *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) - local_1c;
  *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) - local_18;
  return;
}

