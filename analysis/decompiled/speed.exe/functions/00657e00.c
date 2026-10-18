/* speed.exe 00657e00 FUN_00657e00; analysis pseudocode, not buildable source.
 * calls 00649380 FUN_00649380
 * calls 006497b0 FUN_006497b0
 * calls 0045dac0 FUN_0045dac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00657e00(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00649380();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(short *)(param_1 + 0x1e) != 0) {
    local_54 = param_3;
    local_64 = 1.0;
    local_5c = 0.0;
    local_48 = 0.0;
    local_44 = 0x3e6;
    do {
      FUN_006497b0(&local_20,local_54,0);
      local_30 = local_20;
      local_28 = local_18;
      local_2c = local_1c;
      FUN_006497b0(&local_40,local_54,1);
      fVar1 = SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38);
      if (((fVar1 == _DAT_00890968) ||
          (fVar2 = ((*param_2 - local_30) * local_40 +
                   (param_2[1] - local_2c) * local_3c + (param_2[2] - local_28) * local_38) / fVar1,
          ABS(fVar2) < param_4)) ||
         ((local_5c != _DAT_00890968 &&
          (fVar1 = -((fVar2 - local_48) / local_5c), fVar1 == _DAT_00890968)))) {
        return (float10)local_54;
      }
      local_60 = fVar2 / fVar1;
      if (fVar2 / fVar1 <= -local_64) {
        local_60 = -local_64;
      }
      if (local_64 < local_60) {
        local_60 = local_64;
      }
      fVar3 = (float10)local_60 + (float10)local_54;
      if (*(int *)(param_1 + 4) == 0) {
        fVar3 = (float10)FUN_0045dac0((float)fVar3,*(undefined4 *)(param_1 + 0xc));
      }
      else if (*(int *)(param_1 + 4) == 1) {
        fVar1 = *(float *)(param_1 + 0xc) - _DAT_008a87a8;
        if (fVar3 <= (float10)*(float *)(param_1 + 0x10)) {
          fVar3 = (float10)*(float *)(param_1 + 0x10);
        }
        if ((float10)fVar1 < fVar3) {
          fVar3 = (float10)fVar1;
        }
      }
      local_54 = (float)fVar3;
      if (local_60 * local_5c < _DAT_00890968) {
        local_64 = local_64 * _DAT_008933d4;
      }
      local_5c = local_60;
      local_44 = local_44 + -1;
      local_48 = fVar2;
    } while (local_44 != 0);
    return (float10)local_54;
  }
  return (float10)_DAT_00890968;
}

