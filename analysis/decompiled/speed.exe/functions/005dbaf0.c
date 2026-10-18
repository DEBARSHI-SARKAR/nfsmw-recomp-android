/* speed.exe 005dbaf0 FUN_005dbaf0; analysis pseudocode, not buildable source.
 * calls 005dba70 FUN_005dba70
 */

int __fastcall FUN_005dbaf0(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_005dba70(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

