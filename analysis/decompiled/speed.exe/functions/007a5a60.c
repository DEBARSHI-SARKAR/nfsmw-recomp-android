/* speed.exe 007a5a60 FUN_007a5a60; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007a5a60(int param_1,float param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(param_1 + 4) < param_2) {
    fVar1 = param_2;
  }
  if (fVar1 < *(float *)(param_1 + 8)) {
    *(float *)(param_1 + 0x10) = fVar1;
    return;
  }
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 8);
  return;
}

