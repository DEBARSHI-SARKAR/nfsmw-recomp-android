/* speed.exe 00797c00 FUN_00797c00; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00844a50 FUN_00844a50
 * calls 00794f80 FUN_00794f80
 * calls 0083c9b0 FUN_0083c9b0
 * calls 00793340 FUN_00793340
 * calls 0083e3e0 FUN_0083e3e0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00795060 FUN_00795060
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls 0078b8c0 FUN_0078b8c0
 */

undefined4 __thiscall
FUN_00797c00(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x736e6170)) {
    for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] == 0x736e6170) {
        iVar2 = puVar4[8];
        goto LAB_00797c6a;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20);
LAB_00797c6a:
    if (iVar2 != -1) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return 0xffffffff;
    }
  }
  uVar3 = 0xffffffff;
  if (param_3 == 4) {
    if (param_2 == 0) {
      uVar3 = 0x1b;
    }
    else if (param_2 == 1) {
      uVar3 = 0x1f;
    }
    else if (param_2 == 2) {
      uVar3 = 0x23;
    }
  }
  iVar2 = FUN_0078b8c0(uVar3,param_3);
  if (*(int *)(param_1 + -0x10 + iVar2 * 4) == 0) {
    iVar1 = FUN_00794f80(iVar2,FUN_007950f0,param_1);
    iVar1 = FUN_00844a50(*(undefined4 *)(iVar1 + 0x38));
    *(int *)(param_1 + -0x10 + iVar2 * 4) = iVar1;
    if (iVar1 == 0) {
      FUN_00795060();
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return 0xffffffff;
    }
    FUN_0083e3e0(iVar1,0,0,&LAB_0078b8b0);
  }
  if (*(char *)(iVar2 + 0x83 + param_1) != '\x01') {
    local_40 = 0;
    puVar4 = &local_3f;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    FUN_0083c9b0(&local_40,0x40,"INDEX=%d CHAN=%d START=0 RANGE=2",uVar3,iVar2);
    uVar7 = 0;
    pcVar6 = FUN_00795180;
    puVar5 = &local_40;
    uVar3 = 0x736e6170;
    FUN_00794f80(0x736e6170,puVar5,FUN_00795180,param_1,param_4,param_5,0);
    uVar3 = FUN_00793340(uVar3,puVar5,pcVar6,param_1,param_4,param_5,uVar7);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return uVar3;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0;
}

