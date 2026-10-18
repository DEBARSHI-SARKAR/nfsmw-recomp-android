/* speed.exe 004100e0 FUN_004100e0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

void FUN_004100e0(float *param_1,float *param_2)

{
  FUN_005c5e80((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
               (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
               (*param_1 - *param_2) * (*param_1 - *param_2));
  return;
}

