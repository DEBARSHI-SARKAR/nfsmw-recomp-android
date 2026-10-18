/* speed.exe 00758a70 FUN_00758a70; analysis pseudocode, not buildable source.
 * calls 007401e0 FUN_007401e0
 */

void __thiscall FUN_00758a70(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_007401e0(param_2,param_3,param_4,param_1,local_4);
  return;
}

