/* speed.exe 0070b870 FUN_0070b870; analysis pseudocode, not buildable source.
 * calls 00703e60 FUN_00703e60
 */

void __thiscall FUN_0070b870(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_00703e60(param_2,param_3,param_4,param_1,local_4);
  return;
}

