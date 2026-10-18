/* speed.exe 00469da0 FUN_00469da0; analysis pseudocode, not buildable source.
 * calls 00469d20 FUN_00469d20
 */

int __thiscall FUN_00469da0(int *param_1,int param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00469d20(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  param_1[4] = param_2;
  return (int)param_1;
}

