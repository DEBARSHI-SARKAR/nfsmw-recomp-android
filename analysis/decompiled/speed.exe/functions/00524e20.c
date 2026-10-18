/* speed.exe 00524e20 FUN_00524e20; analysis pseudocode, not buildable source.
 * calls 005b8190 FUN_005b8190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524e20(int param_1,float param_2,float param_3)

{
  int iVar1;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    local_10 = *(undefined4 *)(iVar1 + 0x24);
    local_c = *(float *)(iVar1 + 0x38);
    local_8 = *(float *)(iVar1 + 0x3c);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
    case 0xc:
      local_18 = param_2 - local_c * _DAT_008933d4;
      local_14 = param_3 - local_8 * _DAT_008933d4;
      FUN_005b8190(&local_18,0);
      return;
    default:
      local_18 = param_2;
      local_14 = param_3;
      FUN_005b8190(&local_18,0);
    }
  }
  return;
}

