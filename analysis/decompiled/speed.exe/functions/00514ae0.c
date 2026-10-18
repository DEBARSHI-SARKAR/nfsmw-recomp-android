/* speed.exe 00514ae0 FUN_00514ae0; analysis pseudocode, not buildable source.
 * calls 00626dd0 FUN_00626dd0
 */

undefined4 FUN_00514ae0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 4) {
    iVar2 = 0;
    do {
      cVar1 = FUN_00626dd0();
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1);
  }
  else {
    cVar1 = FUN_00626dd0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

