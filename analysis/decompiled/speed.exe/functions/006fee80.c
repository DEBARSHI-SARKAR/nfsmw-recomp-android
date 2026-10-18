/* speed.exe 006fee80 FUN_006fee80; analysis pseudocode, not buildable source.
 * calls 00626350 FUN_00626350
 */

int __thiscall FUN_006fee80(int *param_1,int param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00626350(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  param_1[4] = param_2;
  return (int)param_1;
}

