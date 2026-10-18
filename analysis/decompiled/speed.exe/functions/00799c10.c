/* speed.exe 00799c10 FUN_00799c10; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_00799c10(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 local_88;
  undefined4 local_87;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*(char *)(param_1 + 0x22c) == '\x01') {
    puVar3 = (undefined4 *)(param_1 + 8);
    for (iVar2 = 0x89; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0;
  }
  local_88 = 0;
  puVar3 = &local_87;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  uVar1 = FUN_0056e340();
  FUN_0083c880(&local_88,0x80,&DAT_008b6d40,uVar1);
  uVar6 = 0;
  pcVar5 = FUN_00797220;
  puVar4 = &local_88;
  uVar1 = 0x75736572;
  FUN_00794f80(0x75736572,puVar4,FUN_00797220,param_1,param_3,param_4,0);
  uVar1 = FUN_00793340(uVar1,puVar4,pcVar5,param_1,param_3,param_4,uVar6);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}

