/* speed.exe 007a5a20 FUN_007a5a20; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007a5a20(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(param_1 + 4) < param_2) {
    fVar1 = param_2;
  }
  if (fVar1 < *(float *)(param_1 + 8)) {
    *(float *)(param_1 + 0xc) = fVar1;
    return;
  }
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8);
  return;
}

