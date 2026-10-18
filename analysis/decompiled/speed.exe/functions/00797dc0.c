/* speed.exe 00797dc0 FUN_00797dc0; analysis pseudocode, not buildable source.
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
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

int __fastcall FUN_00797dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00794f80();
  iVar5 = *(int *)(iVar1 + 0x40);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 8) != 0x736e6170)) {
    for (puVar6 = *(undefined4 **)(iVar1 + 0x30); puVar6 != (undefined4 *)(iVar1 + 0x30);
        puVar6 = (undefined4 *)*puVar6) {
      if (puVar6[2] == 0x736e6170) {
        iVar5 = puVar6[8];
        goto LAB_00797e28;
      }
    }
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x20);
LAB_00797e28:
    if (iVar5 != -1) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return -1;
    }
  }
  iVar5 = 0xe;
  do {
    iVar1 = -1;
    if ((iVar5 < 0xe) || (0x11 < iVar5)) {
      if ((iVar5 < 0x12) || (0x15 < iVar5)) {
        if ((0x15 < iVar5) && (iVar5 < 0x1b)) {
          iVar1 = 0xd;
        }
      }
      else {
        iVar1 = 0xc;
      }
    }
    else {
      iVar1 = 0xb;
    }
    if (*(int *)(param_1 + -0x10 + iVar1 * 4) == 0) {
      uVar2 = 0xffffffff;
      if ((iVar5 < 0xe) || (0x11 < iVar5)) {
        if ((iVar5 < 0x12) || (0x15 < iVar5)) {
          if ((0x15 < iVar5) && (iVar5 < 0x1b)) {
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
      *(int *)(param_1 + -0x10 + iVar1 * 4) = iVar3;
      if (iVar3 == 0) {
        FUN_00795060();
        goto LAB_00797f2b;
      }
      FUN_0083e3e0(iVar3,0,0,&LAB_0078b8b0);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1b);
  iVar5 = FUN_00794f80();
  *(undefined1 *)(iVar5 + 0x4c) = 1;
  local_40 = 0;
  puVar6 = &local_3f;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  iVar1 = 0xe;
  iVar5 = 0;
  do {
    iVar3 = -1;
    if ((iVar1 < 0xe) || (0x11 < iVar1)) {
      if ((iVar1 < 0x12) || (0x15 < iVar1)) {
        if ((0x15 < iVar1) && (iVar1 < 0x1b)) {
          iVar3 = 0xd;
        }
      }
      else {
        iVar3 = 0xc;
      }
    }
    else {
      iVar3 = 0xb;
    }
    iVar4 = iVar5;
    if (*(char *)(iVar3 + 0x83 + param_1) != '\x01') {
      uVar2 = 0xffffffff;
      local_40 = 0;
      if ((iVar1 < 0xe) || (0x11 < iVar1)) {
        if ((iVar1 < 0x12) || (0x15 < iVar1)) {
          if ((0x15 < iVar1) && (iVar1 < 0x1b)) {
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
      FUN_0083c9b0(&local_40,0x40,"INDEX=%d CHAN=%d START=0 RANGE=100",iVar1,uVar2);
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      pcVar8 = FUN_00795180;
      puVar7 = &local_40;
      uVar2 = 0x736e6170;
      iVar3 = param_1;
      FUN_00794f80(0x736e6170,puVar7,FUN_00795180,param_1,0,0,0);
      iVar4 = FUN_00793340(uVar2,puVar7,pcVar8,iVar3,uVar9,uVar10,uVar11);
      if (iVar4 < 0) {
        iVar1 = FUN_00794f80();
        *(undefined1 *)(iVar1 + 0x4c) = 0;
        FUN_00794f80(iVar5);
        FUN_00793220(iVar5);
LAB_00797f2b:
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        return -1;
      }
    }
    iVar1 = iVar1 + 1;
    iVar5 = iVar4;
    if (0x1a < iVar1) {
      iVar5 = FUN_00794f80();
      *(undefined1 *)(iVar5 + 0x4c) = 0;
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return iVar4;
    }
  } while( true );
}

