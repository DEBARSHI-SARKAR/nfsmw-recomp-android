/* speed.exe 007994f0 FUN_007994f0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_007994f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  puVar1 = (undefined4 *)*param_1;
  while ((puVar1 != param_1 && (iVar2 = FUN_00460d20(puVar1 + 4,param_2), iVar2 != 0))) {
    puVar1 = (undefined4 *)*puVar1;
  }
  local_40 = 0;
  puVar3 = &local_3f;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_0083c880(&local_40,0x40,&DAT_008b6d40,param_2);
  uVar7 = 0;
  pcVar6 = FUN_00797140;
  puVar5 = &local_40;
  uVar4 = 0x6f6e6c6e;
  FUN_00794f80(0x6f6e6c6e,puVar5,FUN_00797140,param_1,param_3,param_4,0);
  iVar2 = FUN_00793340(uVar4,puVar5,pcVar6,param_1,param_3,param_4,uVar7);
  puVar1[0x93] = iVar2;
  if (iVar2 != -1) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return puVar1[0x93];
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

