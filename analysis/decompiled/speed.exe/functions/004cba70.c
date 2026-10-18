/* speed.exe 004cba70 FUN_004cba70; analysis pseudocode, not buildable source.
 * calls 004c1980 FUN_004c1980
 */

int __thiscall FUN_004cba70(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_004c1980(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

