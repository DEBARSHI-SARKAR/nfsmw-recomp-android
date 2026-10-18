/* speed.exe 005d7930 FUN_005d7930; analysis pseudocode, not buildable source.
 * calls 005d49a0 FUN_005d49a0
 * calls 005d66e0 FUN_005d66e0
 */

void __thiscall FUN_005d7930(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_3;
  FUN_005d49a0(&param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_8,0);
  FUN_005d66e0(param_2,1,&local_8);
  return;
}

