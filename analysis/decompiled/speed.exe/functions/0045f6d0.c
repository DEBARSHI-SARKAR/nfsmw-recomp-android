/* speed.exe 0045f6d0 FUN_0045f6d0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0045f6d0(float *param_1,float *param_2,float param_3)

{
  if ((ABS(*param_1 - *param_2) <= param_3) && (ABS(param_1[1] - param_2[1]) <= param_3)) {
    return 1;
  }
  return 0;
}

