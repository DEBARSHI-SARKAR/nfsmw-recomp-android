/* speed.exe 0073b790 FUN_0073b790; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0073b790(int *param_1,float param_2)

{
  *(float *)*param_1 = param_2 * *(float *)param_1[2] + *(float *)*param_1;
  *(float *)param_1[1] = param_2 * *(float *)param_1[2] + *(float *)param_1[1];
  *(float *)(*param_1 + 4) = param_2 * *(float *)(param_1[2] + 4) + *(float *)(*param_1 + 4);
  *(float *)(param_1[1] + 4) = param_2 * *(float *)(param_1[2] + 4) + *(float *)(param_1[1] + 4);
  *(float *)(*param_1 + 8) = param_2 * *(float *)(param_1[2] + 8) + *(float *)(*param_1 + 8);
  *(float *)(param_1[1] + 8) = param_2 * *(float *)(param_1[2] + 8) + *(float *)(param_1[1] + 8);
  return;
}

