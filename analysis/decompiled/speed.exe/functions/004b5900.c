/* speed.exe 004b5900 FUN_004b5900; analysis pseudocode, not buildable source.
 * calls 004b5880 FUN_004b5880
 */

int __thiscall FUN_004b5900(int *param_1,undefined1 param_2)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_004b5880(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x14;
  *(undefined1 *)(param_1 + 4) = param_2;
  return (int)param_1;
}

