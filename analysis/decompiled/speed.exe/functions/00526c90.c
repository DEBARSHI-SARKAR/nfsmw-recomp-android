/* speed.exe 00526c90 FUN_00526c90; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 004655f0 FUN_004655f0
 * calls 007f3ca0 FUN_007f3ca0
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00660190 FUN_00660190
 * calls 00660200 FUN_00660200
 * calls 005acdd0 FUN_005acdd0
 * calls 005268b0 FUN_005268b0
 * calls 00660320 FUN_00660320
 * calls 00660230 FUN_00660230
 * calls 0056dbb0 FUN_0056dbb0
 * calls 0064c9b0 FUN_0064c9b0
 * calls 005ace40 FUN_005ace40
 */

void FUN_00526c90(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = FUN_0064c9a0();
  if (iVar7 != 0) {
    FUN_00660200(7,8,9);
  }
  FUN_00660320(param_1,9);
  iVar8 = DAT_0091cb20 + 0x54;
  iVar7 = FUN_0064c9b0();
  if (iVar7 != 0) {
    FUN_00660190(iVar8,8,9);
  }
  iVar7 = FUN_0064c9a0();
  if (iVar7 != 0) {
    FUN_00660230(iVar8,8,9);
  }
  uVar3 = *(undefined4 *)(DAT_0091cb20 + 0xc0);
  uVar4 = *(undefined4 *)(DAT_0091cb20 + 0x44);
  iVar7 = FUN_0064c9b0();
  if (iVar7 != 0) {
    FUN_00660190(uVar4,uVar3,9);
  }
  iVar7 = FUN_0064c9a0();
  if (iVar7 != 0) {
    FUN_00660230(uVar4,uVar3,9);
  }
  piVar1 = (int *)(DAT_0091cb20 + 0x54);
  piVar2 = (int *)(DAT_0091cb20 + 0x58);
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  if (((*piVar1 == 0x10d) && (*piVar2 == *(int *)(DAT_0091cb20 + 0xc0))) &&
     (*(int *)(DAT_0091cb20 + 0xbc) == 0)) {
    cVar6 = FUN_005acdd0(*(undefined4 *)(DAT_0091cb20 + 0x44),*(int *)(DAT_0091cb20 + 0xc0),
                         *(undefined4 *)(DAT_0091cb20 + 0x50));
    if (cVar6 == '\0') {
      *(undefined1 *)(DAT_0091cb20 + 0x1a) = 0;
      FUN_007f3ca0(1,0xffffffff);
      FUN_005ace40();
      if (*DAT_0091cadc != -0xd8) {
        for (iVar7 = *(int *)(*DAT_0091cadc + 0xe0); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
          FUN_005b7780(0xf35d144e,0,iVar7,0xffffffff,0);
        }
      }
    }
    else {
      FUN_0056dbb0();
      if (*(int *)(DAT_0091cb20 + 0x50) != 0) {
        if (*(int *)(DAT_0091cb20 + 0x44) != 0) {
          FUN_004655f0(*(int *)(DAT_0091cb20 + 0x44));
          *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
        }
        if (*DAT_0091cadc == -0xd8) {
          return;
        }
        iVar7 = *(int *)(*DAT_0091cadc + 0xe0);
        if (iVar7 == 0) {
          return;
        }
        do {
          FUN_005b7780(0x461a18ee,0,iVar7,0xffffffff,0);
          iVar7 = *(int *)(iVar7 + 4);
        } while (iVar7 != 0);
        return;
      }
      *(undefined1 *)(DAT_0091cf90 + 3) = 1;
      *(undefined1 *)(DAT_0091cb20 + 0x24) = 0;
      if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) == '\0') {
        bVar5 = (byte)DAT_0091cbac;
        if (*DAT_0091cadc != -0xd8) {
          for (iVar7 = *(int *)(*DAT_0091cadc + 0xe0); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            FUN_005b7780((-(uint)((bVar5 & 0xf0) != 0x20) & 0xa15e9e0d) + 0xa4bb7ae1,0,iVar7,
                         0xffffffff,0);
          }
        }
      }
      else {
        if (*(int *)(DAT_0091cb20 + 0x44) != 0) {
          FUN_004655f0(*(int *)(DAT_0091cb20 + 0x44));
          *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
        }
        FUN_005268b0(1);
      }
    }
  }
  else {
    FUN_005ace40();
    if (*DAT_0091cadc != -0xd8) {
      for (iVar7 = *(int *)(*DAT_0091cadc + 0xe0); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
        FUN_005b7780(0xf35d144e,0,iVar7,0xffffffff,0);
      }
    }
  }
  if (*(int *)(DAT_0091cb20 + 0x44) != 0) {
    FUN_004655f0(*(int *)(DAT_0091cb20 + 0x44));
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
  }
  FUN_0056dbb0();
  return;
}

