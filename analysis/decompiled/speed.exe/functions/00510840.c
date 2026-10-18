/* speed.exe 00510840 FUN_00510840; analysis pseudocode, not buildable source.
 * calls 005107c0 FUN_005107c0
 */

int __fastcall FUN_00510840(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_005107c0(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

