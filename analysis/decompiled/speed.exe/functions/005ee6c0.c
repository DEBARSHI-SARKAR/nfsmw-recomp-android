/* speed.exe 005ee6c0 FUN_005ee6c0; analysis pseudocode, not buildable source.
 * calls 005e7b80 FUN_005e7b80
 */

int __thiscall FUN_005ee6c0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_005e7b80(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

