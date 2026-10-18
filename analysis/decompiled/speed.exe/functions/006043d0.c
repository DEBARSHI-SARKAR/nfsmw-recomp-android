/* speed.exe 006043d0 FUN_006043d0; analysis pseudocode, not buildable source.
 * calls 00604350 FUN_00604350
 */

int __thiscall FUN_006043d0(int *param_1,int param_2,int param_3,int param_4)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00604350(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = param_3;
  param_1[2] = 0x1c;
  param_1[4] = param_2;
  param_1[6] = param_4;
  return (int)param_1;
}

