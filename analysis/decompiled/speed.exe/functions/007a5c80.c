/* speed.exe 007a5c80 FUN_007a5c80; analysis pseudocode, not buildable source.
 * calls 00515140 FUN_00515140
 * calls 00524cc0 FUN_00524cc0
 * calls 00514fd0 FUN_00514fd0
 * calls 00524e20 FUN_00524e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007a5c80(int param_1)

{
  undefined4 uVar1;
  float local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  FUN_00524cc0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0xc),
               *(float *)(param_1 + 0x10) - _DAT_00890e98);
  FUN_00524cc0(*(undefined4 *)(param_1 + 0x2c),*(float *)(param_1 + 0xc) + _DAT_00895018,
               *(undefined4 *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  local_c = *(float *)(param_1 + 0x10);
  FUN_00514fd0(uVar1,&local_8,local_4);
  FUN_00524cc0(uVar1,local_8,local_c);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  local_c = *(float *)(param_1 + 0x44);
  FUN_00515140(uVar1,local_4,&local_8);
  FUN_00524e20(uVar1,local_c + _DAT_008910f8,local_8);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  local_8 = *(undefined4 *)(param_1 + 0x10);
  FUN_00514fd0(uVar1,&local_c,local_4);
  FUN_00524cc0(uVar1,local_c,local_8);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  local_c = *(float *)(param_1 + 0x44);
  FUN_00515140(uVar1,local_4,&local_8);
  FUN_00524e20(uVar1,local_c + _DAT_008b7334,local_8);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00524cc0(*(int *)(param_1 + 0x24),*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c),
                 *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20));
  }
  return;
}

