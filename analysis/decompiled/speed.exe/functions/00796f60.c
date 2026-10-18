/* speed.exe 00796f60 FUN_00796f60; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083a980 FUN_0083a980
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 00649fa0 FUN_00649fa0
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 FUN_00796f60(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  puVar4 = &local_40;
  InterlockedIncrement(&DAT_009b4438);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0xffffffff;
  }
  if ((0xff < param_2) && (param_2 < 0x701)) {
    local_40 = 0;
    puVar3 = &local_3f;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_0083c880(&local_40,0x40,&DAT_008b6d40,param_1);
    uVar1 = FUN_00649fa0();
    FUN_0083c880(&local_40,0x40,&DAT_008b6dd8,uVar1);
    FUN_0083a980(&local_40,0x40,&DAT_008b6f04,param_2);
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &LAB_00794ff0;
    uVar1 = 0x72657074;
    FUN_00794f80(0x72657074,&local_40,&LAB_00794ff0,0,param_3,param_4,0);
    uVar1 = FUN_00793340(uVar1,puVar4,puVar5,uVar6,param_3,param_4,uVar7);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return uVar1;
  }
  return 0xffffffff;
}

