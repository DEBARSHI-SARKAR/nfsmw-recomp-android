/* speed.exe 00405da0 FUN_00405da0; analysis pseudocode, not buildable source.
 * calls 00405d20 FUN_00405d20
 */

int __thiscall FUN_00405da0(int *param_1,undefined1 param_2,int param_3,int param_4,int param_5)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00405d20(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = param_2;
  param_1[5] = param_3;
  param_1[2] = 0x20;
  param_1[6] = param_4;
  param_1[7] = param_5;
  return (int)param_1;
}

