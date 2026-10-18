/* speed.exe 005dd750 FUN_005dd750; analysis pseudocode, not buildable source.
 * calls 005dd6d0 FUN_005dd6d0
 */

int __fastcall FUN_005dd750(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_005dd6d0(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

