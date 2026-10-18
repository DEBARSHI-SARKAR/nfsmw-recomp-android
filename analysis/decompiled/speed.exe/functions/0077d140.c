/* speed.exe 0077d140 FUN_0077d140; analysis pseudocode, not buildable source.
 * calls 007728f0 FUN_007728f0
 */

int __thiscall FUN_0077d140(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_007728f0(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

