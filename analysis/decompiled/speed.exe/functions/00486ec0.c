/* speed.exe 00486ec0 FUN_00486ec0; analysis pseudocode, not buildable source.
 * calls 00486bd0 FUN_00486bd0
 * calls 00401670 FUN_00401670
 */

void __thiscall FUN_00486ec0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  FUN_00401670(&local_c,param_1 + 0x40,&local_18);
  fVar1 = local_18 * local_18;
  local_18 = (local_10 * local_10 + local_14 * local_14) * *(float *)(param_1 + 0xd0);
  local_14 = (local_10 * local_10 + fVar1) * *(float *)(param_1 + 0xd0);
  FUN_00486bd0(param_1,param_3);
  return;
}

