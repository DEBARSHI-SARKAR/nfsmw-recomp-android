/* speed.exe 0069ffd0 FUN_0069ffd0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0069ffd0(int param_1,int param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = -(*(float *)(*(int *)(param_1 + 0xc0) + 0x70) * *(float *)(param_2 + 0xbc));
  local_c = local_4 * *(float *)(param_2 + 0x50);
  local_8 = *(float *)(param_2 + 0x54) * local_4;
  local_4 = *(float *)(param_2 + 0x58) * local_4;
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x8c))(&local_c);
  return;
}

