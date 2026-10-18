/* speed.exe 007976f0 FUN_007976f0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00844a50 FUN_00844a50
 * calls 00794f80 FUN_00794f80
 * calls 0083c9b0 FUN_0083c9b0
 * calls 00793340 FUN_00793340
 * calls 0083e3e0 FUN_0083e3e0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00795060 FUN_00795060
 * calls 00793220 FUN_00793220
 * calls 0078b8c0 FUN_0078b8c0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

int __thiscall FUN_007976f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if ((param_2 < 1) || (0x27 < param_2)) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return -1;
  }
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x736e6170)) {
    for (puVar4 = *(undefined4 **)(iVar1 + 0x30); puVar4 != (undefined4 *)(iVar1 + 0x30);
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] == 0x736e6170) {
        iVar2 = puVar4[8];
        goto LAB_00797757;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20);
LAB_00797757:
    if (iVar2 != -1) goto LAB_00797798;
  }
  iVar2 = FUN_0078b8c0(param_2,0);
  if (*(int *)(param_1 + -0x10 + iVar2 * 4) == 0) {
    iVar1 = FUN_00794f80(iVar2,FUN_007950f0,param_1);
    iVar1 = FUN_00844a50(*(undefined4 *)(iVar1 + 0x38));
    *(int *)(param_1 + -0x10 + iVar2 * 4) = iVar1;
    if (iVar1 == 0) {
      FUN_00795060();
LAB_00797798:
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return -1;
    }
    FUN_0083e3e0(iVar1,0,0,&LAB_0078b8b0);
  }
  iVar1 = FUN_0078b8c0(param_2,1);
  if (*(int *)(param_1 + -0x10 + iVar1 * 4) == 0) {
    iVar3 = FUN_00794f80(iVar1,FUN_007950f0,param_1);
    iVar3 = FUN_00844a50(*(undefined4 *)(iVar3 + 0x38));
    *(int *)(param_1 + -0x10 + iVar1 * 4) = iVar3;
    if (iVar3 == 0) {
      FUN_00795060();
      goto LAB_00797808;
    }
    FUN_0083e3e0(iVar3,0,0,&LAB_0078b8b0);
  }
  if ((*(char *)(iVar2 + 0x83 + param_1) == '\x01') && (*(char *)(param_1 + 0x83 + iVar1) == '\x01')
     ) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0;
  }
  local_40 = 0;
  puVar4 = &local_3f;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  iVar3 = FUN_00794f80();
  *(undefined1 *)(iVar3 + 0x4c) = 1;
  FUN_0083c9b0(&local_40,0x40,"INDEX=%d CHAN=%d RANGE=1 FIND=$",param_2,iVar1);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  pcVar7 = FUN_00795180;
  puVar6 = &local_40;
  uVar5 = 0x736e6170;
  iVar1 = param_1;
  FUN_00794f80(0x736e6170,puVar6,FUN_00795180,param_1,0,0,0);
  iVar1 = FUN_00793340(uVar5,puVar6,pcVar7,iVar1,uVar8,uVar9,uVar10);
  if (-1 < iVar1) {
    local_40 = 0;
    FUN_0083c9b0(&local_40,0x40,"INDEX=%d CHAN=%d START=0 RANGE=100",param_2,iVar2);
    uVar8 = 0;
    pcVar7 = FUN_00795180;
    puVar6 = &local_40;
    uVar5 = 0x736e6170;
    FUN_00794f80(0x736e6170,puVar6,FUN_00795180,param_1,param_3,param_4,0);
    iVar2 = FUN_00793340(uVar5,puVar6,pcVar7,param_1,param_3,param_4,uVar8);
    if (iVar2 < 0) {
      FUN_00794f80(iVar1);
      FUN_00793220(iVar1);
    }
    iVar1 = FUN_00794f80();
    *(undefined1 *)(iVar1 + 0x4c) = 0;
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return iVar2;
  }
  iVar2 = FUN_00794f80();
  *(undefined1 *)(iVar2 + 0x4c) = 0;
LAB_00797808:
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return -1;
}

