/* speed.exe 00514a70 FUN_00514a70; analysis pseudocode, not buildable source.
 * calls 00626dd0 FUN_00626dd0
 * calls 00642d70 FUN_00642d70
 * calls 00644060 FUN_00644060
 */

void FUN_00514a70(int param_1,char param_2)

{
  char cVar1;
  
  if (param_1 == 4) {
    cVar1 = FUN_00626dd0();
    if (cVar1 == '\0') {
      FUN_00644060(1);
      if (param_2 != '\0') {
        FUN_00642d70();
        return;
      }
    }
  }
  else if (param_1 != -1) {
    cVar1 = FUN_00626dd0();
    if (cVar1 == '\0') {
      FUN_00644060(1);
      if (param_2 != '\0') {
        FUN_00642d70();
      }
    }
  }
  return;
}

