/* speed.exe 0047ce80 FUN_0047ce80; analysis pseudocode, not buildable source.
 * calls 0046f4a0 FUN_0046f4a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047ce80(int param_1,float *param_2)

{
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined *local_4;
  
  local_c = *(float *)(*(int *)(param_1 + 0x80) + 0x14);
  if (local_c < _DAT_00890968 == (local_c == _DAT_00890968)) {
    local_8 = _DAT_0089472c / local_c;
    local_14 = 5;
    local_10 = 0;
    local_4 = &DAT_008ee0cc;
    FUN_0046f4a0(&local_1c,*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10));
    *param_2 = local_1c * *param_2;
    param_2[2] = local_18 * param_2[2];
    return;
  }
  return;
}

