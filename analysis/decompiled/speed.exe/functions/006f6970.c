/* speed.exe 006f6970 FUN_006f6970; analysis pseudocode, not buildable source.
 * calls 006ec4b0 FUN_006ec4b0
 */

void __thiscall FUN_006f6970(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_006ec4b0(param_2,param_3,param_4,param_1,local_4);
  return;
}

