/* speed.exe 005fef30 FUN_005fef30; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 007658a0 FUN_007658a0
 * calls 00788890 FUN_00788890
 * calls 005faf10 FUN_005faf10
 * calls 005faf70 FUN_005faf70
 * calls 0077bba0 FUN_0077bba0
 * calls 005fca40 FUN_005fca40
 * calls 005fad10 FUN_005fad10
 * calls 005fbee0 FUN_005fbee0
 * calls 007862d0 FUN_007862d0
 * calls 0077b9e0 FUN_0077b9e0
 * calls 005fae00 FUN_005fae00
 * calls 0076e220 FUN_0076e220
 * calls 005fe840 FUN_005fe840
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 005fb060 FUN_005fb060
 */

void __fastcall FUN_005fef30(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  char *pcVar7;
  ushort uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  float10 fVar14;
  int local_544;
  char cStack_53d;
  float local_53c;
  int local_538;
  undefined1 local_534 [8];
  undefined1 auStack_52c [264];
  undefined1 auStack_424 [16];
  undefined1 local_414 [16];
  undefined1 local_404 [352];
  char cStack_2a4;
  undefined1 uStack_2a0;
  undefined4 uStack_27c;
  char cStack_268;
  short sStack_266;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087613b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x4504) = 0;
  *(undefined4 *)(param_1 + 0x4484) = 0;
  *(undefined4 *)(param_1 + 0x4488) = 0;
  *(undefined4 *)(param_1 + 0x448c) = 0;
  puVar12 = (undefined4 *)(param_1 + 0x443c);
  for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined1 *)(param_1 + 0x4549) = 0;
  local_544 = param_1;
  FUN_00788890();
  piVar13 = *(int **)(param_1 + 0x1968);
  if ((piVar13 != (int *)0x0) && (cVar3 = FUN_005faf10(), cVar3 != '\0')) {
    DAT_009b3829 = 1;
    iVar4 = FUN_005fca40();
    iVar9 = iVar4 + 2;
    local_538 = iVar9;
    FUN_005fad10(local_414);
    FUN_005fae00(local_534);
    FUN_005faf70(auStack_424 + iVar9 * 0x10);
    FUN_005fb060(&local_544 + iVar9 * 4);
    iVar9 = 0;
    if (0 < iVar4) {
      iVar11 = 0;
      do {
        (**(code **)*piVar13)(iVar9,local_404 + iVar11);
        (**(code **)(*piVar13 + 4))(iVar9,auStack_52c + iVar11);
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 0x10;
        param_1 = local_544;
      } while (iVar9 < iVar4);
    }
    local_53c = 0.0;
    cStack_53d = FUN_005fbee0();
    if (cStack_53d == '\0') {
      local_544 = local_538 + -1;
    }
    else {
      local_544 = local_538;
    }
    iVar9 = 0;
    if (0 < local_544) {
      pfVar10 = (float *)(param_1 + 0x443c);
      do {
        fVar14 = (float10)FUN_005fe840(local_414,local_534,iVar9,iVar9 % (local_538 + -1) + 1);
        *pfVar10 = (float)fVar14;
        iVar9 = iVar9 + 1;
        pfVar10 = pfVar10 + 1;
        local_53c = (float)(fVar14 + (float10)local_53c);
      } while (iVar9 < local_544);
    }
    if (cStack_53d == '\0') {
      *(float *)(param_1 + 0x4484) = local_53c;
      *(float *)(param_1 + 0x4488) = local_53c;
      *(float *)(param_1 + 0x448c) = local_53c;
    }
    else {
      *(float *)(param_1 + 0x448c) = local_53c - *(float *)(param_1 + 0x443c);
      *(float *)(param_1 + 0x4488) = local_53c - *(float *)(param_1 + 0x4438 + local_538 * 4);
      if (piVar13[1] == 0) {
        piVar2 = (int *)piVar13[3];
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          FUN_005fa780(piVar2);
        }
        piVar13 = (int *)piVar13[4];
        if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
          FUN_005fa780(piVar13);
        }
        puVar6 = (uint *)FUN_00454810(0xebdc165,0);
        if (puVar6 == (uint *)0x0) {
          puVar6 = (uint *)FUN_006269b0(4);
        }
        uVar5 = *puVar6;
      }
      else {
        uVar5 = (uint)*(byte *)(piVar13[1] + 0x28);
      }
      local_544 = uVar5 - 1;
      *(float *)(param_1 + 0x4484) =
           (float)local_544 * *(float *)(param_1 + 0x448c) + *(float *)(param_1 + 0x4488);
    }
    FUN_0077b9e0();
    iVar9 = 0;
    uStack_4 = 0;
    iVar4 = local_538 + -1;
    uStack_2a0 = 1;
    uStack_27c = 2;
    FUN_007658a0(6);
    iVar4 = iVar4 * 0x10;
    FUN_007862d0(local_414 + iVar4,local_534 + iVar4,1,0x3f800000);
    if (cStack_2a4 != '\0') {
      iVar4 = 100;
      do {
        FUN_0077bba0(0x3f800000,&DAT_008a2fb4,0);
        iVar11 = DAT_009b38c0;
        puVar1 = (ushort *)(sStack_266 * 0x16 + 10 + DAT_009b38c0);
        *puVar1 = *puVar1 | 0x8000;
        iVar11 = sStack_266 * 0x16 + iVar11;
        uVar8 = *(ushort *)(iVar11 + 10);
        if (cStack_268 == '\x01') {
          uVar8 = uVar8 | 4;
        }
        else {
          uVar8 = uVar8 & 0xfffb;
        }
        iVar4 = iVar4 + -1;
        *(ushort *)(iVar11 + 10) = uVar8;
      } while (iVar4 != 0);
    }
    if (DAT_0091dff8 != 0) {
      iVar4 = DAT_0091dff8;
      if ((*(ushort *)(DAT_0091dff8 + 0x18) & 0x100) != 0) {
LAB_005ff254:
        piVar13 = (int *)(param_1 + 0x4508);
        iVar9 = 0;
        do {
          pcVar7 = (char *)FUN_00454810(0x1bb16f14,0);
          if (pcVar7 == (char *)0x0) {
            pcVar7 = (char *)FUN_006269b0(1);
          }
          if (*pcVar7 == '\0') {
            *piVar13 = iVar4;
            iVar9 = iVar9 + 1;
            piVar13 = piVar13 + 1;
          }
          iVar4 = *(int *)(iVar4 + 0x24);
          while( true ) {
            if (iVar4 == DAT_0091dff8) goto LAB_005ff2a1;
            if ((*(byte *)(iVar4 + 0x19) & 1) != 0) break;
            iVar4 = *(int *)(iVar4 + 0x24);
          }
        } while( true );
      }
      for (iVar4 = *(int *)(DAT_0091dff8 + 0x24); iVar4 != DAT_0091dff8;
          iVar4 = *(int *)(iVar4 + 0x24)) {
        if ((*(ushort *)(iVar4 + 0x18) & 0x100) != 0) goto LAB_005ff254;
      }
    }
LAB_005ff2a1:
    *(int *)(param_1 + 0x4504) = iVar9;
    uStack_4 = 0xffffffff;
    FUN_0076e220();
  }
  ExceptionList = local_c;
  return;
}

