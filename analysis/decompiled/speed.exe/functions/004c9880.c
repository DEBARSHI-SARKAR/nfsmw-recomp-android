/* speed.exe 004c9880 FUN_004c9880; analysis pseudocode, not buildable source.
 * calls 004b8560 FUN_004b8560
 */

void __thiscall FUN_004c9880(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_004b8560(param_2,param_3,param_4,param_1,local_4);
  return;
}

