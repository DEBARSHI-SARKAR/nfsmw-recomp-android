/* speed.exe 00683e50 FUN_00683e50; analysis pseudocode, not buildable source.
 * calls 0067ddc0 FUN_0067ddc0
 * calls 00681e20 FUN_00681e20
 */

void __thiscall FUN_00683e50(int param_1,undefined4 *param_2)

{
  undefined4 local_8;
  undefined4 *local_4;
  
  local_8 = *param_2;
  local_4 = param_2;
  FUN_0067ddc0(&param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_8,0);
  FUN_00681e20(param_2,1,&local_8);
  return;
}

