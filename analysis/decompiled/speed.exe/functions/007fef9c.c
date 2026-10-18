/* speed.exe 007fef9c FUN_007fef9c; analysis pseudocode, not buildable source.
 */

void FUN_007fef9c(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 uint param_7,int param_8)

{
  byte *pbVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  byte local_5;
  
  pbVar1 = param_1;
  local_c = 0;
  local_10 = 0;
  param_1 = (byte *)((uint)*param_1 << 0x18);
  pbVar1 = pbVar1 + param_2;
  local_5 = *pbVar1;
  uVar2 = param_7;
  if (param_6 * param_8 != 0) {
    do {
      *(char *)(local_10 + param_5) =
           (char)((((uint)param_1 >> 0x18) * uVar2 + local_5 * local_c + (param_7 >> 1)) / param_7);
      for (local_c = local_c + param_3; param_7 < local_c; local_c = local_c - param_7) {
        param_1 = (byte *)((uint)*pbVar1 << 0x18);
        pbVar1 = pbVar1 + param_2;
        local_5 = *pbVar1;
      }
      local_10 = local_10 + param_6;
      uVar2 = param_7 - local_c;
    } while (local_10 < (uint)(param_6 * param_8));
  }
  return;
}

