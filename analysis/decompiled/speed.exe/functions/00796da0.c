/* speed.exe 00796da0 FUN_00796da0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_00796da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_88;
  undefined4 local_87;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  local_88 = 0;
  puVar2 = &local_87;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c880(&local_88,0x80,&DAT_008b6d40,param_3);
  uVar6 = 0;
  puVar5 = &LAB_00794ff0;
  puVar4 = &local_88;
  uVar3 = 0x75736572;
  FUN_00794f80(0x75736572,puVar4,&LAB_00794ff0,param_1,param_4,param_5,0);
  uVar3 = FUN_00793340(uVar3,puVar4,puVar5,param_1,param_4,param_5,uVar6);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

