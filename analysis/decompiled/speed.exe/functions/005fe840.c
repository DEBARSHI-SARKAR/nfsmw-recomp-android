/* speed.exe 005fe840 FUN_005fe840; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005c5e80 FUN_005c5e80
 * calls 00765240 FUN_00765240
 * calls 007c4b80 FUN_007c4b80
 * calls 007658a0 FUN_007658a0
 * calls 005d9a10 FUN_005d9a10
 * calls 00788fa0 FUN_00788fa0
 * calls 005fa300 FUN_005fa300
 * calls 005f6990 FUN_005f6990
 * calls 0077bba0 FUN_0077bba0
 * calls 007661d0 FUN_007661d0
 * calls 005f2290 FUN_005f2290
 * calls 00765350 FUN_00765350
 * calls 005f2cd0 FUN_005f2cd0
 * calls 007862d0 FUN_007862d0
 * calls 005e6e40 FUN_005e6e40
 * calls 005f96e0 FUN_005f96e0
 * calls 0077b9e0 FUN_0077b9e0
 * calls 0076e220 FUN_0076e220
 * calls 005fa780 FUN_005fa780
 * calls 005e6e80 FUN_005e6e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005fe840(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  short sVar10;
  undefined4 *puVar11;
  int *piVar12;
  byte bVar13;
  undefined2 extraout_var;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  bool bVar21;
  float10 fVar22;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  undefined4 *local_3c8;
  undefined4 *local_3c4;
  undefined4 local_3c0;
  float local_3bc;
  float local_3b8;
  int *local_3b0;
  int local_3ac;
  uint local_3a8 [2];
  int local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined1 local_37c [8];
  undefined1 local_374 [80];
  char local_324;
  undefined1 local_320;
  int local_2fc;
  short local_2e6;
  undefined2 uStack_2e4;
  undefined2 uStack_2e2;
  int local_94;
  int local_90 [33];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087611c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3a0 = param_1;
  FUN_0077b9e0();
  local_4 = 0;
  local_320 = 1;
  local_2fc = 2;
  FUN_007658a0(6);
  iVar20 = *(int *)(param_1 + 0x1968);
  piVar15 = *(int **)(iVar20 + 0xc);
  if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
    FUN_005fa780(piVar15);
  }
  piVar15 = *(int **)(iVar20 + 0x10);
  if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
    FUN_005fa780(piVar15);
  }
  FUN_005d9a10();
  iVar18 = param_4 * 0x10;
  iVar20 = iVar18 + param_2;
  iVar17 = param_5 * 0x10;
  fVar6 = *(float *)(iVar18 + param_2) - *(float *)(param_2 + iVar17);
  local_3a8[0] = param_2 + iVar17;
  fVar7 = *(float *)(iVar20 + 4) - *(float *)(local_3a8[0] + 4);
  fVar8 = *(float *)(iVar20 + 8) - *(float *)(local_3a8[0] + 8);
  fVar22 = (float10)FUN_005c5e80(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
  local_3b8 = (float)fVar22;
  FUN_007862d0(iVar20,iVar18 + param_3,1,0x3f800000);
  sVar10 = local_2e6;
  if (local_324 == '\0') {
    iVar20 = *(int *)(local_3a0 + 0x1968);
    *(undefined1 *)(local_3a0 + 0x4549) = 1;
    piVar15 = *(int **)(iVar20 + 0xc);
    if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
      FUN_005fa780(piVar15);
    }
    piVar15 = *(int **)(iVar20 + 0x10);
    if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
      FUN_005fa780(piVar15);
    }
    FUN_005d9a10();
  }
  else {
    local_3d0 = 0.0;
    if (param_4 == param_5) {
      local_3bc = (float)*(ushort *)(local_2e6 * 0x16 + 4 + DAT_009b38c0) * _DAT_008f5b50;
      do {
        local_3d4 = (_DAT_0089096c - (float)CONCAT22(uStack_2e2,uStack_2e4)) * local_3bc;
        if (local_3d4 < _DAT_00890dc4) {
          local_3d4 = 0.01;
        }
        FUN_0077bba0(local_3d4,iVar18 + param_3,0);
        local_3d0 = local_3d4 + local_3d0;
      } while (sVar10 == local_2e6);
    }
    local_3b0 = (int *)FUN_005e6e80();
    uVar9 = local_3a8[0];
    *(undefined1 *)((int)local_3b0 + 0x1d) = 1;
    local_3b0[1] = (int)local_3b0;
    *local_3b0 = (int)local_3b0;
    local_3b0[2] = (int)local_3b0;
    local_3ac = 0;
    local_39c = 0x1010101;
    local_398 = 0x1010101;
    local_394 = 0x1010101;
    local_390 = 0x1010101;
    local_38c = 0x1010101;
    local_388 = 0x1010101;
    local_384 = 0x1010101;
    local_3bc = (float)(iVar17 + param_3);
    local_4._0_1_ = 1;
    local_380 = 0x1010101;
    bVar21 = true;
    do {
      local_94 = 0;
      local_2fc = 2;
      FUN_00788fa0(uVar9,local_3bc,&local_39c);
      if (local_2fc != 3) {
        iVar20 = local_3ac;
        if (!bVar21) {
          iVar20 = 0;
        }
        break;
      }
      FUN_00765240(local_374);
      fVar22 = (float10)FUN_007661d0();
      local_3b8 = (float)fVar22;
      bVar13 = FUN_00765350();
      bVar21 = bVar13 == 0xff;
      if (!bVar21) {
        *(undefined1 *)((int)&local_39c + (uint)bVar13) = 0;
      }
      local_3c4 = (undefined4 *)FUN_005e6e40();
      iVar20 = local_94;
      *(undefined1 *)((int)local_3c4 + 0xf) = 1;
      local_3c4[1] = local_3c4;
      *local_3c4 = local_3c4;
      iVar17 = 0;
      local_3c4[2] = local_3c4;
      local_3c0 = 0;
      local_3cc = local_3b8;
      local_4._0_1_ = 2;
      if (0 < local_94) {
        do {
          iVar18 = (uint)*(ushort *)(local_90[0] + iVar17 * 2) * 0x16;
          if ((*(byte *)(iVar18 + 10 + DAT_009b38c0) & 1) == 0) {
            FUN_005f2290(local_3a8,iVar18 + DAT_009b38c0 + 6);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar20);
      }
      FUN_005f96e0(local_37c,&local_3cc);
      local_4._0_1_ = 1;
      FUN_005f2cd0(local_3a8,*local_3c4,local_3c4);
      if (local_3c4 != (undefined4 *)0x0) {
        FUN_005d0370(local_3c4,0x10,0);
      }
      local_3c4 = (undefined4 *)0x0;
      local_3c0 = 0;
      iVar20 = local_3ac;
    } while (!bVar21);
    local_3b8 = local_3d0 + local_3b8;
    if (iVar20 == 0) {
      *(undefined1 *)(local_3a0 + 0x4549) = 1;
    }
    else if (1 < iVar20) {
      piVar15 = (int *)*local_3b0;
      if (piVar15 != local_3b0) {
        piVar16 = local_90;
        do {
          piVar16 = piVar16 + 1;
          *piVar16 = (int)(piVar15 + 3);
          if (*(char *)((int)piVar15 + 0x1d) == '\0') {
            piVar2 = (int *)piVar15[2];
            if (*(char *)((int)piVar2 + 0x1d) == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x1d);
              piVar15 = piVar2;
              piVar2 = (int *)*piVar2;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x1d);
                piVar15 = piVar2;
                piVar2 = (int *)*piVar2;
              }
            }
            else {
              cVar1 = *(char *)(piVar15[1] + 0x1d);
              piVar12 = (int *)piVar15[1];
              piVar2 = piVar15;
              while ((piVar15 = piVar12, cVar1 == '\0' && (piVar2 == (int *)piVar15[2]))) {
                cVar1 = *(char *)(piVar15[1] + 0x1d);
                piVar12 = (int *)piVar15[1];
                piVar2 = piVar15;
              }
            }
          }
        } while (piVar15 != local_3b0);
      }
      local_3d0 = 1.4013e-45;
      if (1 < iVar20) {
        do {
          pfVar3 = (float *)local_90[(int)local_3d0];
          pfVar4 = (float *)local_90[(int)local_3d0 + 1];
          local_3c8 = (undefined4 *)FUN_005e6e40();
          *(undefined1 *)((int)local_3c8 + 0xf) = 1;
          local_3c8[1] = local_3c8;
          *local_3c8 = local_3c8;
          local_3c8[2] = local_3c8;
          local_3c4 = (undefined4 *)0x0;
          puVar19 = (undefined4 *)pfVar4[2];
          puVar14 = (undefined4 *)pfVar3[2];
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_005f6990(local_37c,*puVar14,puVar14,*puVar19,puVar19,&local_3cc,*local_3c8);
          iVar17 = DAT_009b38c8;
          local_3bc = *pfVar4 - *pfVar3;
          puVar19 = (undefined4 *)*local_3c8;
          puVar14 = puVar19;
          fVar6 = _DAT_00890968;
          if (puVar19 != local_3c8) {
            do {
              local_3a8[0] = (uint)*(ushort *)(DAT_009b38c8 + *(short *)(puVar14 + 3) * 8 + 2);
              fVar6 = (float)local_3a8[0] * _DAT_008f5b30 + fVar6;
              if (*(char *)((int)puVar14 + 0xf) == '\0') {
                puVar5 = (undefined4 *)puVar14[2];
                if (*(char *)((int)puVar5 + 0xf) == '\0') {
                  cVar1 = *(char *)((int)*puVar5 + 0xf);
                  puVar14 = puVar5;
                  puVar5 = (undefined4 *)*puVar5;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)((int)*puVar5 + 0xf);
                    puVar14 = puVar5;
                    puVar5 = (undefined4 *)*puVar5;
                  }
                }
                else {
                  cVar1 = *(char *)((int)puVar14[1] + 0xf);
                  puVar11 = (undefined4 *)puVar14[1];
                  puVar5 = puVar14;
                  while ((puVar14 = puVar11, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar14[2])))
                  {
                    cVar1 = *(char *)((int)puVar14[1] + 0xf);
                    puVar11 = (undefined4 *)puVar14[1];
                    puVar5 = puVar14;
                  }
                }
              }
            } while (puVar14 != local_3c8);
            if ((_DAT_00890968 < fVar6) && (puVar19 != local_3c8)) {
              FUN_007c4b80();
              do {
                *(undefined2 *)(iVar17 + *(short *)(puVar19 + 3) * 8) = extraout_var;
                if (*(char *)((int)puVar19 + 0xf) == '\0') {
                  puVar14 = (undefined4 *)puVar19[2];
                  if (*(char *)((int)puVar14 + 0xf) == '\0') {
                    cVar1 = *(char *)((int)*puVar14 + 0xf);
                    puVar19 = puVar14;
                    puVar14 = (undefined4 *)*puVar14;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((int)*puVar14 + 0xf);
                      puVar19 = puVar14;
                      puVar14 = (undefined4 *)*puVar14;
                    }
                  }
                  else {
                    cVar1 = *(char *)((int)puVar19[1] + 0xf);
                    puVar5 = (undefined4 *)puVar19[1];
                    puVar14 = puVar19;
                    while ((puVar19 = puVar5, cVar1 == '\0' && (puVar14 == (undefined4 *)puVar19[2])
                           )) {
                      cVar1 = *(char *)((int)puVar19[1] + 0xf);
                      puVar5 = (undefined4 *)puVar19[1];
                      puVar14 = puVar19;
                    }
                  }
                }
                iVar17 = DAT_009b38c8;
              } while (puVar19 != local_3c8);
            }
          }
          local_4._0_1_ = 1;
          FUN_005f2cd0(local_3a8,*local_3c8,local_3c8);
          if (local_3c8 != (undefined4 *)0x0) {
            FUN_005d0370(local_3c8,0x10,0);
          }
          local_3d0 = (float)((int)local_3d0 + 1);
          local_3c8 = (undefined4 *)0x0;
          local_3c4 = (undefined4 *)0x0;
        } while ((int)local_3d0 < iVar20);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005fa300(local_3a8,*local_3b0,local_3b0);
    if (local_3b0 != (int *)0x0) {
      FUN_005d0370(local_3b0,0x20,0);
    }
    local_3b0 = (int *)0x0;
    local_3ac = 0;
  }
  local_4 = 0xffffffff;
  FUN_0076e220();
  ExceptionList = local_c;
  return (float10)local_3b8;
}

