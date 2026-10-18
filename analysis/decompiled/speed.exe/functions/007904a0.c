/* speed.exe 007904a0 FUN_007904a0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007c4b80 FUN_007c4b80
 * calls 00460c50 FUN_00460c50
 * calls 00460c70 FUN_00460c70
 * calls 0083c880 FUN_0083c880
 * calls 0083a980 FUN_0083a980
 * calls 00460ca0 FUN_00460ca0
 */

int __thiscall FUN_007904a0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_408;
  undefined4 local_407;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = *param_4;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    FUN_00460ca0(param_1 + 0xc,param_2,0x10);
  }
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar2 = DAT_0091cf90;
  local_408 = 0;
  puVar5 = &local_407;
  for (iVar4 = 0xff; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  FUN_0083a980(&local_408,0x400,"GAMEID",*param_4);
  FUN_0083c880(&local_408,0x400,"GAMENAME",param_4 + 10);
  FUN_0083a980(&local_408,0x400,"GAMEMODE",*(undefined4 *)(iVar2 + 0x168));
  FUN_0083a980(&local_408,0x400,"RANKED",*(char *)(iVar2 + 0x141) != '\0');
  FUN_0083a980(&local_408,0x400,"NUMPLYS",param_4[9]);
  FUN_0083a980(&local_408,0x400,"COLLON",*(char *)(iVar2 + 0x143) != '\0');
  FUN_0083a980(&local_408,0x400,"CCLASS",*(char *)(iVar2 + 0x15f) != '\0');
  FUN_0083a980(&local_408,0x400,&PTR_DAT_008953c4,*(undefined1 *)(iVar2 + 0x142));
  FUN_0083a980(&local_408,0x400,"NUMLAPS",*(undefined1 *)(iVar2 + 400));
  FUN_0083c880(&local_408,0x400,"PASSWORD",iVar2 + 0x145);
  FUN_0083a980(&local_408,0x400,&DAT_0089e98c,*(undefined1 *)(iVar2 + 0x173));
  FUN_0083a980(&local_408,0x400,"EVHASH",*(undefined4 *)(iVar2 + 0x18c));
  FUN_0083a980(&local_408,0x400,"TRKDIR",*(undefined1 *)(iVar2 + 0x191));
  iVar2 = FUN_00460c50(&local_408);
  pvVar3 = _malloc(iVar2 + 1);
  *(void **)(param_1 + 0x20) = pvVar3;
  FUN_00460c70(pvVar3,&local_408);
  return param_1;
}

