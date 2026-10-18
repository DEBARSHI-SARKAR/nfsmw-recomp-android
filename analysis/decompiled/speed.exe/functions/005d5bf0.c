/* speed.exe 005d5bf0 FUN_005d5bf0; analysis pseudocode, not buildable source.
 * calls 005d4a90 FUN_005d4a90
 */

void FUN_005d5bf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_8 [2];
  
  local_8[0] = param_1;
  FUN_005d4a90(&param_1,DAT_0091de0c,DAT_0091de10,local_8,0);
  (**(code **)(param_1 + 4))(param_2,param_3);
  return;
}

