/* speed.exe 00604670 FUN_00604670; analysis pseudocode, not buildable source.
 * calls 00407140 FUN_00407140
 */

int __fastcall FUN_00604670(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00407140(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

