/* speed.exe 004d2830 FUN_004d2830; analysis pseudocode, not buildable source.
 * calls 004d27b0 FUN_004d27b0
 */

int __thiscall FUN_004d2830(int *param_1,int param_2,int param_3,undefined1 param_4)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_004d27b0(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = param_3;
  param_1[2] = 0x1c;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 6) = param_4;
  return (int)param_1;
}

