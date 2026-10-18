/* speed.exe 004876a0 FUN_004876a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004876a0(float *param_1,float *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + param_2[2];
  param_1[0x28] = param_1[0x28] + *param_2;
  param_1[0x29] = param_1[0x29] + param_2[1];
  param_1[0x2a] = param_1[0x2a] + param_2[2];
  return;
}

