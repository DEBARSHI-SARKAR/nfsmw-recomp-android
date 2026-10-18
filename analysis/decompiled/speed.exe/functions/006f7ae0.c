/* speed.exe 006f7ae0 FUN_006f7ae0; analysis pseudocode, not buildable source.
 * calls 006f0930 FUN_006f0930
 */

int __thiscall FUN_006f7ae0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_006f0930(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

