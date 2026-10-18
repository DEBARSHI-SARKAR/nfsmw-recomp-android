/* speed.exe 0070df50 FUN_0070df50; analysis pseudocode, not buildable source.
 * calls 00706e30 FUN_00706e30
 */

int __thiscall FUN_0070df50(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_00706e30(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

