/* speed.exe 0075aa60 FUN_0075aa60; analysis pseudocode, not buildable source.
 * calls 0074cfc0 FUN_0074cfc0
 */

int __thiscall FUN_0075aa60(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0074cfc0(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

