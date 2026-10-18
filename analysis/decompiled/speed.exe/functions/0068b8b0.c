/* speed.exe 0068b8b0 FUN_0068b8b0; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 004876f0 FUN_004876f0
 * calls 004866c0 FUN_004866c0
 * calls 005ca910 FUN_005ca910
 */

undefined4 __thiscall FUN_0068b8b0(int param_1,int param_2)

{
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [64];
  
  FUN_00401670(param_1 + 0x28,param_2 + 0x70,&local_68);
  local_68 = local_68 + *(float *)(param_2 + 0x10);
  local_64 = local_64 + *(float *)(param_2 + 0x14);
  local_60 = local_60 + *(float *)(param_2 + 0x18);
  local_5c = local_68 - *(float *)(param_1 + 0x38);
  local_58 = local_64 - *(float *)(param_1 + 0x3c);
  local_54 = local_60 - *(float *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x24) == 2) {
    FUN_004876f0(&DAT_008a3028,&local_68,param_1 + 0x18,2,&local_5c);
    return 1;
  }
  FUN_004866c0(param_1 + 8,param_2,local_50);
  FUN_005ca910(local_50,local_40);
  FUN_004876f0(local_40,&local_68,param_1 + 0x18,*(undefined4 *)(param_1 + 0x24),&local_5c);
  return 1;
}

