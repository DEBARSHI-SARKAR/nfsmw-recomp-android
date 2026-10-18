/* speed.exe 00795610 FUN_00795610; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083acd0 FUN_0083acd0
 * calls 00794f80 FUN_00794f80
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 00793340 FUN_00793340
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_00795610(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_20 = 0;
  local_1 = 0;
  FUN_0083c880(&local_20,0x20,&DAT_008b6e6c,&DAT_008b6e84);
  FUN_0083acd0(&local_20,0x20,&DAT_008b6e64,0x800a0);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  puVar3 = &LAB_00794ff0;
  puVar2 = &local_20;
  uVar1 = 0x6d657367;
  FUN_00794f80(0x6d657367,puVar2,&LAB_00794ff0,0,0,0,0);
  uVar1 = FUN_00793340(uVar1,puVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}

