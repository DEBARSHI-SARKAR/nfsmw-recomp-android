/* speed.exe 0045fde0 FUN_0045fde0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0045fde0(float *param_1,float *param_2,float *param_3,float param_4)

{
  if ((((*param_1 - param_4 <= *param_3) && (*param_3 <= param_4 + *param_2)) &&
      (param_1[1] - param_4 <= param_3[1])) &&
     (((param_3[1] <= param_4 + param_2[1] && (param_1[2] - param_4 <= param_3[2])) &&
      (param_3[2] <= param_4 + param_2[2])))) {
    return 1;
  }
  return 0;
}

