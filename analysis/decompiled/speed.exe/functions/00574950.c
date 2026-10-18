/* speed.exe 00574950 FUN_00574950; analysis pseudocode, not buildable source.
 * calls 00525050 FUN_00525050
 * calls 00515520 FUN_00515520
 * calls 00524cc0 FUN_00524cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00574950(int param_1)

{
  uint uVar1;
  float fVar2;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x6c);
  if ((uVar1 & 1) == 0) {
    fVar2 = *(float *)(param_1 + 0x34);
    if ((uVar1 & 2) == 0) {
      fVar2 = fVar2 * _DAT_008933d4;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0xc);
  }
  else {
    fVar2 = *(float *)(param_1 + 0xc);
  }
  FUN_00525050(*(int *)(param_1 + 0x2c),fVar2,
               *(float *)(param_1 + 0x38) * _DAT_008933d4 + *(float *)(param_1 + 0x10));
  local_c = *(float *)(param_1 + 0x44);
  local_10 = *(float *)(param_1 + 0x3c);
  fVar2 = *(float *)(param_1 + 0x48);
  FUN_00515520(*(undefined4 *)(param_1 + 0x60),&local_8,local_4);
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x20))
            ((local_10 * _DAT_008933d4 + local_c) - local_8 * _DAT_008933d4,
             fVar2 + *(float *)(param_1 + 0x98));
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x24))();
  FUN_00515520(*(undefined4 *)(param_1 + 0x4c),&local_10,&local_c);
  FUN_00515520(*(undefined4 *)(param_1 + 0x50),&local_10,&local_c);
  FUN_00525050(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x44),
               *(float *)(param_1 + 0x38) * _DAT_008933d4 + *(float *)(param_1 + 0x48));
  FUN_00525050(*(undefined4 *)(param_1 + 0x50),
               *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x3c),
               *(float *)(param_1 + 0x38) * _DAT_008933d4 + *(float *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00524cc0(*(int *)(param_1 + 0x24),*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c),
                 *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20));
  }
  return;
}

