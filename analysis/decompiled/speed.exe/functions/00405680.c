/* speed.exe 00405680 FUN_00405680; analysis pseudocode, not buildable source.
 * calls 00405600 FUN_00405600
 */

int __thiscall FUN_00405680(int *param_1,int param_2,int param_3)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00405600(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = param_3;
  param_1[2] = 0x18;
  param_1[4] = param_2;
  return (int)param_1;
}

