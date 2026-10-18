/* speed.exe 0080141b FUN_0080141b; analysis pseudocode, not buildable source.
 * calls 00801332 FUN_00801332
 * calls 007fd022 FUN_007fd022
 * calls 007fe2a1 FUN_007fe2a1
 * calls 00806f24 FUN_00806f24
 * calls 007fd0ef FUN_007fd0ef
 * calls 008012e4 FUN_008012e4
 * calls 007fca60 FUN_007fca60
 * calls 0080139d FUN_0080139d
 * calls 007fca52 FUN_007fca52
 */

undefined4 FUN_0080141b(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int unaff_ESI;
  undefined4 *puVar19;
  
  piVar1 = (int *)(unaff_ESI + 0x4510);
  uVar6 = FUN_0080139d(piVar1,1);
  *(undefined1 *)(unaff_ESI + 0x1ac) = uVar6;
  bVar7 = FUN_0080139d(piVar1,6);
  bVar8 = FUN_0080139d(piVar1,1);
  *(uint *)(unaff_ESI + 0x948) = (uint)bVar8;
  if (*(char *)(unaff_ESI + 0x1ac) != '\0') {
    if ((bVar8 == 0) && (*(byte *)(unaff_ESI + 0x19d) != bVar8)) {
      FUN_008012e4(unaff_ESI + 0x150,*piVar1 + 1);
    }
    else {
      FUN_008012e4(unaff_ESI + 0x150,*piVar1 + 3);
      uVar15 = FUN_0080139d(piVar1,0x10);
      *(undefined4 *)(unaff_ESI + 0x4520) = uVar15;
    }
    uVar15 = FUN_00806f24(unaff_ESI + 0x150,0x80);
    *(undefined4 *)(unaff_ESI + 0x69c) = uVar15;
    if (*(char *)(unaff_ESI + 0x19d) != '\0') {
      cVar9 = FUN_00806f24(unaff_ESI + 0x150,0x80);
      *(char *)(unaff_ESI + 0x4538) = cVar9;
      if (cVar9 != '\0') {
        bVar8 = FUN_00806f24(unaff_ESI + 0x150,0x80);
        *(byte *)(unaff_ESI + 0x4538) = bVar8 | *(char *)(unaff_ESI + 0x4538) << 1;
      }
    }
    goto LAB_008018b6;
  }
  uVar6 = FUN_0080139d(piVar1,5);
  *(undefined1 *)(unaff_ESI + 0x19c) = uVar6;
  uVar6 = FUN_0080139d(piVar1,2);
  *(undefined1 *)(unaff_ESI + 0x19d) = uVar6;
  if (7 < *(byte *)(unaff_ESI + 0x19c)) {
    return 0;
  }
  FUN_007fd022(*(undefined4 *)(unaff_ESI + 0x13c),*(byte *)(unaff_ESI + 0x19c));
  uVar10 = FUN_0080139d(piVar1,1);
  *(uint *)(unaff_ESI + 0x1dc) = uVar10 & 0xff;
  if ((*(int *)(unaff_ESI + 0x948) == 0) && (*(char *)(unaff_ESI + 0x19d) != '\0')) {
    FUN_008012e4(unaff_ESI + 0x150,*piVar1 + 2);
  }
  else {
    FUN_008012e4(unaff_ESI + 0x150,*piVar1 + 4);
    uVar15 = FUN_0080139d(piVar1,0x10);
    *(undefined4 *)(unaff_ESI + 0x4520) = uVar15;
  }
  FUN_007fca52(*(undefined4 *)(unaff_ESI + 0x29c),*(undefined4 *)(unaff_ESI + 0x1dc));
  if (*(int *)(unaff_ESI + 0x1dc) != 0) {
    FUN_007fca60(*(undefined4 *)(unaff_ESI + 0x29c),*(undefined4 *)(unaff_ESI + 0x4948));
  }
  uVar10 = FUN_00801332(unaff_ESI + 0x150,8);
  uVar10 = uVar10 & 0xff;
  uVar18 = uVar10 * 2;
  uVar11 = FUN_00801332(unaff_ESI + 0x150,8);
  uVar11 = uVar11 & 0xff;
  uVar12 = uVar11 * 2;
  uVar13 = FUN_00801332(unaff_ESI + 0x150,8);
  uVar13 = uVar13 & 0xff;
  uVar14 = FUN_00801332(unaff_ESI + 0x150,8);
  uVar14 = uVar14 & 0xff;
  if (*(int *)(unaff_ESI + 0x1cc) == 0) {
    *(undefined4 *)(unaff_ESI + 0x1cc) = 1;
  }
  if (*(int *)(unaff_ESI + 0x1d4) == 0) {
    *(undefined4 *)(unaff_ESI + 0x1d4) = 1;
  }
  iVar17 = *(int *)(unaff_ESI + 0x1f8);
  iVar16 = *(int *)(unaff_ESI + 0x1c8);
  uVar2 = *(uint *)(unaff_ESI + 0x1cc);
  iVar3 = *(int *)(unaff_ESI + 0x1d0);
  iVar4 = *(int *)(unaff_ESI + 500);
  uVar5 = *(uint *)(unaff_ESI + 0x1d4);
  *(uint *)(unaff_ESI + 0x1e0) = uVar14 << 4;
  *(uint *)(unaff_ESI + 0x1e4) = uVar13 << 4;
  if (uVar18 < uVar13 * 2) {
    if (uVar10 * 10 < uVar13 << 3) {
      if (uVar10 * 10 < uVar13 * 6) {
        *(undefined4 *)(unaff_ESI + 0x1d0) = 2;
        *(undefined4 *)(unaff_ESI + 0x1d4) = 1;
      }
      else {
        *(undefined4 *)(unaff_ESI + 0x1d0) = 5;
        *(undefined4 *)(unaff_ESI + 0x1d4) = 3;
      }
    }
    else {
      *(undefined4 *)(unaff_ESI + 0x1d0) = 5;
      *(undefined4 *)(unaff_ESI + 0x1d4) = 4;
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x1d0) = 1;
    *(undefined4 *)(unaff_ESI + 0x1d4) = 1;
  }
  if (uVar12 < uVar14 * 2) {
    if (uVar11 * 10 < uVar14 << 3) {
      if (uVar11 * 10 < uVar14 * 6) {
        *(undefined4 *)(unaff_ESI + 0x1c8) = 2;
        goto LAB_008016ae;
      }
      *(undefined4 *)(unaff_ESI + 0x1c8) = 5;
      *(undefined4 *)(unaff_ESI + 0x1cc) = 3;
    }
    else {
      *(undefined4 *)(unaff_ESI + 0x1c8) = 5;
      *(undefined4 *)(unaff_ESI + 0x1cc) = 4;
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x1c8) = 1;
LAB_008016ae:
    *(undefined4 *)(unaff_ESI + 0x1cc) = 1;
  }
  uVar13 = (*(int *)(unaff_ESI + 0x1c8) * uVar12 * 8) / *(uint *)(unaff_ESI + 0x1cc);
  uVar14 = (*(int *)(unaff_ESI + 0x1d0) * uVar18 * 8) / *(uint *)(unaff_ESI + 0x1d4);
  *(uint *)(unaff_ESI + 0x234) = uVar13;
  *(uint *)(unaff_ESI + 0x238) = uVar14;
  uVar15 = FUN_00801332(unaff_ESI + 0x150,2);
  *(undefined4 *)(unaff_ESI + 0x1d8) = uVar15;
  if ((uVar18 - *(int *)(unaff_ESI + 500) != 0) || (uVar12 != *(uint *)(unaff_ESI + 0x1f8))) {
    *(uint *)(unaff_ESI + 0x1b0) = uVar11 << 4;
    *(uint *)(unaff_ESI + 0x1b4) = uVar10 << 4;
    FUN_007fe2a1();
  }
  if ((*(undefined4 **)(unaff_ESI + 0x264) != (undefined4 *)0x0) &&
     (((uint)(iVar17 * iVar16 * 8) / uVar2 != uVar13 ||
      ((uint)(iVar3 * iVar4 * 8) / uVar5 != uVar14)))) {
    uVar11 = (*(int *)(unaff_ESI + 0x240) + 0x20) * (*(int *)(unaff_ESI + 0x23c) + 0x20);
    puVar19 = *(undefined4 **)(unaff_ESI + 0x264);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar19 = 0;
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
    uVar11 = (*(int *)(unaff_ESI + 0x240) + 0x20) * (*(int *)(unaff_ESI + 0x23c) + 0x20);
    puVar19 = (undefined4 *)(*(int *)(unaff_ESI + 0x264) + uVar11);
    for (uVar10 = uVar11 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar19 = 0x80808080;
      puVar19 = puVar19 + 1;
    }
    for (uVar10 = uVar11 >> 1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar19 = 0x80;
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
  }
  if (*(char *)(unaff_ESI + 0x19d) != '\0') {
    iVar17 = unaff_ESI + 0x150;
    iVar16 = FUN_00806f24(iVar17,0x80);
    if (iVar16 == 0) {
      iVar17 = FUN_00806f24(iVar17,0x80);
      *(bool *)(unaff_ESI + 0x696) = iVar17 != 0;
    }
    else {
      *(undefined1 *)(unaff_ESI + 0x696) = 2;
      iVar16 = FUN_00801332(iVar17,5);
      *(int *)(unaff_ESI + 0x698) = iVar16 << 5;
      uVar6 = FUN_00801332(iVar17,3);
      *(undefined1 *)(unaff_ESI + 0x697) = uVar6;
    }
  }
LAB_008018b6:
  uVar15 = FUN_00806f24(unaff_ESI + 0x150,0x80);
  *(undefined4 *)(unaff_ESI + 0x4524) = uVar15;
  piVar1 = (int *)(unaff_ESI + 0x13c);
  *(uint *)*piVar1 = (uint)bVar7;
  *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(*piVar1 + 0x3c + (uint)bVar7 * 4);
  FUN_007fd0ef(*piVar1,*(undefined1 *)(unaff_ESI + 0x19c));
  return 1;
}

