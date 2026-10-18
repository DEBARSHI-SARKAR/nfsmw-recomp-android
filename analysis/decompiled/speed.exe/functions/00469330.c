/* speed.exe 00469330 FUN_00469330; analysis pseudocode, not buildable source.
 */

int FUN_00469330(int param_1,int param_2)

{
  if (0 < param_2) {
    for (; param_1 < 0; param_1 = param_1 + param_2) {
    }
    return param_1 - (param_1 / param_2) * param_2;
  }
  return 0;
}

