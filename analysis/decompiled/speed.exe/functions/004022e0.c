/* speed.exe 004022e0 FUN_004022e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004022e0(float *param_1,float param_2)

{
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_2 * param_1[2];
  return;
}

