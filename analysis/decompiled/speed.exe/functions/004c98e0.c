/* speed.exe 004c98e0 FUN_004c98e0; analysis pseudocode, not buildable source.
 * calls 004b85c0 FUN_004b85c0
 */

void __thiscall FUN_004c98e0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_004b85c0(param_2,param_3,param_4,param_1,local_4);
  return;
}

