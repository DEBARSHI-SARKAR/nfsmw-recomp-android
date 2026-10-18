/* speed.exe 00469cd0 FUN_00469cd0; analysis pseudocode, not buildable source.
 * calls 00469c50 FUN_00469c50
 */

int __fastcall FUN_00469cd0(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00469c50(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

