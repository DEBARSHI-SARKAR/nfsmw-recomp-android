/* speed.exe 0056cd20 FUN_0056cd20; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0056cd20(int param_1,float param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x20);
  if (*(float *)(param_1 + 0x20) < param_2) {
    fVar1 = param_2;
  }
  if (fVar1 < *(float *)(param_1 + 0x1c)) {
    *(float *)(param_1 + 0x28) = fVar1;
    return;
  }
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x1c);
  return;
}

