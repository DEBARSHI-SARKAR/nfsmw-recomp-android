/* speed.exe 00795770 FUN_00795770; analysis pseudocode, not buildable source.
 * calls 0083acd0 FUN_0083acd0
 * calls 00794f80 FUN_00794f80
 * calls 0083c880 FUN_0083c880
 * calls 00793340 FUN_00793340
 * calls 0083a980 FUN_0083a980
 */

undefined4 FUN_00795770(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_88;
  undefined4 local_87;
  
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (-1 < param_3)) && (param_3 < 6)) {
    uVar2 = 0x10020;
    if (param_3 == 0) {
      uVar2 = 0x10010020;
    }
    else if (param_3 == 1) {
      uVar2 = 0x20010020;
    }
    else if (param_3 == 2) {
      uVar2 = 0x40010020;
    }
    else if (param_3 == 3) {
      uVar2 = 0x10060;
    }
    else if (param_3 == 4) {
      uVar2 = 0x4010020;
    }
    local_88 = 0;
    puVar3 = &local_87;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_0083a980(&local_88,0x80,&DAT_008b6e6c,param_2);
    FUN_0083c880(&local_88,0x80,&DAT_0089e98c,param_1);
    FUN_0083acd0(&local_88,0x80,&DAT_008b6e64,uVar2);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &LAB_00794ff0;
    puVar4 = &local_88;
    uVar2 = 0x6d657367;
    FUN_00794f80(0x6d657367,puVar4,&LAB_00794ff0,0,0,0,0);
    uVar2 = FUN_00793340(uVar2,puVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
    return uVar2;
  }
  return 0xffffffec;
}

