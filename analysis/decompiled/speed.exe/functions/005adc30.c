/* speed.exe 005adc30 FUN_005adc30; analysis pseudocode, not buildable source.
 */

int FUN_005adc30(int param_1,int param_2)

{
  if (-1 < param_1) {
    return param_1 % param_2;
  }
  if (1 < param_2) {
    return param_2 - -param_1 % param_2;
  }
  return 0;
}

