/* speed.exe 0079ee50 FUN_0079ee50; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00844a50 FUN_00844a50
 * calls 00793b50 FUN_00793b50
 * calls 00794f80 FUN_00794f80
 * calls 00572fc0 FUN_00572fc0
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_0079ee50(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_60;
  undefined4 local_5f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  if (*(int *)(param_1 + 0x1c) == -1) {
    iVar1 = FUN_00794f80();
    iVar2 = *(int *)(iVar1 + 0x40);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x756a6f69)) {
      for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[2] == 0x756a6f69) {
          iVar2 = puVar4[8];
          goto LAB_0079eed4;
        }
      }
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x20);
LAB_0079eed4:
      if (iVar2 != -1) goto LAB_0079f018;
    }
    iVar1 = FUN_00794f80();
    iVar2 = *(int *)(iVar1 + 0x40);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x75637265)) {
      for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[2] == 0x75637265) {
          iVar2 = puVar4[8];
          goto LAB_0079ef10;
        }
      }
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x20);
LAB_0079ef10:
      if (iVar2 != -1) goto LAB_0079f018;
    }
    FUN_00572fc0();
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar2 = FUN_00794f80(0x18,&LAB_0078c110,param_1);
      uVar3 = FUN_00844a50(*(undefined4 *)(iVar2 + 0x38));
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    FUN_00796d30();
    FUN_00793b50();
    local_60 = 0;
    puVar4 = &local_5f;
    for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    FUN_0083c880(&local_60,0x60,"USERSET0",param_2);
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    puVar5 = &local_60;
    uVar3 = 0x73656c65;
    FUN_00794f80(0x73656c65,puVar5,0,0,0,0,0);
    FUN_00793340(uVar3,puVar5,uVar6,uVar8,uVar9,uVar10,uVar11);
    local_60 = 0;
    FUN_0083c880(&local_60,0x60,&DAT_008b4cbc,param_2);
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      FUN_0083c880(&local_60,0x60,&DAT_008b6d24,param_3);
    }
    uVar6 = 0;
    pcVar7 = FUN_0079e080;
    puVar5 = &local_60;
    uVar3 = 0x756a6f69;
    FUN_00794f80(0x756a6f69,puVar5,FUN_0079e080,param_1,param_4,param_5,0);
    uVar3 = FUN_00793340(uVar3,puVar5,pcVar7,param_1,param_4,param_5,uVar6);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return uVar3;
  }
LAB_0079f018:
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

