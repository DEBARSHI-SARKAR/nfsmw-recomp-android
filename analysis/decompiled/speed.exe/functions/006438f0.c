/* speed.exe 006438f0 FUN_006438f0; analysis pseudocode, not buildable source.
 * calls 0062a400 FUN_0062a400
 */

void __thiscall FUN_006438f0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0062a400(param_2,param_3,param_4,param_1,local_4);
  return;
}

