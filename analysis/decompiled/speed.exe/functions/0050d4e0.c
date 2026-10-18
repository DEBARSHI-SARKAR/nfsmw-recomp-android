/* speed.exe 0050d4e0 FUN_0050d4e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0050d4e0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1[1];
  *param_2 = param_3 * *param_1;
  param_2[1] = param_3 * fVar1;
  return;
}

