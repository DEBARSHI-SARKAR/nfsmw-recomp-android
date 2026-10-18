/* speed.exe 004b1040 FUN_004b1040; analysis pseudocode, not buildable source.
 * calls 00653b10 FUN_00653b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b1040(float *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  FUN_00653b10(param_2);
  (**(code **)((int)param_1[5] + 4))();
  param_1[0x12] = param_1[8];
  fVar1 = param_1[8] * param_1[4];
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (fVar1 <= param_1[1] * param_1[4]) {
      if (fVar1 <= param_1[4] * *param_1) {
        param_1[0x10] = param_1[2];
        return;
      }
      fVar1 = param_1[0x10];
      param_1[0x10] = fVar1 - param_3;
      if (_DAT_00890968 <= fVar1 - param_3) {
        return;
      }
      *(undefined1 *)(param_1 + 0xf) = 1;
      param_1[0x11] = param_1[3];
      return;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  else if (fVar1 <= param_1[4] * *param_1) {
    fVar1 = param_1[0x11];
    param_1[0x11] = fVar1 - param_3;
    if (_DAT_00890968 <= fVar1 - param_3) {
      return;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[0x10] = param_1[2];
    return;
  }
  param_1[0x11] = param_1[3];
  return;
}

