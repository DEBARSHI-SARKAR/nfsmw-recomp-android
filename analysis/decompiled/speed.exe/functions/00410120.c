/* speed.exe 00410120 FUN_00410120; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

void FUN_00410120(float *param_1,float *param_2)

{
  FUN_005c5e80((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
               (*param_1 - *param_2) * (*param_1 - *param_2));
  return;
}

