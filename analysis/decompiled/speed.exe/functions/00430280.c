/* speed.exe 00430280 FUN_00430280; analysis pseudocode, not buildable source.
 * calls 0041e350 FUN_0041e350
 */

int __thiscall FUN_00430280(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0041e350(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

