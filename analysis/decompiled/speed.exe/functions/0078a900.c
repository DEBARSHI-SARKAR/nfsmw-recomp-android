/* speed.exe 0078a900 FUN_0078a900; analysis pseudocode, not buildable source.
 * calls 0056e400 FUN_0056e400
 * calls 004647c0 FUN_004647c0
 * calls 00460c70 FUN_00460c70
 * calls 00460f80 FUN_00460f80
 * calls 0056e380 FUN_0056e380
 * calls 00460dd0 FUN_00460dd0
 * calls 0083fb40 FUN_0083fb40
 * calls 00460ca0 FUN_00460ca0
 * calls 0056e3c0 FUN_0056e3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078a900(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_40;
  int local_3f;
  int local_3b;
  int local_37;
  int local_33;
  int local_2f;
  int local_2b;
  int local_27;
  undefined2 local_23;
  undefined1 local_21;
  
  iVar1 = FUN_00460dd0(param_1,"SKIPFE");
  if (iVar1 == 0) {
    DAT_00926064 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"SKIPFEPLAYERCAR");
  if (iVar1 == 0) {
    puVar4 = &DAT_009b4128;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    FUN_00460ca0(&DAT_009b4128,param_2,0x3f);
    PTR_s_bmwm3gtre46_008f86a8 = (undefined *)&DAT_009b4128;
  }
  iVar1 = FUN_00460dd0(param_1,"SKIPFENUMAICARS");
  if (iVar1 == 0) {
    DAT_00926080 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"SKIPFENUMLAPS");
  if (iVar1 == 0) {
    DAT_008f86bc = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"SKIPFETRACKNUMBER");
  if (iVar1 == 0) {
    DAT_008f86a4 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"SKIPMOVIES");
  if (iVar1 == 0) {
    DAT_00926144 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"FORCECLIENTSHUTDOWN");
  if (iVar1 == 0) {
    iVar1 = FUN_00460f80(param_2);
    DAT_009b4224 = iVar1 != 0;
  }
  iVar1 = FUN_00460dd0(param_1,"ONLINEENABLED");
  if (iVar1 == 0) {
    DAT_00926110 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"USERECORDABLE");
  if (iVar1 == 0) {
    _DAT_00926118 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"GAMESPEED");
  if (iVar1 == 0) {
    iVar1 = FUN_00460f80(param_2);
    _DAT_00901b1c = (float)iVar1 * _DAT_00890dc4;
  }
  iVar1 = FUN_00460dd0(param_1,"DOSCREENPRINTF");
  if (iVar1 == 0) {
    DAT_00926140 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"ONLINEDEBUGDRAW");
  if (iVar1 == 0) {
    FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"AICONTROL");
  if (iVar1 == 0) {
    iVar1 = FUN_00460f80(param_2);
    if (iVar1 != 0) {
      DAT_0090d5fa = 1;
    }
  }
  iVar1 = FUN_00460dd0(param_1,"NEWCARSMOOTHING");
  if (iVar1 == 0) {
    iVar1 = FUN_00460f80(param_2);
    DAT_00905d50 = iVar1 != 0;
  }
  iVar1 = FUN_00460dd0(param_1,"ISSERVER");
  if (iVar1 == 0) {
    DAT_009b416c = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"NUMCLIENTCARS");
  if (iVar1 == 0) {
    DAT_00905d98 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"SERVERIP");
  if (iVar1 == 0) {
    DAT_009b3e98 = FUN_0083fb40(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"SERVERPORT");
  if (iVar1 == 0) {
    _DAT_00905df8 = FUN_00460f80(param_2);
  }
  iVar1 = 0;
  do {
    FUN_004647c0(&local_40,"CLIENTIP%d",iVar1);
    iVar2 = FUN_00460dd0(param_1,&local_40);
    if (iVar2 == 0) {
      uVar3 = FUN_0083fb40(param_2);
      (&DAT_009b40f8)[iVar1] = uVar3;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = FUN_00460dd0(param_1,"FORCECLIENTSHUTDOWN");
  if (iVar1 == 0) {
    iVar1 = FUN_00460f80(param_2);
    DAT_009b4224 = iVar1 != 0;
  }
  iVar1 = FUN_00460dd0(param_1,"SOUND");
  if (iVar1 == 0) {
    DAT_008f86fc = FUN_00460f80(param_2);
    DAT_008f86f8 = DAT_008f86f8 & DAT_008f86fc;
  }
  iVar1 = FUN_00460dd0(param_1,"DIAGNOSTICLEVEL");
  if (iVar1 == 0) {
    _DAT_00905e00 = FUN_00460f80(param_2);
    _DAT_00905e00 = _DAT_00905e00 & 0xffff;
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkDebug");
  if (iVar1 == 0) {
    _DAT_009b4170 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkUserName");
  if (iVar1 == 0) {
    FUN_0056e380(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkUseLobbies");
  if (iVar1 == 0) {
    DAT_009b4174 = FUN_00460f80(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkLobbyIP");
  if (iVar1 == 0) {
LAB_0078acbf:
    FUN_00460c70(s__pcnfs06_ea_com_008f42c8,param_2);
  }
  else {
    iVar1 = FUN_00460dd0(param_1,"LobbyServerAddr");
    if (iVar1 == 0) goto LAB_0078acbf;
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkLobbyPort");
  if (iVar1 != 0) {
    iVar1 = FUN_00460dd0(param_1,"LobbyServerPort");
    if (iVar1 != 0) goto LAB_0078ad00;
  }
  _DAT_008f42e8 = FUN_00460f80(param_2);
LAB_0078ad00:
  iVar1 = FUN_00460dd0(param_1,"NetworkPasswd");
  if (iVar1 == 0) {
    local_40 = 0;
    local_23 = 0;
    local_21 = 0;
    local_3f = iVar1;
    local_3b = iVar1;
    local_37 = iVar1;
    local_33 = iVar1;
    local_2f = iVar1;
    local_2b = iVar1;
    local_27 = iVar1;
    FUN_00460c70(&local_40,param_2);
    FUN_0056e400(&local_40);
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkPersona");
  if (iVar1 == 0) {
    FUN_0056e3c0(param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"NetworkGameName");
  if (iVar1 == 0) {
    FUN_00460c70(&DAT_009b4180,param_2);
  }
  iVar1 = FUN_00460dd0(param_1,"AutomaticLogin");
  if (iVar1 == 0) {
    _DAT_009b4178 = FUN_00460f80(param_2);
  }
  return;
}

