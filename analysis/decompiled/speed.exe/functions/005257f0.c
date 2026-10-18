/* speed.exe 005257f0 FUN_005257f0; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 005bbb60 FUN_005bbb60
 * calls 00642d70 FUN_00642d70
 * calls 00585920 FUN_00585920
 * calls 0057d0f0 FUN_0057d0f0
 * calls 00626dd0 FUN_00626dd0
 * calls 00644060 FUN_00644060
 * calls 00572070 FUN_00572070
 */

void FUN_005257f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((DAT_00925e90 == 6) && (param_4 == '\0')) && (DAT_0091cae4 < 1)) {
    *(undefined4 *)(&DAT_0091cae8 + DAT_0091cae4 * 4) = param_1;
    DAT_0091cae4 = DAT_0091cae4 + 1;
    FUN_0057d0f0();
    cVar1 = FUN_00516b50("InGameBackground.fng");
    if (cVar1 == '\0') {
      FUN_005bbb60("InGameBackground.fng",0);
    }
  }
  uVar3 = param_1;
  FUN_00572070(param_1,param_2);
  FUN_00585920(uVar3,param_2);
  FUN_005bbb60(param_1,param_3);
  iVar2 = 0;
  do {
    cVar1 = FUN_00626dd0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00626dd0();
      if (cVar1 == '\0') {
        FUN_00644060(1);
        FUN_00642d70();
      }
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  return;
}

