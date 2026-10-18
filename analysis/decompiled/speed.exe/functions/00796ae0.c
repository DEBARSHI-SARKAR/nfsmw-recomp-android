/* speed.exe 00796ae0 FUN_00796ae0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0064bab0 FUN_0064bab0
 * calls 0083c880 FUN_0083c880
 * calls 0064baa0 thunk_FUN_0064a1e0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 FUN_00796ae0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_108;
  undefined4 local_107;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_108 = 0;
    puVar3 = &local_107;
    for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_0083c880(&local_108,0x100,&DAT_008b4cbc,param_1);
    iVar2 = FUN_0064bab0();
    if (iVar2 != 0) {
      uVar1 = FUN_0064bab0();
      FUN_0083c880(&local_108,0x100,&DAT_008b6de0,uVar1);
    }
    iVar2 = thunk_FUN_0064a1e0();
    if (iVar2 != 0) {
      uVar1 = thunk_FUN_0064a1e0();
      FUN_0083c880(&local_108,0x100,&DAT_008b6dd8,uVar1);
    }
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &LAB_00794ff0;
    puVar4 = &local_108;
    uVar1 = 0x6c6f7374;
    FUN_00794f80(0x6c6f7374,puVar4,&LAB_00794ff0,0,param_2,param_3,0);
    uVar1 = FUN_00793340(uVar1,puVar4,puVar5,uVar6,param_2,param_3,uVar7);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return uVar1;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

