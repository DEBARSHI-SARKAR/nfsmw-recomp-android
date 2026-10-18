/* speed.exe 004f3600 FUN_004f3600; analysis pseudocode, not buildable source.
 * calls 004ed4c0 FUN_004ed4c0
 * calls 008311aa FUN_008311aa
 * calls 004ab8f0 FUN_004ab8f0
 * calls 004db000 FUN_004db000
 * calls 00831682 FUN_00831682
 * calls 004d26c0 FUN_004d26c0
 * calls 00454810 FUN_00454810
 * calls 0083179c FUN_0083179c
 * calls 004cfe20 FUN_004cfe20
 * calls 004dacf0 FUN_004dacf0
 * calls 004cd570 FUN_004cd570
 * calls 00452430 FUN_00452430
 * calls 004ae8b0 FUN_004ae8b0
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 00831782 FUN_00831782
 */

void __fastcall FUN_004f3600(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  char local_121;
  uint local_120;
  uint local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108;
  undefined4 local_104;
  uint local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined1 local_d4 [20];
  undefined1 auStack_c0 [20];
  undefined1 local_ac [20];
  undefined1 local_98 [20];
  undefined1 auStack_84 [20];
  undefined1 local_70 [20];
  undefined1 auStack_5c [20];
  undefined1 local_48 [20];
  undefined1 auStack_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d3ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  **(undefined4 **)(param_1 + 0xc) = 0;
  local_110 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x28);
    local_121 = '\x01';
    if (local_110 == 0) {
      local_10c = iVar4 + 0x78;
      local_120 = iVar4 + 0xa0;
    }
    else {
      local_10c = iVar4 + 0x8c;
      local_120 = iVar4 + 0xb4;
    }
    local_114 = 0;
    local_118 = 0;
    bVar1 = false;
    bVar2 = false;
    local_108 = 0xffffffff;
    if (local_110 == 0) {
      local_121 = *(char *)(iVar4 + 0xf0);
      local_114 = *(int *)(param_1 + 0x74);
      local_118 = *(int *)(param_1 + 0x7c);
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
      local_11c = 0;
      if (((*(char *)(iVar4 + 0xfc) == '\x01') && (*(char *)(iVar4 + 0xfd) != '\x01')) ||
         ((*(char *)(iVar4 + 0x1c8) == '\x01' && (*(char *)(iVar4 + 0x1c9) != '\x01')))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (((*(char *)(iVar4 + 0xfc) == '\x02') && (*(char *)(iVar4 + 0xfd) != '\x02')) ||
         ((*(char *)(iVar4 + 0x1c8) == '\x02' && (*(char *)(iVar4 + 0x1c9) != '\x02')))) {
        bVar2 = true;
        uVar10 = 0;
      }
      else {
        bVar2 = false;
        uVar10 = 0;
      }
      do {
        FUN_004ab8f0(local_48,uVar10);
        local_4 = 0;
        FUN_004d26c0(local_d4,uVar10);
        local_4._0_1_ = 1;
        iVar4 = FUN_00452430();
        iVar5 = FUN_00452430();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0045a430();
        local_4 = 0xffffffff;
        FUN_0045a430();
        if (iVar5 != iVar4) {
          FUN_004ab8f0(local_ac,uVar10);
          local_4 = 2;
          FUN_004d26c0(local_20,uVar10);
          local_4 = CONCAT31(local_4._1_3_,3);
          piVar6 = (int *)FUN_00454810(0x2907c135,0);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)FUN_006269b0(4);
          }
          piVar7 = (int *)FUN_00454810(0x2907c135,0);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)FUN_006269b0(4);
          }
          iVar5 = *piVar6;
          iVar4 = *piVar7;
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_0045a430();
          local_4 = 0xffffffff;
          FUN_0045a430();
          if (iVar5 != iVar4) {
            local_108 = uVar10;
          }
        }
        uVar10 = uVar10 + 3;
      } while ((int)uVar10 < 4);
    }
    else if (local_110 == 1) {
      local_121 = *(char *)(iVar4 + 0xf1);
      local_114 = *(int *)(param_1 + 0x70);
      local_118 = *(int *)(param_1 + 0x78);
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
      if (((*(char *)(iVar4 + 0x140) == '\x01') && (*(char *)(iVar4 + 0x141) != '\x01')) ||
         ((*(char *)(iVar4 + 0x184) == '\x01' && (*(char *)(iVar4 + 0x185) != '\x01')))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar10 = 1;
      local_11c = uVar10;
      if (((*(char *)(iVar4 + 0x140) == '\x02') && (*(char *)(iVar4 + 0x141) != '\x02')) ||
         ((*(char *)(iVar4 + 0x184) == '\x02' && (*(char *)(iVar4 + 0x185) != '\x02')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      do {
        FUN_004ab8f0(auStack_84,uVar10);
        local_4 = 4;
        FUN_004d26c0(auStack_5c,uVar10);
        local_4._0_1_ = 5;
        iVar4 = FUN_00452430();
        iVar5 = FUN_00452430();
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_0045a430();
        local_4 = 0xffffffff;
        FUN_0045a430();
        if (iVar5 != iVar4) {
          FUN_004ab8f0(auStack_c0,uVar10);
          local_4 = 6;
          FUN_004d26c0(auStack_34,uVar10);
          local_4 = CONCAT31(local_4._1_3_,7);
          piVar6 = (int *)FUN_00454810(0x2907c135,0);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)FUN_006269b0(4);
          }
          piVar7 = (int *)FUN_00454810(0x2907c135,0);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)FUN_006269b0(4);
          }
          iVar5 = *piVar6;
          iVar4 = *piVar7;
          local_4 = CONCAT31(local_4._1_3_,6);
          FUN_0045a430();
          local_4 = 0xffffffff;
          FUN_0045a430();
          if (iVar5 != iVar4) {
            local_108 = uVar10;
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 3);
    }
    iVar5 = FUN_00452430();
    iVar8 = FUN_00452430();
    iVar4 = local_110;
    if (iVar5 != iVar8) {
      piVar6 = (int *)FUN_00454810(0x2907c135,0);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)FUN_006269b0(4);
      }
      iVar4 = local_110;
      if (*(int *)(param_1 + 0x68 + local_110 * 4) == *piVar6) {
        ExceptionList = local_c;
        return;
      }
      puVar9 = (undefined4 *)FUN_00454810(0x2907c135,0);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)FUN_006269b0(4);
      }
      *(undefined4 *)(param_1 + 0x68 + iVar4 * 4) = *puVar9;
      **(undefined4 **)(param_1 + 0xc) = 0x7fff;
      iVar5 = *(int *)(param_1 + 0x68 + iVar4 * 4);
      if (iVar5 == -1) {
        piVar6 = *(int **)(param_1 + 0x40 + iVar4 * 4);
        if (piVar6 != (int *)0x0) {
          if (*piVar6 != 0) {
            FUN_00831782();
          }
          FUN_00831682(piVar6);
        }
        *(undefined4 *)(param_1 + 0x40 + iVar4 * 4) = 0;
      }
      else {
        FUN_004db000(iVar5,iVar4);
      }
    }
    uVar10 = local_108;
    if ((local_121 != '\0') && (local_108 != 0xffffffff)) {
      FUN_004ab8f0(local_98,local_108);
      local_4 = 8;
      piVar6 = (int *)FUN_00454810(0xb4c1b2cf,0);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)FUN_006269b0(4);
      }
      iVar5 = *piVar6;
      local_4 = 0xffffffff;
      FUN_0045a430();
      FUN_004d26c0(local_70,uVar10);
      local_4 = 9;
      piVar6 = (int *)FUN_00454810(0xcdf83544,0);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)FUN_006269b0(4);
      }
      iVar8 = *piVar6;
      local_4 = 0xffffffff;
      FUN_0045a430();
      if (((iVar8 != 4) && (iVar5 != 4)) && ((iVar5 != -1 || (iVar5 = iVar8, iVar8 != -1)))) {
        FUN_004ed4c0(iVar5,iVar4);
      }
    }
    if (bVar1) {
      FUN_004ed4c0(2,iVar4);
    }
    if (bVar2) {
      FUN_004ed4c0(3,iVar4);
    }
    uVar10 = FUN_004dacf0(*(undefined4 *)(param_1 + 0x68 + iVar4 * 4));
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int *)(*(int *)(param_1 + 0x10) + ((int)uVar10 >> 1) * 4) >>
               (sbyte)((uVar10 & 1) << 4) & 0x7fff;
    }
    local_120 = (int)(uVar10 * local_114) >> 0xf;
    if (local_121 == '\0') {
      local_120 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x40 + iVar4 * 4);
    if (iVar5 != 0) {
      if ((int)local_120 < 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = local_120;
        if (0x7fff < (int)local_120) {
          uVar10 = 0x7fff;
        }
      }
      *(uint *)(iVar5 + 8) = uVar10;
      if (local_118 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_118;
        if (0x1fff < local_118) {
          iVar5 = 0x1fff;
        }
      }
      *(int *)(*(int *)(param_1 + 0x40 + iVar4 * 4) + 0xc) = iVar5;
      if (*(int *)(param_1 + 0x10) == 0) {
LAB_004f3c8e:
        uVar10 = 0;
      }
      else {
        if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) goto LAB_004f3c8e;
        uVar10 = *(int *)(*(int *)(param_1 + 0x10) + ((int)local_11c >> 1) * 4) >>
                 (sbyte)((local_11c & 1) << 4) & 0xffff;
      }
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0xffff < uVar10) {
        uVar10 = 0xffff;
      }
      *(uint *)(*(int *)(param_1 + 0x40 + iVar4 * 4) + 0x10) = uVar10;
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c) >> 0x10 & 0x7fff;
      }
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0x7fff < uVar10) {
        uVar10 = 0x7fff;
      }
      *(uint *)(*(int *)(param_1 + 0x40 + iVar4 * 4) + 0x2c) = uVar10;
      iVar5 = FUN_00452430();
      if (((iVar5 == -0x26d616dd) || (iVar5 = FUN_00452430(), iVar5 == -0x3e3a882a)) &&
         (iVar5 = *(int *)(param_1 + 0x40 + iVar4 * 4), iVar5 != 0)) {
        *(undefined4 *)(iVar5 + 0x18) = 1;
      }
      piVar6 = *(int **)(param_1 + 0x40 + iVar4 * 4);
      if (*piVar6 != 0) {
        FUN_0083179c(piVar6 + 1);
      }
    }
    if (*(int *)(param_1 + 0x48 + iVar4 * 4) != 0) {
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        local_d8 = 0;
LAB_004f3d6b:
        local_e0 = 0;
      }
      else {
        local_d8 = *(int *)(iVar5 + 0x1c) >> 0x10 & 0x7fff;
        if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) goto LAB_004f3d6b;
        local_e0 = *(int *)(iVar5 + ((int)local_11c >> 1) * 4) >> (sbyte)((local_11c & 1) << 4) &
                   0xffff;
      }
      local_ec = 0;
      local_e4 = 0;
      local_dc = 0;
      local_e8 = local_120;
      FUN_004cfe20(&local_ec,DAT_009142d8);
    }
    iVar5 = *(int *)(param_1 + 0x38 + iVar4 * 4);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(int *)(*(int *)(param_1 + 0x10) + 4) >> 0x10 & 0x7fff;
      }
      iVar8 = (int)(uVar10 * (DAT_008ee66c * local_114 >> 0xf)) >> 0xf;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x7fff < iVar8) {
        iVar8 = 0x7fff;
      }
      *(int *)(iVar5 + 8) = iVar8;
      if (local_118 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_118;
        if (0x1fff < local_118) {
          iVar5 = 0x1fff;
        }
      }
      *(int *)(*(int *)(param_1 + 0x38 + iVar4 * 4) + 0xc) = iVar5;
      if (*(int *)(param_1 + 0x10) == 0) {
LAB_004f3e3e:
        uVar10 = 0;
      }
      else {
        if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) goto LAB_004f3e3e;
        uVar10 = *(int *)(*(int *)(param_1 + 0x10) + ((int)local_11c >> 1) * 4) >>
                 (sbyte)((local_11c & 1) << 4) & 0xffff;
      }
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0xffff < uVar10) {
        uVar10 = 0xffff;
      }
      *(uint *)(*(int *)(param_1 + 0x38 + iVar4 * 4) + 0x10) = uVar10;
      piVar6 = *(int **)(param_1 + 0x38 + iVar4 * 4);
      if (*piVar6 != 0) {
        FUN_0083179c(piVar6 + 1);
      }
    }
    piVar6 = *(int **)(param_1 + 0x50 + iVar4 * 4);
    if (((piVar6 != (int *)0x0) && (local_120 = 0, *piVar6 != 0)) &&
       ((FUN_008311aa(&local_120), 1 < (int)local_120 && (cVar3 = FUN_004ae8b0(), cVar3 != '\0'))))
    {
      *(undefined4 *)(*(int *)(param_1 + 0x50 + iVar4 * 4) + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x50 + iVar4 * 4) + 0xc) = 0x1000;
      piVar6 = *(int **)(param_1 + 0x50 + iVar4 * 4);
      if (*piVar6 != 0) {
        FUN_0083179c(piVar6 + 1);
      }
    }
    puVar9 = *(undefined4 **)(param_1 + 0x58 + iVar4 * 4);
    if (puVar9 != (undefined4 *)0x0) {
      if (*(char *)(puVar9 + 8) == '\0') {
        (**(code **)*puVar9)(1);
        *(undefined4 *)(param_1 + 0x58 + iVar4 * 4) = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          local_120 = 0;
LAB_004f3f27:
          local_f8 = 0;
        }
        else {
          local_120 = *(int *)(iVar5 + 0x1c) >> 0x10 & 0x7fff;
          if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) goto LAB_004f3f27;
          local_f8 = *(int *)(iVar5 + ((int)local_11c >> 1) * 4) >> (sbyte)((local_11c & 1) << 4) &
                     0xffff;
        }
        if (iVar5 == 0) {
          local_100 = 0;
        }
        else {
          local_100 = *(uint *)(iVar5 + 8) & 0x7fff;
        }
        local_104 = 0;
        local_fc = 0;
        local_f4 = 0;
        local_f0 = local_120;
        FUN_004cd570(&local_104);
      }
    }
    local_110 = iVar4 + 1;
    if (1 < local_110) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

