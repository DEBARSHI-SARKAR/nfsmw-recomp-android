/* speed.exe 0079cbb0 FUN_0079cbb0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0079ca30 FUN_0079ca30
 * calls 007954f0 FUN_007954f0
 * calls 00794f80 FUN_00794f80
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00790790 FUN_00790790
 * calls 00840aa0 FUN_00840aa0
 * calls 007907d0 FUN_007907d0
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

uint __fastcall FUN_0079cbb0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar3 = FUN_00794f80();
  iVar3 = *(int *)(iVar3 + 0x38);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar4 = FUN_00840aa0(iVar3,0x7374696d);
  if (*(int *)(DAT_0091cf90 + 0x13c) != 0) {
    if ((*(int *)(param_1 + 0x108) != -1) && (*(char *)(param_1 + 0x10c) != '\x01')) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      if (*(uint *)(param_1 + 0x108) <= uVar4) {
        return 0;
      }
      return *(uint *)(param_1 + 0x108) - uVar4;
    }
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return *(uint *)(param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x10d) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0x10d) = 0;
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x108);
    }
    uVar5 = (uint)*(byte *)(param_1 + 0x10c);
    uVar10 = 0;
    FUN_0079a9e0(iVar3,uVar5,0);
    FUN_007954f0(iVar3,uVar5,uVar10);
  }
  iVar3 = FUN_0079ca30();
  uVar5 = (*(int *)(iVar3 + 8) == -1) - 1 & iVar3 + 8U;
  if ((((*(int *)(param_1 + 0x1c) == -1) || (uVar5 == 0)) ||
      (iVar3 = *(int *)(uVar5 + 0x20c), iVar3 < 2)) ||
     (((*(uint *)(uVar5 + 0x164) & 0x80000) != 0 ||
      (iVar3 < (int)(uint)*(byte *)(DAT_0091cf90 + 0x138))))) {
    if (*(int *)(param_1 + 0x108) != -1) {
      uVar9 = 0;
      uVar8 = 1;
      uVar10 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
      FUN_0079a9e0(0xffffffff,1,0);
      FUN_007954f0(uVar10,uVar8,uVar9);
    }
LAB_0079cefe:
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return *(uint *)(param_1 + 0x108);
  }
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar3 = FUN_007907d0(iVar6);
      if (iVar3 != 3) {
        uVar5 = *(uint *)(param_1 + 0x108);
        if (uVar5 != 0xffffffff) {
          if (*(char *)(param_1 + 0x10c) == '\0') {
            if (uVar4 < uVar5) {
              iVar3 = uVar5 - uVar4;
            }
            else {
              iVar3 = 0;
            }
            uVar8 = 0;
            uVar10 = 1;
            *(int *)(param_1 + 0x108) = iVar3;
            *(undefined1 *)(param_1 + 0x10c) = 1;
            FUN_0079a9e0(iVar3,1,0);
            FUN_007954f0(iVar3,uVar10,uVar8);
          }
          *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
        }
        goto LAB_0079cefe;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(uVar5 + 0x20c));
  }
  iVar3 = *(int *)(param_1 + 0x108);
  if ((iVar3 == -1) || (*(char *)(param_1 + 0x10c) == '\x01')) {
    if (*(char *)(param_1 + 0x10c) == '\0') {
      iVar3 = 0x3c;
    }
    uVar8 = 0;
    iVar3 = iVar3 + uVar4;
    uVar10 = 0;
    *(int *)(param_1 + 0x108) = iVar3;
    *(undefined1 *)(param_1 + 0x10c) = 0;
    FUN_0079a9e0(iVar3,0,0);
    FUN_007954f0(iVar3,uVar10,uVar8);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return *(int *)(param_1 + 0x108) - uVar4;
  }
  iVar3 = 0;
  bVar1 = false;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      cVar2 = FUN_00790790(iVar3);
      if (cVar2 != '\0') {
        bVar1 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      bVar1 = false;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  uVar5 = *(uint *)(param_1 + 0x108);
  if (uVar4 < uVar5) {
    uVar7 = uVar5 - uVar4;
  }
  else {
    uVar7 = 0;
  }
  if (bVar1) {
    if (*(int *)(param_1 + 0x100) != -1) {
      uVar8 = 0xffffffff;
      uVar10 = 0;
      FUN_0079a9e0(uVar5,0,0xffffffff);
      FUN_007954f0(uVar5,uVar10,uVar8);
      DAT_009b41c9 = 1;
    }
    *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x104) == -1) {
      *(uint *)(param_1 + 0x104) = uVar4 + 5;
    }
    if ((*(uint *)(param_1 + 0x104) < uVar4) && (10 < uVar7)) {
      if (*(int *)(param_1 + 0x100) == -1) {
        *(uint *)(param_1 + 0x100) = uVar4 + 10;
        uVar9 = 1;
        DAT_009b41c8 = 1;
        uVar10 = *(undefined4 *)(param_1 + 0x100);
        uVar8 = 0;
        FUN_0079a9e0(uVar10,0,1);
        FUN_007954f0(uVar10,uVar8,uVar9);
      }
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      if (*(uint *)(param_1 + 0x100) <= uVar4) {
        return 0;
      }
      return *(uint *)(param_1 + 0x100) - uVar4;
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar7;
}

