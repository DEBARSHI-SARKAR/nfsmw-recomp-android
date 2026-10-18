/* speed.exe 00405a40 FUN_00405a40; analysis pseudocode, not buildable source.
 * calls 004059c0 FUN_004059c0
 */

int __thiscall FUN_00405a40(int *param_1,int param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_004059c0(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  param_1[4] = param_2;
  return (int)param_1;
}

