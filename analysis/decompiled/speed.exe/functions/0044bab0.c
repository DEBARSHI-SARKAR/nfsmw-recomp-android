/* speed.exe 0044bab0 FUN_0044bab0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0044bab0(int param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 100) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(uint *)(param_1 + 0x34) & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x34) & 0x40) == 0) {
      fVar1 = *(float *)(param_1 + 0x60);
    }
    else {
      fVar1 = (float)*(int *)(param_1 + 0x3c) * *(float *)(param_1 + 0x5c) *
              *(float *)(param_1 + 0x40);
    }
    if (fVar1 < param_2) {
      *(undefined4 *)(param_1 + 8) = 1;
      *(float *)(param_1 + 100) = fVar1 - (param_2 - fVar1);
    }
  }
  return;
}

