/* speed.exe 0079eb70 FUN_0079eb70; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 004647c0 FUN_004647c0
 * calls 0083a980 FUN_0083a980
 * calls 00844a50 FUN_00844a50
 * calls 0045da30 FUN_0045da30
 * calls 00794f80 FUN_00794f80
 * calls 00572fc0 FUN_00572fc0
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083acd0 FUN_0083acd0
 * calls 0078bf10 FUN_0078bf10
 * calls 00798790 FUN_00798790
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_0079eb70(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 local_49c;
  undefined1 local_498;
  undefined4 local_497;
  undefined1 local_478;
  undefined1 local_450;
  undefined4 local_44f;
  undefined1 local_408;
  undefined4 local_407;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (*(int *)(param_1 + 0x1c) == -1)) {
    iVar1 = FUN_00794f80();
    iVar3 = *(int *)(iVar1 + 0x40);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x756a6f69)) {
      for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[2] == 0x756a6f69) {
          iVar3 = puVar4[8];
          goto LAB_0079ec10;
        }
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x20);
LAB_0079ec10:
      if (iVar3 != -1) goto LAB_0079ee25;
    }
    iVar1 = FUN_00794f80();
    iVar3 = *(int *)(iVar1 + 0x40);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x75637265)) {
      for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[2] == 0x75637265) {
          iVar3 = puVar4[8];
          goto LAB_0079ec50;
        }
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x20);
LAB_0079ec50:
      if (iVar3 != -1) goto LAB_0079ee25;
    }
    FUN_00572fc0();
    iVar3 = DAT_009b9d10;
    local_498 = 0;
    puVar4 = &local_497;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    DAT_009b9d10 = DAT_009b9d10 + 1;
    uVar2 = FUN_0045da30(99,param_2);
    FUN_004647c0(&local_498,"%d%02d.%s",iVar3,uVar2);
    local_408 = 0;
    puVar4 = &local_407;
    for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    local_478 = 0;
    FUN_0083c880(&local_408,0x400,&DAT_008b4cbc,&local_498);
    FUN_0083a980(&local_408,0x400,&DAT_008aeb6c,DAT_0089f6fc);
    FUN_0083a980(&local_408,0x400,&DAT_008b6f04,0);
    FUN_0083a980(&local_408,0x400,"UPDATES",0);
    FUN_0083acd0(&local_408,0x400,"SYSFLAGS",&DAT_00400800);
    local_49c = 0;
    FUN_0078bf10(&local_49c);
    FUN_0083acd0(&local_408,0x400,"CUSTFLAGS",local_49c);
    local_450 = 0;
    puVar4 = &local_44f;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    FUN_00798790(&local_450,0x40);
    FUN_0083c880(&local_408,0x400,"PARAMS",&local_450);
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = FUN_00794f80(0x18,&LAB_0078c110,param_1);
      uVar2 = FUN_00844a50(*(undefined4 *)(iVar3 + 0x38));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    uVar7 = 0;
    puVar6 = &LAB_0079dfc0;
    puVar5 = &local_408;
    uVar2 = 0x75637265;
    FUN_00794f80(0x75637265,puVar5,&LAB_0079dfc0,param_1,param_3,param_4,0);
    uVar2 = FUN_00793340(uVar2,puVar5,puVar6,param_1,param_3,param_4,uVar7);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return uVar2;
  }
LAB_0079ee25:
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

