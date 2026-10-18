/* speed.exe 00798630 FUN_00798630; analysis pseudocode, not buildable source.
 * calls 0083a980 FUN_0083a980
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00793340 FUN_00793340
 * calls 0056e340 FUN_0056e340
 * calls 0083c880 FUN_0083c880
 */

undefined4 __thiscall FUN_00798630(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined1 local_60;
  undefined4 local_5f;
  
  if (*(int *)(param_1 + 8) == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00794f80();
  iVar3 = *(int *)(iVar1 + 0x40);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x6764656c)) {
    for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] == 0x6764656c) {
        iVar3 = puVar4[8];
        goto LAB_00798677;
      }
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x20);
LAB_00798677:
    if (iVar3 != -1) {
      return 0xffffffff;
    }
  }
  iVar1 = FUN_00794f80();
  iVar3 = *(int *)(iVar1 + 0x40);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x676c6561)) {
    for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] == 0x676c6561) {
        iVar3 = puVar4[8];
        goto LAB_007986b7;
      }
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x20);
LAB_007986b7:
    if (iVar3 != -1) {
      return 0xffffffff;
    }
  }
  local_60 = 0;
  puVar4 = &local_5f;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_0083c880(&local_60,0x60,&DAT_008b4cbc,param_1 + 0xc);
  if (param_4 == '\x01') {
    FUN_0083a980(&local_60,0x60,"FORCE",1);
  }
  uVar2 = FUN_0056e340(param_1 + 0x40);
  iVar3 = FUN_00460d20(uVar2);
  uVar2 = 0;
  pcVar7 = FUN_007961b0;
  puVar6 = &local_60;
  if (iVar3 != 0) {
    uVar5 = 0x676c6561;
    FUN_00794f80(0x676c6561,puVar6,FUN_007961b0,param_1,param_2,param_3,0);
    uVar2 = FUN_00793340(uVar5,puVar6,pcVar7,param_1,param_2,param_3,uVar2);
    return uVar2;
  }
  uVar5 = 0x6764656c;
  FUN_00794f80(0x6764656c);
  uVar2 = FUN_00793340(uVar5,puVar6,pcVar7,param_1,param_2,param_3,uVar2);
  return uVar2;
}

