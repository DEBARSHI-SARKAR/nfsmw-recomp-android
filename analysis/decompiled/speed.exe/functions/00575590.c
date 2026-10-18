/* speed.exe 00575590 FUN_00575590; analysis pseudocode, not buildable source.
 * calls 00515960 FUN_00515960
 * calls 007c4b80 FUN_007c4b80
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 */

void __fastcall FUN_00575590(char *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  FUN_00515960(&local_8,&local_c);
  if (*param_1 == '\0') {
    local_10 = local_8 - *(float *)(param_1 + 0x18);
    FUN_00515520(*(undefined4 *)(param_1 + 0x44),&local_14,local_4);
    local_14 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x20)) - local_14;
    fVar1 = *(float *)(param_1 + 0x20);
    if (*(float *)(param_1 + 0x20) < local_10) {
      fVar1 = local_10;
    }
    local_10 = fVar1;
    if (local_14 < fVar1) {
      local_10 = local_14;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    FUN_00514fd0(uVar2,local_4,&local_14);
    FUN_00524cc0(uVar2,local_10,local_14);
    fVar1 = (local_8 - *(float *)(param_1 + 0x10)) - *(float *)(param_1 + 0x18);
  }
  else {
    local_14 = local_c - *(float *)(param_1 + 0x1c);
    FUN_00515520(*(undefined4 *)(param_1 + 0x44),local_4,&local_10);
    fVar1 = (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24)) - local_10;
    local_10 = *(float *)(param_1 + 0x24);
    if (*(float *)(param_1 + 0x24) < local_14) {
      local_10 = local_14;
    }
    if (fVar1 < local_10) {
      local_10 = fVar1;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    FUN_00514fd0(uVar2,&local_14,local_4);
    FUN_00524cc0(uVar2,local_14,local_10);
    fVar1 = (local_c - *(float *)(param_1 + 0x14)) - *(float *)(param_1 + 0x1c);
  }
  if ((fVar1 <= *(float *)(param_1 + 0x38)) && (-*(float *)(param_1 + 0x38) <= fVar1)) {
    return;
  }
  uVar2 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}

