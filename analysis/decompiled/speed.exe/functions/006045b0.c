/* speed.exe 006045b0 FUN_006045b0; analysis pseudocode, not buildable source.
 * calls 00604530 FUN_00604530
 */

int __thiscall FUN_006045b0(int *param_1,int param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00604530(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  param_1[4] = param_2;
  return (int)param_1;
}

