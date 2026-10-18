/* speed.exe 005ece80 FUN_005ece80; analysis pseudocode, not buildable source.
 * calls 005e2260 FUN_005e2260
 */

void __thiscall FUN_005ece80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_005e2260(param_2,param_3,param_4,param_1,local_4);
  return;
}

