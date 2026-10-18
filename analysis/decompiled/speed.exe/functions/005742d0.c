/* speed.exe 005742d0 FUN_005742d0; analysis pseudocode, not buildable source.
 * calls 00525050 FUN_00525050
 * calls 00524cc0 FUN_00524cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005742d0(int param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x6c);
  if ((uVar1 & 1) == 0) {
    fVar2 = *(float *)(param_1 + 0x30);
    if ((uVar1 & 2) == 0) {
      fVar2 = fVar2 * _DAT_008933d4;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0xc);
  }
  else {
    fVar2 = *(float *)(param_1 + 0xc);
  }
  FUN_00525050(*(int *)(param_1 + 0x2c),fVar2,
               *(float *)(param_1 + 0x34) * _DAT_008933d4 + *(float *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00524cc0(*(int *)(param_1 + 0x24),*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c),
                 *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20));
  }
  return;
}

