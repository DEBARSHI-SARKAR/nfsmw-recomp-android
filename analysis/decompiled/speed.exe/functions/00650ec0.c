/* speed.exe 00650ec0 FUN_00650ec0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00650ec0(float *param_1,float *param_2)

{
  if (((ABS(*param_2 - *param_1) + param_2[4] < param_1[4]) &&
      (ABS(param_2[1] - param_1[1]) + param_2[5] < param_1[5])) &&
     (ABS(param_2[2] - param_1[2]) + param_2[6] < param_1[6])) {
    return 1;
  }
  return 0;
}

