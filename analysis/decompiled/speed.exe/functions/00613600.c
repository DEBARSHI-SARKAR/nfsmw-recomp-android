/* speed.exe 00613600 FUN_00613600; analysis pseudocode, not buildable source.
 * calls 0060d6b0 FUN_0060d6b0
 */

int __thiscall FUN_00613600(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0060d6b0(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

