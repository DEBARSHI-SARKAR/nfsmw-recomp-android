/* speed.exe 00798f10 FUN_00798f10; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460ca0 FUN_00460ca0
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_00798f10(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*param_1 != '\0') {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0xffffffff;
  }
  FUN_00460ca0(param_1,param_2,0xf);
  local_40 = 0;
  puVar2 = &local_3f;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c880(&local_40,0x40,&DAT_008b6d40,param_2);
  uVar6 = 0;
  pcVar5 = FUN_00796c20;
  puVar4 = &local_40;
  uVar3 = 0x63706572;
  FUN_00794f80(0x63706572,puVar4,FUN_00796c20,param_1,param_3,param_4,0);
  uVar3 = FUN_00793340(uVar3,puVar4,pcVar5,param_1,param_3,param_4,uVar6);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar3;
}

