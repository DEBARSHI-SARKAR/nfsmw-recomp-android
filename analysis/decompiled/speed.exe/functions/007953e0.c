/* speed.exe 007953e0 FUN_007953e0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083acd0 FUN_0083acd0
 * calls 00460c50 FUN_00460c50
 * calls 00794f80 FUN_00794f80
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 00793340 FUN_00793340
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_007953e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_208;
  undefined4 local_207;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00460c50(param_1);
  if (iVar1 == 0) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0xffffffff;
  }
  local_208 = 0;
  puVar2 = &local_207;
  for (iVar1 = 0x7f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c880(&local_208,0x200,&DAT_008b6e6c,param_1);
  if (param_2 == 0) {
    FUN_0083acd0(&local_208,0x200,&DAT_008b6e64,0x80);
  }
  else {
    FUN_0083c880(&local_208,0x200,&DAT_0089e98c,param_2);
  }
  uVar7 = 0;
  uVar6 = 0;
  puVar5 = &LAB_00794ff0;
  puVar4 = &local_208;
  uVar3 = 0x6d657367;
  FUN_00794f80(0x6d657367,puVar4,&LAB_00794ff0,0,param_3,param_4,0);
  uVar3 = FUN_00793340(uVar3,puVar4,puVar5,uVar6,param_3,param_4,uVar7);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

