/* speed.exe 00798040 FUN_00798040; analysis pseudocode, not buildable source.
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
FUN_00798040(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00794f80();
  iVar4 = *(int *)(iVar1 + 0x40);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 8) != 0x736e6170)) {
    for (puVar5 = *(undefined4 **)(iVar1 + 0x30); puVar5 != (undefined4 *)(iVar1 + 0x30);
        puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[2] == 0x736e6170) {
        iVar4 = puVar5[8];
        goto LAB_007980ae;
      }
    }
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x20);
LAB_007980ae:
    if (iVar4 != -1) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return 0xffffffff;
    }
  }
  iVar4 = -1;
  if (param_3 == 2) {
    if (param_2 == 0) {
      iVar4 = 0xe;
    }
    else if (param_2 == 1) {
      iVar4 = 0x12;
    }
    else if (param_2 == 2) {
      iVar4 = 0x16;
    }
  }
  iVar1 = FUN_0078b8c0(iVar4,param_3);
  if (*(int *)(param_1 + 4 + iVar1 * 4) == 0) {
    uVar2 = 0xffffffff;
    if ((iVar4 < 0xe) || (0x11 < iVar4)) {
      if ((iVar4 < 0x12) || (0x15 < iVar4)) {
        if ((0x15 < iVar4) && (iVar4 < 0x1b)) {
          uVar2 = 0xd;
        }
      }
      else {
        uVar2 = 0xc;
      }
    }
    else {
      uVar2 = 0xb;
    }
    iVar3 = FUN_00794f80(uVar2,FUN_007950f0,param_1);
    iVar3 = FUN_00844a50(*(undefined4 *)(iVar3 + 0x38));
    *(int *)(param_1 + 4 + iVar1 * 4) = iVar3;
    if (iVar3 == 0) {
      FUN_00795060();
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return 0xffffffff;
    }
    FUN_0083e3e0(iVar3,0,0,&LAB_0078b8b0);
  }
  if (*(char *)(iVar1 + 0x88 + param_1) == '\x01') {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0;
  }
  local_40 = 0;
  puVar5 = &local_3f;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  uVar2 = 0xffffffff;
  if ((iVar4 < 0xe) || (0x11 < iVar4)) {
    if ((iVar4 < 0x12) || (0x15 < iVar4)) {
      if ((0x15 < iVar4) && (iVar4 < 0x1b)) {
        uVar2 = 0xd;
      }
    }
    else {
      uVar2 = 0xc;
    }
  }
  else {
    uVar2 = 0xb;
  }
  FUN_0083c9b0(&local_40,0x40,"INDEX=%d CHAN=%d START=0 RANGE=100",iVar4,uVar2);
  uVar8 = 0;
  pcVar7 = FUN_00795180;
  puVar6 = &local_40;
  uVar2 = 0x736e6170;
  FUN_00794f80(0x736e6170,puVar6,FUN_00795180,param_1,param_4,param_5,0);
  uVar2 = FUN_00793340(uVar2,puVar6,pcVar7,param_1,param_4,param_5,uVar8);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar2;
}

