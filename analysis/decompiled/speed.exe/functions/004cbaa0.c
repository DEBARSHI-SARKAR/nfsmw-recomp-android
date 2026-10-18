/* speed.exe 004cbaa0 FUN_004cbaa0; analysis pseudocode, not buildable source.
 * calls 004c1a10 FUN_004c1a10
 */

int __thiscall FUN_004cbaa0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_004c1a10(param_2,param_3,param_4,param_1,local_4);
  return param_2 + param_3 * 4;
}

