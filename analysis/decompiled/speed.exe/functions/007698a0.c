/* speed.exe 007698a0 FUN_007698a0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_007698a0(int *param_1,int param_2)

{
  if (*param_1 < param_1[2]) {
    return param_1 + (param_2 % *param_1) * 0x10 + 4;
  }
  return param_1 + ((param_1[1] + 1 + param_2) % param_1[2]) * 0x10 + 4;
}

