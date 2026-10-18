/* speed.exe 00798cb0 FUN_00798cb0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083a980 FUN_0083a980
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_00798cb0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 local_88;
  undefined4 local_87;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*param_2 == '\0') {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0xffffffff;
  }
  local_88 = 0;
  puVar2 = &local_87;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c880(&local_88,0x80,&DAT_008b4cbc,param_2);
  FUN_0083a980(&local_88,0x80,"IGNEXIST",param_2[0x24] == '\0');
  if (param_2[0x25] != '\0') {
    FUN_0083c880(&local_88,0x80,&DAT_008b6d24,param_2 + 0x25);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    FUN_0083a980(&local_88,0x80,&DAT_008b6fc0,*(int *)(param_2 + 0x3c));
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    FUN_0083a980(&local_88,0x80,"FLAGS",*(int *)(param_2 + 0x40));
  }
  uVar6 = 0;
  pcVar5 = FUN_007965e0;
  puVar4 = &local_88;
  uVar3 = 0x726f6f6d;
  FUN_00794f80(0x726f6f6d,puVar4,FUN_007965e0,param_1,param_3,param_4,0);
  uVar3 = FUN_00793340(uVar3,puVar4,pcVar5,param_1,param_3,param_4,uVar6);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

