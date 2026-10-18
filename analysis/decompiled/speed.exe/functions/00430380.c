/* speed.exe 00430380 FUN_00430380; analysis pseudocode, not buildable source.
 * calls 0041e440 FUN_0041e440
 */

int __thiscall FUN_00430380(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0041e440(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

