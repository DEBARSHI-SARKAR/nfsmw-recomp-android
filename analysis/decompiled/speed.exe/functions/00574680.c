/* speed.exe 00574680 FUN_00574680; analysis pseudocode, not buildable source.
 * calls 00525050 FUN_00525050
 * calls 00524ee0 FUN_00524ee0
 * calls 00515520 FUN_00515520
 * calls 00524cc0 FUN_00524cc0
 * calls 00514fd0 FUN_00514fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00574680(int param_1)

{
  undefined4 uVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  FUN_00515520(*(undefined4 *)(param_1 + 0x5c),&local_8,&local_14);
  FUN_00524cc0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc),
               local_14 * _DAT_008933d4 + *(float *)(param_1 + 0x10));
  local_8 = *(float *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  local_c = *(float *)(param_1 + 0x3c);
  FUN_00524ee0(uVar1,local_4,&local_10);
  FUN_00525050(uVar1,local_c * _DAT_008933d4 + local_8,local_10);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  local_8 = *(float *)(param_1 + 0x48);
  FUN_00514fd0(uVar1,&local_c,local_4);
  FUN_00524cc0(uVar1,local_c,local_8);
  local_10 = *(float *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  local_c = *(float *)(param_1 + 0x3c);
  FUN_00524ee0(uVar1,local_4,&local_8);
  FUN_00525050(uVar1,local_c * _DAT_008933d4 + local_10,local_8);
  local_8 = *(float *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  FUN_00514fd0(uVar1,&local_c,local_4);
  FUN_00524cc0(uVar1,local_c,local_8 + local_14 + _DAT_0089096c);
  local_14 = *(float *)(param_1 + 0x3c) * _DAT_008933d4 + *(float *)(param_1 + 0x44);
  FUN_00515520(*(undefined4 *)(param_1 + 0x50),&local_8,local_4);
  FUN_00524cc0(*(undefined4 *)(param_1 + 0x4c),
               local_14 - (*(float *)(param_1 + 0x3c) * _DAT_008933d4 + local_8),
               *(undefined4 *)(param_1 + 0x48));
  FUN_00524cc0(*(undefined4 *)(param_1 + 0x50),*(float *)(param_1 + 0x3c) * _DAT_008933d4 + local_14
               ,*(undefined4 *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00524cc0(*(int *)(param_1 + 0x24),*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c),
                 *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20));
  }
  return;
}

