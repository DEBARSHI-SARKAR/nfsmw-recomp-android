/* speed.exe 0079b0e0 FUN_0079b0e0; analysis pseudocode, not buildable source.
 * calls 0083a980 FUN_0083a980
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 */

undefined4 __thiscall
FUN_0079b0e0(int param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 local_408;
  undefined4 local_407;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) || (*(int *)(param_1 + 8) != -1)) {
    return 0xffffffff;
  }
  iVar1 = FUN_00794f80();
  iVar3 = *(int *)(iVar1 + 0x40);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x676a6f69)) {
    for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] == 0x676a6f69) {
        iVar3 = puVar4[8];
        goto LAB_0079b144;
      }
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x20);
LAB_0079b144:
    if (iVar3 != -1) {
      return 0xffffffff;
    }
  }
  iVar1 = FUN_00794f80();
  iVar3 = *(int *)(iVar1 + 0x40);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x67637265)) {
    for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] == 0x67637265) {
        iVar3 = puVar4[8];
        goto LAB_0079b184;
      }
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x20);
LAB_0079b184:
    if (iVar3 != -1) {
      return 0xffffffff;
    }
  }
  local_408 = 0;
  puVar4 = &local_407;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_0083c880(&local_408,0x400,&DAT_008b4cbc,param_2);
  FUN_0083a980(&local_408,0x400,"MAXSIZE",DAT_0089f6fc);
  FUN_0083a980(&local_408,0x400,"MINSIZE",*(undefined1 *)(param_3 + 4));
  uVar2 = 0;
  if (*(char *)(param_3 + 0xd) == '\x01') {
    uVar2 = 0x40000;
  }
  FUN_0083a980(&local_408,0x400,"SYSFLAGS",uVar2);
  uVar7 = 0;
  pcVar6 = FUN_0079aa50;
  puVar5 = &local_408;
  uVar2 = 0x67637265;
  FUN_00794f80(0x67637265,puVar5,FUN_0079aa50,param_1,param_4,param_5,0);
  uVar2 = FUN_00793340(uVar2,puVar5,pcVar6,param_1,param_4,param_5,uVar7);
  return uVar2;
}

