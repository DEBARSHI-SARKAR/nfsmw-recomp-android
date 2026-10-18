/* speed.exe 0079ca90 FUN_0079ca90; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0079ca30 FUN_0079ca30
 * calls 007960c0 FUN_007960c0
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_0079ca90(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 local_88;
  undefined4 local_87;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (-1 < *(int *)(param_1 + 0x1c))) {
    iVar1 = FUN_0079ca30();
    if ((*(int *)(iVar1 + 8) != -1) && (iVar1 != -8)) {
      pcVar7 = param_2;
      FUN_0079ca30(param_2);
      FUN_007960c0(pcVar7);
    }
    local_88 = 0;
    puVar2 = &local_87;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 2) = 0;
    FUN_0083c880(&local_88,0x80,&DAT_008b4cbc,param_1 + 0x44);
    FUN_0083c880(&local_88,0x80,&DAT_008b6ea8,param_2);
    uVar8 = 0;
    uVar6 = 0;
    puVar5 = &LAB_00794ff0;
    puVar4 = &local_88;
    uVar3 = 0x7561646d;
    FUN_00794f80(0x7561646d,puVar4,&LAB_00794ff0,0,param_3,param_4,0);
    uVar3 = FUN_00793340(uVar3,puVar4,puVar5,uVar6,param_3,param_4,uVar8);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return uVar3;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

