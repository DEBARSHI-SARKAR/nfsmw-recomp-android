/* speed.exe 004c98b0 FUN_004c98b0; analysis pseudocode, not buildable source.
 * calls 004b8590 FUN_004b8590
 */

void __thiscall FUN_004c98b0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_004b8590(param_2,param_3,param_4,param_1,local_4);
  return;
}

