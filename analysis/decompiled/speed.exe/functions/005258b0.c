/* speed.exe 005258b0 FUN_005258b0; analysis pseudocode, not buildable source.
 * calls 00642d70 FUN_00642d70
 * calls 00626dd0 FUN_00626dd0
 * calls 00644060 FUN_00644060
 * calls 005bbb80 FUN_005bbb80
 * calls 005b0c30 FUN_005b0c30
 */

void FUN_005258b0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005b0c30(100);
  if ((param_1 < 1) || (iVar2 < param_1)) {
    param_1 = iVar2;
  }
  if (0 < param_1) {
    do {
      FUN_005bbb80();
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar2 = FUN_005b0c30(100);
  if (iVar2 < 1) {
    if ((DAT_00925e90 == 6) && (0 < DAT_0091cae4)) {
      DAT_0091cae4 = DAT_0091cae4 + -1;
    }
    iVar2 = 0;
    do {
      cVar1 = FUN_00626dd0();
      if (cVar1 == '\0') {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1);
    FUN_00644060(0);
    FUN_00642d70();
  }
  return;
}

