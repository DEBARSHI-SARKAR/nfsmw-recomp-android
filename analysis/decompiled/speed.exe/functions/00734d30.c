/* speed.exe 00734d30 FUN_00734d30; analysis pseudocode, not buildable source.
 * calls 006260e0 FUN_006260e0
 */

int __thiscall FUN_00734d30(int *param_1,undefined1 param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_006260e0(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  *(undefined1 *)(param_1 + 4) = param_2;
  return (int)param_1;
}

