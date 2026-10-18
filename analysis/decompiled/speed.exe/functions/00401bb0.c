/* speed.exe 00401bb0 FUN_00401bb0; analysis pseudocode, not buildable source.
 */

void FUN_00401bb0(float *param_1,float param_2)

{
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_2 * param_1[2];
  return;
}

