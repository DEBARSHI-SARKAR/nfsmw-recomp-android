/* speed.exe 00823804 FUN_00823804; analysis pseudocode, not buildable source.
 * calls 0081ec32 FUN_0081ec32
 * calls 008219bb FUN_008219bb
 * calls 0081eb58 FUN_0081eb58
 * calls 008262da FUN_008262da
 * calls 00826377 FUN_00826377
 * calls 0082636a FUN_0082636a
 * calls 0081f6c3 FUN_0081f6c3
 * calls 0081f413 FUN_0081f413
 * calls 00822548 FUN_00822548
 * calls 008218a0 FUN_008218a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00823804(undefined2 param_1,undefined2 param_2,undefined4 param_3,char *param_4,int param_5,
            short param_6,int param_7,int param_8)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  bool bVar15;
  undefined1 local_2c;
  undefined2 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  cVar1 = param_4[1];
  local_10 = (int)param_4[5];
  local_18 = 0;
  while( true ) {
    local_c = 0xfffffff7;
    do {
      iVar7 = FUN_00822548(&local_18,param_5);
      if (iVar7 == 0) {
        return local_c;
      }
      FUN_0081ec32(iVar7,&local_20,&local_1c);
      local_14 = FUN_0081f413((int)*(char *)(param_5 + 3),(int)*(char *)(param_5 + 0xc),&local_c,
                              local_20,local_1c);
    } while (local_14 < 0);
    iVar11 = (int)*(char *)(param_5 + 0x11);
    iVar12 = local_14 * 0x90;
    iVar13 = iVar12 + DAT_009c21f4;
    if (*(char *)(param_5 + 0x12) != '\0') {
      iVar8 = FUN_00826377((int)*(char *)(param_5 + 0x12));
      iVar11 = iVar11 + iVar8;
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      else if (0x7f < iVar11) {
        iVar11 = 0x7f;
      }
    }
    uVar5 = FUN_0082636a(iVar11);
    *(undefined2 *)(iVar13 + 0x4c) = uVar5;
    sVar6 = *(short *)(param_5 + 4);
    *(short *)(iVar13 + 0x88) = sVar6;
    sVar6 = sVar6 + (param_6 - *(char *)(param_5 + 0xd)) * 100;
    *(short *)(iVar13 + 0x88) = sVar6;
    if (param_8 != 0) {
      *(short *)(iVar13 + 0x88) = sVar6 + (short)param_8;
    }
    if (*(short *)(param_5 + 6) != 0) {
      sVar6 = FUN_00826377((int)*(short *)(param_5 + 6));
      *(short *)(iVar13 + 0x88) = *(short *)(iVar13 + 0x88) + sVar6;
    }
    *(undefined4 *)(iVar13 + 0x78) = *(undefined4 *)(param_5 + 0x24);
    iVar11 = (int)*(char *)(param_5 + 0x14);
    if (*(char *)(param_5 + 0x15) != '\0') {
      iVar8 = FUN_00826377((int)*(char *)(param_5 + 0x15));
      iVar11 = iVar11 + iVar8;
    }
    if (0x7f < iVar11) {
      iVar11 = 0x7f;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    *(short *)(iVar13 + 0x86) = *(char *)(param_5 + 0x10) * 100;
    *(char *)(iVar13 + 0x68) = cVar1;
    *(undefined4 *)(iVar13 + 0x70) = *(undefined4 *)(param_5 + 0x28);
    *(int *)(iVar13 + 0x40) = (int)*(char *)(param_5 + 0x1a) << 0x10;
    iVar8 = **(int **)(iVar13 + 0x70);
    *(int *)(iVar13 + 0x44) = iVar8;
    if (iVar8 < 0) {
      *(undefined4 *)(iVar13 + 0x44) = 0x7fffffff;
    }
    *(int *)(iVar13 + 0x3c) =
         ((*(int **)(iVar13 + 0x70))[1] * 0x10000 - *(int *)(iVar13 + 0x40)) /
         *(int *)(iVar13 + 0x44);
    *(undefined4 *)(iVar13 + 0x80) = *(undefined4 *)(param_5 + 0x30);
    *(undefined1 *)(iVar13 + 0x6a) = *(undefined1 *)(param_5 + 0x1d);
    *(undefined2 *)(iVar13 + 0x84) = *(undefined2 *)(param_5 + 0x54);
    if (*(char *)(param_5 + 0x1c) == '\0') {
      *(undefined1 *)(iVar13 + 0x6b) = 0;
    }
    else {
      uVar9 = FUN_0081eb58();
      *(char *)(iVar13 + 0x6b) = (char)(uVar9 % (uint)(int)*(char *)(param_5 + 0x1c));
    }
    if (*(char *)(param_5 + 0x1e) == '\0') {
      *(undefined1 *)(iVar13 + 0x6c) = 0;
    }
    else {
      uVar9 = FUN_0081eb58();
      *(char *)(iVar13 + 0x6c) = (char)(uVar9 % (uint)*(byte *)(param_5 + 0x1d));
    }
    *(undefined2 *)(iVar13 + 0x6e) = *(undefined2 *)(param_4 + 0xe);
    uVar5 = *(undefined2 *)(param_4 + 0xc);
    *(undefined2 *)(iVar13 + 0x8a) = 0;
    *(undefined2 *)(iVar13 + 0x8c) = uVar5;
    FUN_008219bb(local_14);
    *(undefined2 *)(iVar13 + 0x12) = param_1;
    *(undefined2 *)(iVar13 + 0x10) = param_2;
    *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(param_5 + 0x60);
    *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(param_5 + 0x58);
    *(undefined2 *)(iVar13 + 0x20) = *(undefined2 *)(param_5 + 0x56);
    *(undefined1 *)(iVar13 + 0x22) = *(undefined1 *)(param_5 + 0x13);
    *(undefined1 *)(iVar13 + 0x23) = *(undefined1 *)(param_5 + 3);
    iVar8 = (int)*(char *)(param_5 + 3);
    fVar4 = (float)(int)*param_4 * _DAT_00890bf0;
    local_8 = 0;
    if (0 < iVar8) {
      do {
        iVar10 = (int)*(short *)(iVar13 + 4 + local_8 * 2);
        *(short *)(iVar13 + 0x50 + local_8 * 2) =
             *(short *)(param_5 + 0xbc + local_8 * 2) -
             *(short *)((int)&DAT_009c21f4 + (local_8 + iVar8 * 6) * 2);
        local_28 = (undefined2)iVar7;
        iVar8 = iVar10 * 0x90 + DAT_009c21f4;
        *(undefined2 *)(iVar8 + 0x24) = local_28;
        local_2c = (undefined1)((iVar11 * param_7) / 0x7f);
        *(undefined1 *)(iVar8 + 0x2b) = local_2c;
        *(char *)(iVar8 + 0x5f) = param_4[4];
        *(float *)(iVar8 + 0x38) = fVar4;
        *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(param_5 + 0x20);
        *(undefined4 *)(iVar8 + 0x30) = 0;
        *(undefined1 *)(iVar8 + 0x5c) = *(undefined1 *)(param_5 + 0xf);
        *(undefined1 *)(iVar8 + 0x5e) = *(undefined1 *)(param_5 + 0xe);
        *(undefined1 *)(iVar8 + 0x5d) = 0;
        *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar13 + 0x40);
        *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(iVar13 + 0x44);
        *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(iVar13 + 0x3c);
        *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar13 + 0x70);
        *(undefined1 *)(iVar8 + 0x69) = *(undefined1 *)(param_5 + 0x1b);
        *(undefined1 *)(iVar8 + 0x6b) = *(undefined1 *)(iVar13 + 0x6b);
        *(undefined4 *)(iVar8 + 0x7c) = *(undefined4 *)(param_5 + 0x2c);
        FUN_008218a0(iVar10);
        bVar15 = local_8 == 5;
        local_8 = local_8 + 1;
        *(bool *)(iVar8 + 0x4e) = bVar15;
        iVar8 = (int)*(char *)(param_5 + 3);
      } while (local_8 < iVar8);
    }
    cVar2 = *(char *)(param_5 + 3);
    if (cVar2 == '\x01') {
      *(short *)(iVar13 + 0x1c) =
           *(short *)(iVar13 + 0x50) + *(short *)(param_4 + 8) + *(short *)(iVar13 + 0x4c);
      *(undefined2 *)(iVar13 + 0x1e) = *(undefined2 *)(param_4 + 10);
    }
    else {
      local_8 = 0;
      iVar7 = DAT_009c1fdc * 6;
      if (0 < cVar2) {
        psVar14 = (short *)(iVar13 + 0x50);
        do {
          bVar3 = (&DAT_008c5caa)[local_8 + (cVar2 + iVar7) * 6];
          iVar11 = psVar14[-0x26] * 0x90 + DAT_009c21f4;
          *(ushort *)(iVar11 + 0x1c) = (ushort)bVar3 * 0x100;
          sVar6 = *psVar14;
          *(undefined2 *)(iVar11 + 0x1e) = 0;
          local_8 = local_8 + 1;
          *(ushort *)(iVar11 + 0x1c) = sVar6 + (ushort)bVar3 * 0x100;
          psVar14 = psVar14 + 1;
        } while (local_8 < *(char *)(param_5 + 3));
      }
    }
    local_8 = 0;
    fVar4 = (float)local_10 * _DAT_00890bf0;
    if ('\0' < *(char *)(param_5 + 3)) {
      psVar14 = (short *)(iVar13 + 4);
      do {
        iVar7 = *psVar14 * 0x90 + DAT_009c21f4;
        *(undefined1 *)(iVar7 + 0x60) = (undefined1)local_10;
        iVar11 = 0;
        if (0 < DAT_0090bd18) {
          do {
            *(float *)(*(int *)(iVar7 + 100) + iVar11 * 4) = fVar4;
            iVar11 = iVar11 + 1;
          } while (iVar11 < DAT_0090bd18);
        }
        local_8 = local_8 + 1;
        psVar14 = psVar14 + 1;
      } while (local_8 < *(char *)(param_5 + 3));
    }
    iVar7 = FUN_008262da(param_5,param_3,local_14,*(undefined2 *)(param_4 + 0xe),
                         *(undefined2 *)(param_4 + 0x14),*(undefined2 *)(param_4 + 0x16));
    if (-1 < iVar7) break;
    iVar7 = 0;
    if ('\0' < *(char *)(param_5 + 3)) {
      iVar12 = iVar12 + 4;
      do {
        FUN_0081f6c3((int)*(short *)(iVar12 + DAT_009c21f4));
        iVar7 = iVar7 + 1;
        iVar12 = iVar12 + 2;
      } while (iVar7 < *(char *)(param_5 + 3));
    }
  }
  return local_c;
}

