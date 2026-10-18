/* speed.exe 0079b260 FUN_0079b260; analysis pseudocode, not buildable source.
 * calls 00793b50 FUN_00793b50
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 00796d30 FUN_00796d30
 * calls 0083c880 FUN_0083c880
 */

undefined4 __thiscall
FUN_0079b260(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 local_60;
  undefined4 local_5f;
  
  if (*(int *)(param_1 + 8) != -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x676a6f69)) {
    for (puVar3 = *(undefined4 **)(iVar1 + 0x30); puVar3 != (undefined4 *)(iVar1 + 0x30);
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == 0x676a6f69) {
        iVar2 = puVar3[8];
        goto LAB_0079b2a8;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20);
LAB_0079b2a8:
    if (iVar2 != -1) {
      return 0xffffffff;
    }
  }
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x67637265)) {
    for (puVar3 = *(undefined4 **)(iVar1 + 0x30); puVar3 != (undefined4 *)(iVar1 + 0x30);
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == 0x67637265) {
        iVar2 = puVar3[8];
        goto LAB_0079b2e5;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20);
LAB_0079b2e5:
    if (iVar2 != -1) {
      return 0xffffffff;
    }
  }
  FUN_00796d30();
  FUN_00793b50();
  local_60 = 0;
  puVar3 = &local_5f;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  DAT_009b416c = 0;
  FUN_0083c880(&local_60,0x60,&DAT_008b4cbc,param_2);
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_0083c880(&local_60,0x60,&DAT_008b6d24,param_3);
  }
  uVar7 = 0;
  pcVar6 = FUN_0079aa50;
  puVar5 = &local_60;
  uVar4 = 0x676a6f69;
  FUN_00794f80(0x676a6f69,puVar5,FUN_0079aa50,param_1,param_4,param_5,0);
  uVar4 = FUN_00793340(uVar4,puVar5,pcVar6,param_1,param_4,param_5,uVar7);
  return uVar4;
}

