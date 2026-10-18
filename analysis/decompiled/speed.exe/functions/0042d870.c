/* speed.exe 0042d870 FUN_0042d870; analysis pseudocode, not buildable source.
 * calls 0040fb50 FUN_0040fb50
 */

void __thiscall FUN_0042d870(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_0040fb50(param_2,param_3,param_4,param_1,local_4);
  return;
}

