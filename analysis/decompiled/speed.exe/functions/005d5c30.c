/* speed.exe 005d5c30 FUN_005d5c30; analysis pseudocode, not buildable source.
 * calls 005d4a90 FUN_005d4a90
 */

void FUN_005d5c30(int param_1,undefined4 param_2)

{
  int local_8 [2];
  
  local_8[0] = param_1;
  FUN_005d4a90(&param_1,DAT_0091de1c,DAT_0091de20,local_8,0);
  (**(code **)(param_1 + 4))(param_2);
  return;
}

