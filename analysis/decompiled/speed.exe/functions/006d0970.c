/* speed.exe 006d0970 FUN_006d0970; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006c0a30 FUN_006c0a30
 * calls 006d1260 FUN_006d1260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d0970(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = DAT_00982b50;
  if (DAT_00982b50 != 0) {
    FUN_006c0a30();
    local_30 = 0x80000000;
    local_2c = 0x80000000;
    local_28 = 0x80000000;
    local_24 = 0x80000000;
    if (((_DAT_00890968 < *(float *)(DAT_00919690 + 200)) && (DAT_00919658 != '\0')) &&
       (*(int *)(DAT_009196b0 + 0x10) != 0)) {
      iVar2 = FUN_007c4b80();
      local_8c = (float)iVar2;
      local_b0 = 0;
      local_ac = 0.0;
      local_a8 = 0;
      local_a0 = 0x44200000;
      local_9c = 0.0;
      local_98 = 0;
      local_90 = 0x44200000;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_7c = local_8c;
      FUN_006d1260(&local_b0,iVar1,0);
      local_ac = (float)(0x1e0 - iVar2);
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0x44200000;
      local_98 = 0;
      local_90 = 0x44200000;
      local_8c = 480.0;
      local_88 = 0;
      local_80 = 0;
      local_7c = 480.0;
      local_78 = 0;
      local_9c = local_ac;
      FUN_006d1260(&local_b0,iVar1,0);
    }
  }
  return;
}

