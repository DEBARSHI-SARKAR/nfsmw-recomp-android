/* speed.exe 004ae340 FUN_004ae340; analysis pseudocode, not buildable source.
 * calls 004ae2c0 FUN_004ae2c0
 */

int __thiscall FUN_004ae340(int *param_1,int param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_004ae2c0(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  param_1[4] = param_2;
  return (int)param_1;
}

