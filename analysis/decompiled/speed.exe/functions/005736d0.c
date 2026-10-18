/* speed.exe 005736d0 FUN_005736d0; analysis pseudocode, not buildable source.
 * calls 005155e0 FUN_005155e0
 * calls 00524ee0 FUN_00524ee0
 * calls 005b2d80 FUN_005b2d80
 * calls 00515830 FUN_00515830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005736d0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_1c;
  float local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  if (_DAT_00890d3c < *(float *)(param_1 + 0xdc)) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  FUN_00515830(local_10,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10));
  FUN_005b2d80();
  local_1c = (float)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 0x1f);
  local_18 = (float)(int)local_1c;
  FUN_00524ee0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10),&local_1c,local_14);
  if ((*(float *)(param_1 + 0xd4) - _DAT_008959e4 < local_1c) &&
     (local_1c < *(float *)(param_1 + 0xd4) + _DAT_008959e4)) {
    if (*(float *)(param_1 + 0xdc) <= _DAT_0089096c) {
      fVar1 = *(float *)(param_1 + 0xdc);
    }
    else {
      fVar1 = _DAT_00890d3c - *(float *)(param_1 + 0xdc);
    }
    fVar1 = fVar1 * local_18 * _DAT_008910c4 + _DAT_008a0bac;
    if (_DAT_00899dd8 < fVar1) {
      fVar1 = _DAT_00899dd8;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    fVar1 = fVar1 * _DAT_008a0ba8 + _DAT_008a0ba4;
    if (*(char *)(iVar2 + 0x21) != '\0') {
      FUN_005155e0(*(undefined4 *)(iVar2 + 0x10),fVar1 * *(float *)(iVar2 + 0x24),
                   fVar1 * *(float *)(iVar2 + 0x28));
    }
    *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + _DAT_00890eac;
  }
  return;
}

