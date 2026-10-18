/* speed.exe 0042d8a0 FUN_0042d8a0; analysis pseudocode, not buildable source.
 * calls 0040fb80 FUN_0040fb80
 */

void __thiscall FUN_0042d8a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0040fb80(param_2,param_3,param_4,param_1,local_4);
  return;
}

