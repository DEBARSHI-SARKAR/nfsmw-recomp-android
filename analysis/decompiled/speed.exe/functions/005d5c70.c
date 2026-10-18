/* speed.exe 005d5c70 FUN_005d5c70; analysis pseudocode, not buildable source.
 * calls 005d4a90 FUN_005d4a90
 */

void FUN_005d5c70(int param_1,undefined4 param_2)

{
  int local_8 [2];
  
  local_8[0] = param_1;
  FUN_005d4a90(&param_1,DAT_0091de2c,DAT_0091de30,local_8,0);
  (**(code **)(param_1 + 4))(param_2);
  return;
}

