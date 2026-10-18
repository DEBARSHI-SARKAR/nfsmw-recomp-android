/* speed.exe 007954f0 FUN_007954f0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083acd0 FUN_0083acd0
 * calls 00794f80 FUN_00794f80
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 00793340 FUN_00793340
 * calls 0083a980 FUN_0083a980
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_007954f0(undefined4 param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_90;
  undefined4 local_8f;
  undefined1 local_60;
  undefined4 local_5f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  local_90 = 0;
  puVar2 = &local_8f;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083a980(&local_90,0x30,&DAT_008b6d00,param_1);
  FUN_0083a980(&local_90,0x30,"PAUSE",param_2 != '\0');
  FUN_0083a980(&local_90,0x30,"HURRY",param_3);
  local_60 = 0;
  puVar2 = &local_5f;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c880(&local_60,0x60,&DAT_008b6e6c,&local_90);
  FUN_0083acd0(&local_60,0x60,&DAT_008b6e64,0x1000a0);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  puVar5 = &LAB_00794ff0;
  puVar4 = &local_60;
  uVar3 = 0x6d657367;
  FUN_00794f80(0x6d657367,puVar4,&LAB_00794ff0,0,0,0,0);
  uVar3 = FUN_00793340(uVar3,puVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

