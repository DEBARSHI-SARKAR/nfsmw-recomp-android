/* speed.exe 0075aa30 FUN_0075aa30; analysis pseudocode, not buildable source.
 * calls 0074cf90 FUN_0074cf90
 */

int __thiscall FUN_0075aa30(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0074cf90(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

