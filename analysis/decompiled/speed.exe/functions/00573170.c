/* speed.exe 00573170 FUN_00573170; analysis pseudocode, not buildable source.
 * calls 00514fd0 FUN_00514fd0
 * calls 00515520 FUN_00515520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00573170(int param_1)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  local_14 = 0.0;
  local_18 = 0.0;
  local_10 = 0.0;
  fVar1 = _DAT_00890968;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00514fd0(*(int *)(param_1 + 0x14),&local_8,&local_c);
    local_14 = local_c;
    FUN_00514fd0(*(undefined4 *)(param_1 + 0x14),&local_10,&local_8);
    local_18 = local_10;
    FUN_00515520(*(undefined4 *)(param_1 + 0x14),&local_8,local_4);
    local_10 = local_8 + local_10;
    FUN_00515520(*(undefined4 *)(param_1 + 0x14),local_4,&local_8);
    fVar1 = local_8 + local_c;
  }
  *(float *)(param_1 + 0x18) = local_18;
  *(float *)(param_1 + 0x1c) = local_14;
  *(float *)(param_1 + 0x20) = ABS(local_18 - local_10);
  *(float *)(param_1 + 0x24) = ABS(local_14 - fVar1);
  return;
}

