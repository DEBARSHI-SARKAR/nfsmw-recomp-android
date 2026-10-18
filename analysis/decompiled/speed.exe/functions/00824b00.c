/* speed.exe 00824b00 FUN_00824b00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00824b00(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  
  if ((((float)*(int *)(param_1 + 0x1c) * _DAT_008c5db4 <= *(float *)(param_1 + 0x24)) ||
      (*(float *)(param_1 + 0x20) <= _DAT_00890968)) ||
     ((float)(*(int *)(param_1 + 0x1c) >> 1) <= *(float *)(param_1 + 0x20))) {
    if (0 < param_2) {
      param_3 = param_3 - (int)param_4;
      do {
        *param_4 = *(float *)((int)param_4 + param_3);
        param_4 = param_4 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    param_3 = param_3 - (int)param_4;
    do {
      fVar1 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
      *param_4 = ((fVar1 + fVar1) * *(float *)(param_1 + 0x38) +
                 (*(float *)(param_3 + (int)param_4) + _DAT_00890dfc) * *(float *)(param_1 + 0x30))
                 - *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) *
                   *(float *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      fVar1 = *param_4;
      param_4 = param_4 + 1;
      param_2 = param_2 + -1;
      *(float *)(param_1 + 0x38) = fVar1;
    } while (param_2 != 0);
  }
  return;
}

