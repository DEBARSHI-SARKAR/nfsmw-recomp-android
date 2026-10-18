/* speed.exe 00798e00 FUN_00798e00; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_00798e00(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 local_60;
  undefined4 local_5f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  local_60 = 0;
  puVar2 = &local_5f;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  if (param_2 != 0) {
    FUN_0083c880(&local_60,0x60,&DAT_008b4cbc,param_2);
    if (param_3 != 0) {
      FUN_0083c880(&local_60,0x60,&DAT_008b6d24,param_3);
    }
  }
  uVar6 = 0;
  pcVar5 = FUN_007965e0;
  puVar4 = &local_60;
  uVar3 = 0x6d6f7665;
  FUN_00794f80(0x6d6f7665,puVar4,FUN_007965e0,param_1,param_4,param_5,0);
  uVar3 = FUN_00793340(uVar3,puVar4,pcVar5,param_1,param_4,param_5,uVar6);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

