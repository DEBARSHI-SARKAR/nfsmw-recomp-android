/* speed.exe 007251a0 FUN_007251a0; analysis pseudocode, not buildable source.
 * calls 00467160 FUN_00467160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007251a0(int param_1)

{
  int iVar1;
  undefined1 local_30 [4];
  float local_2c;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0x40);
  local_2c = *(float *)(iVar1 + 0x54);
  local_20 = *(float *)(iVar1 + 0x50) * _DAT_00894200 + *(float *)(iVar1 + 0x40);
  local_18 = 0;
  local_1c = local_2c * _DAT_00894200 + *(float *)(iVar1 + 0x44);
  FUN_00467160(&local_20,local_30);
  return;
}

