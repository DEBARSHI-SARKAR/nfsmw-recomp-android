/* speed.exe 00462a80 FUN_00462a80; analysis pseudocode, not buildable source.
 * calls 0045cc70 FUN_0045cc70
 * calls 007c8e90 __aulldvrm
 * calls 0045ee20 FUN_0045ee20
 * calls 007c8f30 __allshl
 * calls 0045cd30 FUN_0045cd30
 * calls 00460c70 FUN_00460c70
 * calls 007c4b80 FUN_007c4b80
 * calls 004647c0 FUN_004647c0
 * calls 00460c50 FUN_00460c50
 * calls 0045eec0 FUN_0045eec0
 * calls 007c66a0 __allshr
 */

/* WARNING: Removing unreachable block (ram,0x00462ddd) */
/* WARNING: Removing unreachable block (ram,0x00462da5) */
/* WARNING: Removing unreachable block (ram,0x00462faf) */
/* WARNING: Removing unreachable block (ram,0x00462fb3) */
/* WARNING: Removing unreachable block (ram,0x00462fb9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00462a80(int *param_1,char *param_2,double *param_3)

{
  double dVar1;
  float *pfVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  double *pdVar19;
  int iVar20;
  char extraout_CL;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  char *pcVar27;
  char *pcVar28;
  undefined4 *puVar29;
  int iVar30;
  bool bVar31;
  float10 fVar32;
  float10 fVar33;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  longlong lVar34;
  undefined8 uVar35;
  uint local_c8;
  char *local_c0;
  uint local_bc;
  int local_b8;
  char local_b4 [4];
  char *local_b0;
  int local_ac;
  char local_a5;
  uint local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  char local_88;
  char local_87 [60];
  char local_4b [4];
  undefined4 local_47;
  
  uVar25 = 0;
  bVar18 = false;
  bVar15 = false;
  bVar13 = false;
  bVar11 = false;
  bVar9 = false;
  bVar6 = false;
  bVar31 = false;
  bVar7 = false;
  local_c8 = 0;
  bVar17 = false;
  bVar16 = false;
  bVar14 = false;
  bVar12 = false;
  bVar10 = false;
  bVar5 = false;
  bVar4 = false;
  bVar8 = false;
  local_ac = 0;
  local_bc = 0;
  local_c0 = (char *)0x0;
  local_b0 = (char *)0x0;
  local_a0 = 0;
  local_4b[2] = 0;
  local_9c = 0;
  local_b8 = 0;
  if ((char)param_1[2] != '\0') {
    DAT_0090df08 = (undefined1)param_1[3];
  }
  cVar21 = *param_2;
  local_8c = CONCAT31(local_8c._1_3_,cVar21);
  pcVar27 = param_2;
  uVar24 = DAT_0090e654;
  do {
    if ((cVar21 == '\0') || (param_2 = pcVar27 + 1, local_b8 < 0)) {
      if (((char)param_1[2] != '\0') && (uVar24 != 0)) {
        (&DAT_0090df50)[uVar24] = 0;
        FUN_0045cc70(DAT_0090df08,&DAT_0090df50);
        DAT_0090e654 = 0;
      }
      if (((undefined1 *)*param_1 != (undefined1 *)0x0) && (local_b8 != -1)) {
        *(undefined1 *)*param_1 = 0;
      }
      return local_b8;
    }
    if ((cVar21 < ' ') || ('z' < cVar21)) {
      uVar22 = 0;
    }
    else {
      uVar22 = (int)(char)(&DAT_00894140)[cVar21] & 0xf;
    }
    local_9c = (int)(char)(&DAT_00894160)[uVar22 * 8 + local_9c] >> 4;
    switch(local_9c) {
    case 0:
      if ((char)param_1[2] == '\0') {
        if (local_b8 < param_1[1] + -1) {
          if ((char *)*param_1 != (char *)0x0) {
            *(char *)*param_1 = cVar21;
            *param_1 = *param_1 + 1;
          }
          local_b8 = local_b8 + 1;
        }
      }
      else {
        FUN_0045ee20();
        local_b8 = local_b8 + 1;
        uVar24 = DAT_0090e654;
      }
      break;
    case 1:
      local_c8 = 0;
      bVar18 = false;
      bVar15 = false;
      bVar13 = false;
      bVar11 = false;
      bVar9 = false;
      bVar6 = false;
      bVar31 = false;
      bVar7 = false;
      local_ac = 0;
      local_a0 = 0;
      local_c0 = &local_88;
      local_bc = 0xffffffff;
      uVar25 = local_c8;
      bVar4 = bVar31;
      bVar5 = bVar6;
      bVar8 = bVar7;
      bVar10 = bVar9;
      bVar12 = bVar11;
      bVar14 = bVar13;
      bVar16 = bVar15;
      bVar17 = bVar18;
      break;
    case 2:
      switch(cVar21) {
      case ' ':
        bVar15 = true;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case '#':
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case '$':
        bVar6 = true;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = true;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case '+':
        bVar13 = true;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case '-':
        uVar25 = uVar25 | 4;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case '0':
        uVar25 = uVar25 | 8;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
      }
      break;
    case 3:
      if (cVar21 == '*') {
        pdVar19 = (double *)((int)param_3 + 4);
        local_ac = *(int *)param_3;
        param_3 = pdVar19;
        if (local_ac < 0) {
          uVar25 = uVar25 | 4;
          local_ac = -local_ac;
          local_c8 = uVar25;
          bVar4 = bVar31;
          bVar5 = bVar6;
          bVar8 = bVar7;
          bVar10 = bVar9;
          bVar12 = bVar11;
          bVar14 = bVar13;
          bVar16 = bVar15;
          bVar17 = bVar18;
        }
      }
      else {
        local_ac = cVar21 + -0x30 + local_ac * 10;
      }
      break;
    case 4:
      local_bc = 0;
      break;
    case 5:
      if (cVar21 == '*') {
        pdVar19 = (double *)((int)param_3 + 4);
        local_bc = *(uint *)param_3;
        param_3 = pdVar19;
        if ((int)local_bc < 0) {
          local_bc = 0xffffffff;
        }
      }
      else {
        local_bc = cVar21 + -0x30 + local_bc * 10;
      }
      break;
    case 6:
      switch(cVar21) {
      case 'I':
      case 'i':
        if ((*param_2 == '6') && (pcVar27[2] == '4')) {
          bVar31 = true;
          param_2 = pcVar27 + 3;
          local_c8 = uVar25;
          bVar4 = bVar31;
          bVar5 = bVar6;
          bVar8 = bVar7;
          bVar10 = bVar9;
          bVar12 = bVar11;
          bVar14 = bVar13;
          bVar16 = bVar15;
          bVar17 = bVar18;
        }
        break;
      case 'h':
        bVar18 = true;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case 'l':
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
      }
      break;
    case 7:
      local_a4 = 0;
      dVar1 = local_98;
      switch(cVar21) {
      case 'E':
      case 'G':
        local_b4[0] = 'E';
        goto LAB_00463005;
      case 'X':
        goto switchD_00462d64_caseD_58;
      case 'b':
        local_b0 = (char *)0x2;
        bVar9 = bVar10;
        goto LAB_00462e01;
      case 'c':
        local_88 = *(char *)param_3;
        param_3 = (double *)((int)param_3 + 4);
        local_b0 = (char *)0x1;
        break;
      case 'd':
      case 'i':
        local_b0 = (char *)0xa;
        bVar7 = true;
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        goto LAB_00462e01;
      case 'e':
      case 'g':
        local_b4[0] = 'e';
LAB_00463005:
        uVar25 = uVar25 | 0x800;
switchD_00462d64_caseD_66:
        dVar1 = *param_3;
        fVar32 = (float10)dVar1;
        param_3 = param_3 + 1;
        local_98._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        bVar8 = true;
        local_c8 = uVar25;
        if ((local_98._4_4_ & 0x7ff00000) == 0x7ff00000) {
          local_c0 = PTR_s__1__INF_008ed38c;
          if ((local_98._4_4_ != 0xfff00000) &&
             (local_c0 = PTR_s_1__QNAN_008ed394, local_98._4_4_ == 0x7ff00000)) {
            local_c0 = PTR_s_1__INF_008ed390;
          }
          local_b0 = (char *)0x7;
          bVar4 = bVar31;
          bVar5 = bVar6;
          bVar7 = bVar8;
          bVar10 = bVar9;
          bVar12 = bVar11;
          bVar14 = bVar13;
          bVar16 = bVar15;
          bVar17 = bVar18;
          if (local_c0 != (char *)0x0) break;
        }
        fVar33 = (float10)_DAT_008942e8;
        local_c0 = local_87;
        local_88 = '0';
        if (fVar32 < (float10)_DAT_008942e0) {
          bVar11 = true;
          fVar32 = -fVar32;
        }
        bVar8 = true;
        if (local_bc == 0xffffffff) {
          local_bc = 3;
        }
        iVar30 = 0;
        local_98 = (double)(CONCAT44(local_98._4_4_,uVar25) & 0xffffffff00000800);
        if (((uVar25 & 0x800) == 0) || (fVar32 == (float10)_DAT_008942e0)) {
          for (fVar33 = (float10)_DAT_008942e8; fVar33 < fVar32;
              fVar33 = fVar33 * (float10)_DAT_008942d0) {
            iVar30 = iVar30 + 1;
          }
          if (fVar32 < fVar33) {
            fVar33 = fVar33 * (float10)_DAT_008942d8;
            iVar30 = iVar30 + -1;
          }
        }
        else {
          if (fVar32 < (float10)_DAT_008942e8) {
            if ((float10)_DAT_008942e8 <= fVar32) goto LAB_00463170;
          }
          else {
            do {
              iVar30 = iVar30 + 1;
              fVar32 = fVar32 * (float10)_DAT_008942d8;
            } while ((float10)_DAT_008942e8 <= fVar32);
          }
          do {
            iVar30 = iVar30 + -1;
            fVar32 = fVar32 * (float10)_DAT_008942d0;
          } while (fVar32 < (float10)_DAT_008942e8);
        }
LAB_00463170:
        local_a4 = iVar30 + 1;
        if ((!bVar6) || (bVar4 = true, (char)(DAT_008ed3a5 >> 8) == '\0' || (short)DAT_008ed3a5 < 0)
           ) {
          bVar4 = false;
        }
        local_a5 = DAT_008ed3a4;
        if (!bVar6) {
          local_a5 = '.';
        }
        pcVar27 = local_c0;
        if ((float10)_DAT_008942e8 <= fVar33) {
          do {
            if (bVar4) {
              if (((int)local_a4 % (int)(char)(DAT_008ed3a5 >> 8) == 0) && (local_a4 != iVar30 + 1U)
                 ) {
                *pcVar27 = (char)DAT_008ed3a5;
                pcVar27 = pcVar27 + 1;
              }
              local_a4 = local_a4 - 1;
            }
            cVar21 = FUN_007c4b80();
            local_b0 = (char *)(int)cVar21;
            *pcVar27 = cVar21 + '0';
            pcVar27 = pcVar27 + 1;
            fVar32 = extraout_ST1 - (float10)(int)local_b0 * extraout_ST0_00;
          } while ((float10)_DAT_008942e8 <= extraout_ST0_00 * (float10)_DAT_008942d8);
          if (pcVar27 == local_87) goto LAB_004631bd;
        }
        else {
LAB_004631bd:
          *pcVar27 = '0';
          pcVar27 = pcVar27 + 1;
        }
        if (local_bc != 0) {
          *pcVar27 = local_a5;
          pcVar27 = pcVar27 + 1;
          if (local_bc != 0) {
            do {
              cVar21 = FUN_007c4b80();
              local_a4 = (uint)cVar21;
              *pcVar27 = cVar21 + '0';
              pcVar27 = pcVar27 + 1;
              local_bc = local_bc - 1;
              fVar32 = extraout_ST0 - (float10)(int)local_a4;
            } while (local_bc != 0);
            local_bc = 0;
          }
        }
        local_bc = local_bc - 1;
        if ((float10)_DAT_008942c8 <= (float10)_DAT_008942d0 * fVar32) {
          pcVar28 = pcVar27 + -1;
          while( true ) {
            for (; cVar21 = *pcVar28, cVar21 == '9'; pcVar28 = pcVar28 + -1) {
              *pcVar28 = '0';
            }
            if ((cVar21 != local_a5) && ((!bVar4 || (cVar21 != (char)DAT_008ed3a5)))) break;
            pcVar28 = pcVar28 + -1;
          }
          *pcVar28 = *pcVar28 + '\x01';
          if (pcVar28 < local_87) {
            local_c0 = &local_88;
          }
        }
        if ((int)local_98 != 0) {
          *pcVar27 = local_b4[0];
          if (iVar30 < 0) {
            iVar30 = -iVar30;
            pcVar27[1] = '-';
          }
          else {
            pcVar27[1] = '+';
          }
          cVar21 = ((char)(iVar30 / 100) + (char)(iVar30 >> 0x1f)) -
                   (char)((longlong)iVar30 * 0x51eb851f >> 0x3f);
          pcVar27[2] = cVar21 + '0';
          iVar30 = iVar30 + cVar21 * -100;
          cVar21 = ((char)(iVar30 / 10) + (char)(iVar30 >> 0x1f)) -
                   (char)((longlong)iVar30 * 0x66666667 >> 0x3f);
          pcVar27[3] = cVar21 + '0';
          local_a0 = 0;
          pcVar27[4] = (char)((iVar30 + cVar21 * -10) % 10) + '0';
          pcVar27 = pcVar27 + 5;
        }
        local_b0 = pcVar27 + -(int)local_c0;
        uVar24 = DAT_0090e654;
        dVar1 = local_98;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar7 = bVar8;
        bVar10 = bVar9;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case 'f':
        goto switchD_00462d64_caseD_66;
      case 'n':
        **(int **)param_3 = local_b8;
        param_3 = (double *)((int)param_3 + 4);
        local_c8 = uVar25;
        bVar4 = bVar31;
        bVar5 = bVar6;
        bVar8 = bVar7;
        bVar9 = true;
        bVar10 = true;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar18;
        break;
      case 'o':
        local_b0 = (char *)0x8;
        bVar9 = bVar10;
        goto LAB_00462e01;
      case 'p':
        local_bc = 8;
        goto switchD_00462d64_caseD_58;
      case 's':
        pcVar27 = *(char **)param_3;
        param_3 = (double *)((int)param_3 + 4);
        local_c0 = PTR_DAT_008ed39c;
        if ((pcVar27 != (char *)0x0) &&
           (iVar30 = FUN_0045cd30(pcVar27,1), uVar24 = DAT_0090e654, local_c0 = pcVar27, iVar30 == 0
           )) {
          local_c0 = PTR_s__badptr__008ed3a0;
        }
        pcVar27 = local_c0;
        uVar25 = local_bc;
        if ((int)local_bc < 0) {
          uVar25 = 0x7fffffff;
        }
        do {
          cVar21 = *pcVar27;
          pcVar27 = pcVar27 + 1;
          if (cVar21 == '\0') break;
          bVar31 = uVar25 != 0;
          uVar25 = uVar25 - 1;
        } while (bVar31);
        uVar25 = local_c8;
        dVar1 = local_98;
        bVar31 = bVar4;
        bVar6 = bVar5;
        bVar7 = bVar8;
        bVar9 = bVar10;
        bVar11 = bVar12;
        bVar13 = bVar14;
        bVar15 = bVar16;
        bVar18 = bVar17;
        if (pcVar27 != local_c0) {
          local_b0 = pcVar27 + (-1 - (int)local_c0);
        }
        break;
      case 'u':
        local_b0 = (char *)0xa;
        bVar9 = bVar10;
LAB_00462e01:
        pcVar27 = local_4b + 1;
        if (bVar18) {
          if (bVar7) {
            uVar24 = (uint)*(short *)param_3;
            uVar25 = (int)uVar24 >> 0x1f;
            param_3 = (double *)((int)param_3 + 4);
          }
          else {
            uVar24 = (uint)*(ushort *)param_3;
            uVar25 = 0;
            param_3 = (double *)((int)param_3 + 4);
          }
        }
        else if (bVar31) {
          uVar24 = *(uint *)param_3;
          uVar25 = *(uint *)((int)param_3 + 4);
          param_3 = param_3 + 1;
        }
        else if (bVar7) {
          uVar24 = *(uint *)param_3;
          uVar25 = (int)uVar24 >> 0x1f;
          param_3 = (double *)((int)param_3 + 4);
        }
        else {
          uVar24 = *(uint *)param_3;
          uVar25 = 0;
          param_3 = (double *)((int)param_3 + 4);
        }
        if ((local_b0 == (char *)0x10) && (local_ac != 0)) {
          __allshl();
          __allshr();
          lVar34 = __allshr();
          if (lVar34 == -1) {
            uVar35 = __allshl();
            uVar24 = uVar24 & (int)uVar35 - 1U;
            uVar25 = uVar25 & (int)((ulonglong)uVar35 >> 0x20) - (uint)((int)uVar35 == 0);
          }
        }
        if (((bVar8) && ((int)uVar25 < 1)) && ((int)uVar25 < 0)) {
          bVar31 = uVar24 != 0;
          uVar24 = -uVar24;
          uVar25 = -(uVar25 + bVar31);
          bVar12 = true;
        }
        if ((int)local_bc < 0) {
          local_bc = 1;
        }
        else {
          local_c8 = local_c8 & 0xfffffff7;
        }
        if (uVar24 == 0 && uVar25 == 0) {
          local_a0 = 0;
        }
        uVar23 = (uint)DAT_008ed3a5;
        local_c0 = (char *)0x0;
        uVar22 = local_bc;
        if ((!bVar5) ||
           (bVar31 = true, lVar34 = CONCAT44(uVar25,uVar24),
           (char)(DAT_008ed3a5 >> 8) == '\0' || (short)DAT_008ed3a5 < 0)) {
          bVar31 = false;
          lVar34 = CONCAT44(uVar25,uVar24);
        }
        while( true ) {
          uVar26 = (undefined4)lVar34;
          local_bc = uVar22 - 1;
          if (((int)uVar22 < 1) && (lVar34 == 0)) break;
          if ((bVar31) &&
             (local_c0 = (char *)((int)local_c0 + 1), (int)(char)(uVar23 >> 8) < (int)local_c0)) {
            *pcVar27 = (char)uVar23;
            pcVar27 = pcVar27 + -1;
            local_c0 = (char *)0x1;
          }
          lVar34 = __aulldvrm(lVar34,local_b0,(int)local_b0 >> 0x1f);
          cVar21 = extraout_CL + '0';
          local_98 = (double)CONCAT44(uVar26,(int)local_98);
          if ('9' < cVar21) {
            cVar21 = cVar21 + (char)local_a4;
          }
          uVar23 = (uint)DAT_008ed3a5;
          *pcVar27 = cVar21;
          pcVar27 = pcVar27 + -1;
          uVar22 = local_bc;
        }
        local_b0 = local_4b + (1 - (int)pcVar27);
        local_c0 = pcVar27 + 1;
        uVar24 = DAT_0090e654;
        uVar25 = local_c8;
        dVar1 = local_98;
        bVar31 = bVar4;
        bVar6 = bVar5;
        bVar7 = bVar8;
        bVar10 = bVar9;
        bVar11 = bVar12;
        bVar13 = bVar14;
        bVar15 = bVar16;
        bVar18 = bVar17;
        break;
      case 'v':
        if (((int)local_bc < 0) && (local_ac == 0)) {
          local_bc = 2;
          local_ac = 8;
        }
        cVar21 = *param_2;
        local_4b[3] = 0;
        puVar29 = &local_47;
        for (iVar30 = 0xf; iVar30 != 0; iVar30 = iVar30 + -1) {
          *puVar29 = 0;
          puVar29 = puVar29 + 1;
        }
        *(undefined2 *)puVar29 = 0;
        iVar30 = cVar21 + -0x30;
        *(undefined1 *)((int)puVar29 + 2) = 0;
        if ((1 < iVar30) && (iVar30 < 5)) {
          pfVar2 = *(float **)param_3;
          param_3 = (double *)((int)param_3 + 4);
          iVar20 = FUN_0045cd30(pfVar2,1);
          if (iVar20 == 0) {
            FUN_00460c70(local_4b + 3);
          }
          else if (iVar30 == 2) {
            FUN_004647c0(local_4b + 3,"[%*.*f,%*.*f]",local_ac,local_bc,(double)*pfVar2,local_ac,
                         local_bc,(double)pfVar2[1]);
          }
          else if (iVar30 == 3) {
            FUN_004647c0(local_4b + 3,"[%*.*f,%*.*f,%*.*f]",local_ac,local_bc,(double)*pfVar2,
                         local_ac,local_bc,(double)pfVar2[1],local_ac,local_bc,(double)pfVar2[2]);
          }
          else if (iVar30 == 4) {
            FUN_004647c0(local_4b + 3,"[%*.*f,%*.*f,%*.*f,%*.*f]",local_ac,local_bc,(double)*pfVar2,
                         local_ac,local_bc,(double)pfVar2[1],local_ac,local_bc,(double)pfVar2[2],
                         local_ac,local_bc,(double)pfVar2[3]);
          }
        }
        FUN_00460c50(local_4b + 3);
        FUN_0045eec0(param_1,local_4b + 3);
        bVar9 = true;
        param_2 = pcVar27 + 2;
        uVar24 = DAT_0090e654;
        uVar25 = local_c8;
        dVar1 = local_98;
        bVar31 = bVar4;
        bVar6 = bVar5;
        bVar7 = bVar8;
        bVar10 = bVar9;
        bVar11 = bVar12;
        bVar13 = bVar14;
        bVar15 = bVar16;
        bVar18 = bVar17;
        break;
      case 'x':
        local_a4 = 0x27;
        goto LAB_00462da1;
      case 'z':
        uVar25 = *(uint *)param_3;
        param_3 = (double *)((int)param_3 + 4);
        local_c0 = local_4b + 1;
        if (0x7ffffffe < uVar25) {
          uVar25 = ~uVar25 + 1;
          bVar12 = true;
        }
        bVar8 = true;
        uVar22 = uVar25 >> 0x10;
        uVar25 = uVar25 & 0xffff;
        if ((int)local_bc < 0) {
          local_bc = 2;
        }
        uVar24 = local_bc;
        if ((uVar25 != 0) || (local_bc != 0)) {
          pcVar27 = local_4b + (2 - local_bc);
          if (0 < (int)local_bc) {
            local_bc = 0;
            local_a4 = uVar24;
            do {
              if (uVar25 < 0x10000) {
                uVar25 = uVar25 * 10;
              }
              uVar23 = 0;
              iVar30 = 0;
              do {
                iVar20 = iVar30;
                uVar23 = uVar23 + 0x10000;
                iVar30 = iVar20 + 1;
              } while (uVar23 <= uVar25);
              uVar25 = uVar25 + iVar20 * -0x10000;
              *pcVar27 = (char)iVar20 + '0';
              pcVar27 = pcVar27 + 1;
              local_a4 = local_a4 - 1;
            } while (local_a4 != 0);
          }
          if ((uVar25 == 0) && (0 < (int)local_bc)) {
            local_98._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
            local_98 = (double)CONCAT44(local_98._4_4_,local_bc);
            uVar23 = local_bc >> 2;
            pcVar28 = pcVar27;
            while (uVar23 != 0) {
              uVar23 = uVar23 - 1;
              builtin_strncpy(pcVar28,"0000",4);
              pcVar28 = pcVar28 + 4;
            }
            for (uVar23 = local_bc & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pcVar28 = '0';
              pcVar28 = pcVar28 + 1;
            }
            pcVar27 = pcVar27 + local_bc;
            local_bc = 0;
          }
          *pcVar27 = '\0';
          pcVar27[-1 - uVar24] = '.';
          local_c0 = pcVar27 + (-1 - uVar24) + -1;
          if (uVar25 != 0) {
            if (uVar25 < 0x10000) {
              uVar25 = uVar25 * 10;
            }
            uVar24 = 0;
            iVar30 = 0;
            do {
              iVar20 = iVar30;
              uVar24 = uVar24 + 0x10000;
              iVar30 = iVar20 + 1;
            } while (uVar24 <= uVar25);
            if (4 < iVar20) {
              pcVar27 = local_4b + 1;
              cVar21 = local_4b[1];
              while (cVar21 == '9') {
                *pcVar27 = '0';
                if (pcVar27[-1] == '.') {
                  uVar22 = uVar22 + 1;
                  goto LAB_004634b4;
                }
                pcVar28 = pcVar27 + -1;
                pcVar27 = pcVar27 + -1;
                cVar21 = *pcVar28;
              }
              *pcVar27 = *pcVar27 + '\x01';
            }
          }
        }
LAB_004634b4:
        pcVar27 = local_c0;
        uVar24 = DAT_0090e654;
        dVar1 = local_98;
        bVar7 = bVar8;
        bVar11 = bVar12;
        if (uVar22 == 0) {
          *local_c0 = '0';
          local_b0 = local_4b + (1 - (int)(local_c0 + -1));
          uVar25 = local_c8;
          bVar31 = bVar4;
          bVar6 = bVar5;
          bVar9 = bVar10;
          bVar13 = bVar14;
          bVar15 = bVar16;
          bVar18 = bVar17;
        }
        else {
          do {
            local_c0 = pcVar27;
            uVar3 = (ulonglong)uVar22;
            uVar22 = uVar22 / 10;
            *local_c0 = (char)(uVar3 % 10) + '0';
            pcVar27 = local_c0 + -1;
          } while (uVar22 != 0);
          local_b0 = local_4b + (1 - (int)(local_c0 + -1));
          uVar25 = local_c8;
          bVar31 = bVar4;
          bVar6 = bVar5;
          bVar9 = bVar10;
          bVar13 = bVar14;
          bVar15 = bVar16;
          bVar18 = bVar17;
        }
      }
      local_98 = dVar1;
      if (!bVar9) {
        if (bVar7) {
          if (bVar11) {
            local_b4[0] = '-';
          }
          else if (bVar13) {
            local_b4[0] = '+';
          }
          else {
            if (!bVar15) goto LAB_0046376a;
            local_b4[0] = ' ';
          }
          local_a0 = 1;
        }
LAB_0046376a:
        iVar30 = (local_ac - local_a0) - (int)local_b0;
        if (iVar30 < 0) {
          iVar30 = 0;
        }
        else if ((iVar30 != 0) && ((uVar25 & 0xc) == 0)) {
          do {
            if ((char)param_1[2] == '\0') {
              if (local_b8 < param_1[1] + -1) {
                if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
                  *(undefined1 *)*param_1 = 0x20;
                  *param_1 = *param_1 + 1;
                }
                goto LAB_004637eb;
              }
            }
            else {
              (&DAT_0090df50)[uVar24] = 0x20;
              uVar24 = uVar24 + 1 & 0x7f;
              DAT_0090e654 = uVar24;
              if (uVar24 == 0x7f) {
                DAT_0090dfcf = 0;
                FUN_0045cc70(DAT_0090df08);
                uVar24 = 0;
                DAT_0090e654 = 0;
              }
LAB_004637eb:
              local_b8 = local_b8 + 1;
            }
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
          iVar30 = -1;
        }
        if (local_a0 != 0) {
          FUN_0045eec0(param_1,local_b4,local_a0);
          uVar24 = DAT_0090e654;
        }
        if ((0 < iVar30) && ((uVar25 & 4) == 0)) {
          do {
            if ((char)param_1[2] == '\0') {
              if (local_b8 < param_1[1] + -1) {
                if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
                  *(undefined1 *)*param_1 = 0x30;
                  *param_1 = *param_1 + 1;
                }
                goto LAB_0046387d;
              }
            }
            else {
              (&DAT_0090df50)[uVar24] = 0x30;
              uVar24 = uVar24 + 1 & 0x7f;
              DAT_0090e654 = uVar24;
              if (uVar24 == 0x7f) {
                DAT_0090dfcf = 0;
                FUN_0045cc70(DAT_0090df08);
                uVar24 = 0;
                DAT_0090e654 = 0;
              }
LAB_0046387d:
              local_b8 = local_b8 + 1;
            }
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
          iVar30 = -1;
        }
        FUN_0045eec0(param_1,local_c0);
        uVar24 = DAT_0090e654;
        if (0 < iVar30) {
          do {
            if ((char)param_1[2] == '\0') {
              if (local_b8 < param_1[1] + -1) {
                if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
                  *(undefined1 *)*param_1 = 0x20;
                  *param_1 = *param_1 + 1;
                }
                goto LAB_0046390b;
              }
            }
            else {
              (&DAT_0090df50)[uVar24] = 0x20;
              uVar24 = uVar24 + 1 & 0x7f;
              DAT_0090e654 = uVar24;
              if (uVar24 == 0x7f) {
                DAT_0090dfcf = 0;
                FUN_0045cc70();
                uVar24 = 0;
                DAT_0090e654 = 0;
              }
LAB_0046390b:
              local_b8 = local_b8 + 1;
            }
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
      }
    }
    cVar21 = *param_2;
    local_8c = CONCAT31(local_8c._1_3_,cVar21);
    pcVar27 = param_2;
  } while( true );
switchD_00462d64_caseD_58:
  local_a4 = 7;
LAB_00462da1:
  local_b0 = (char *)0x10;
  bVar9 = bVar10;
  goto LAB_00462e01;
}

