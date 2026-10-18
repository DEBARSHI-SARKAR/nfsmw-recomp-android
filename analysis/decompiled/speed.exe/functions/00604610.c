/* speed.exe 00604610 FUN_00604610; analysis pseudocode, not buildable source.
 * calls 00405750 FUN_00405750
 */

int __thiscall FUN_00604610(int *param_1,undefined1 param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00405750(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  *(undefined1 *)(param_1 + 4) = param_2;
  return (int)param_1;
}

