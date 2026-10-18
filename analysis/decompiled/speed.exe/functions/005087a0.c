/* speed.exe 005087a0 FUN_005087a0; analysis pseudocode, not buildable source.
 * calls 00500b50 FUN_00500b50
 * calls 00462830 FUN_00462830
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004655f0 FUN_004655f0
 * calls 00464080 FUN_00464080
 * calls 004647c0 FUN_004647c0
 * calls 004fb210 FUN_004fb210
 * calls 0045cd20 __break
 * calls 00465a70 FUN_00465a70
 */

int FUN_005087a0(int param_1,int param_2,uint param_3,char param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int ***pppiVar3;
  int ****ppppiVar4;
  int ***pppiVar5;
  int ***pppiVar6;
  int iVar7;
  int **ppiVar8;
  int **ppiVar9;
  char *pcVar10;
  int ****ppppiVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int ***local_130;
  int ***local_12c;
  int local_128;
  int local_124;
  int local_120;
  int *local_11c;
  int ***local_118;
  int *local_114;
  int ***local_110;
  undefined1 local_10c [128];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086df0b;
  local_c = ExceptionList;
  local_130 = (int ***)&local_130;
  iVar13 = 0;
  local_128 = 0;
  local_124 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  local_12c = local_130;
  ppppiVar4 = (int ****)FUN_00465a70(param_2 * 0x14,0x40);
  local_110 = (int ***)ppppiVar4;
  if (0 < param_2) {
    do {
      uVar2 = *(undefined4 *)(param_1 + iVar13 * 4);
      pppiVar5 = (int ***)FUN_00500b50(uVar2);
      ppppiVar11 = ppppiVar4;
      if ((((pppiVar5 != (int ***)0x0) && (*(char *)((int)pppiVar5 + 0xe) == '\0')) &&
          (pppiVar5[9] != (int **)0x0)) &&
         (pppiVar6 = (int ***)FUN_004fb210(uVar2,pppiVar5[9],pppiVar5[10],0,0x18),
         pppiVar6 != (int ***)0x0)) {
        pppiVar3 = (int ***)pppiVar6[1];
        ppppiVar4[3] = pppiVar6;
        ppppiVar4[4] = pppiVar3;
        ppppiVar4[2] = pppiVar5;
        *local_12c = (int **)ppppiVar4;
        ppppiVar4[1] = local_12c;
        ppppiVar11 = ppppiVar4 + 5;
        *ppppiVar4 = (int ***)&local_130;
        local_12c = (int ***)ppppiVar4;
      }
      iVar13 = iVar13 + 1;
      ppppiVar4 = ppppiVar11;
    } while (iVar13 < param_2);
  }
  FUN_00462830(&LAB_004fb4f0);
  local_120 = 0;
  do {
    local_114 = (int *)0x0;
    local_118 = local_130;
    iVar13 = local_120;
    if ((int ****)local_130 != &local_130) {
      do {
        pppiVar5 = (int ***)local_118[3];
        ppiVar8 = *pppiVar5;
        if (((*(short *)((int)pppiVar5 + 0x12) == 0) &&
            (bVar1 = *(byte *)((int)pppiVar5 + 0x11), (bVar1 & 0x10) == 0)) &&
           (ppiVar8 != (int **)local_114)) {
          local_114 = (int *)ppiVar8;
          if (iVar13 == 0) {
            pcVar10 = " - Compressed";
            if ((bVar1 & 1) == 0) {
              pcVar10 = "";
            }
            FUN_004647c0(local_10c,&DAT_00893b40,local_118[2][2],pcVar10);
            iVar14 = (int)pppiVar5[2] + *local_11c;
            uVar12 = 0x2000;
            if ((*(byte *)((int)pppiVar5 + 0x11) & 1) == 0) {
              if (param_3 != 0) {
                uVar12 = param_3 & 0xf | 0x2000;
              }
            }
            else {
              uVar12 = 0x2040;
            }
            iVar7 = FUN_00464080(uVar12);
            if (iVar14 < iVar7) {
              ppiVar8 = (int **)FUN_00465a70(iVar14,uVar12);
              pppiVar5[5] = ppiVar8;
            }
            else {
              if ((uVar12 & 0xf) == 0) {
                local_124 = local_124 + iVar14;
              }
              local_128 = local_128 + iVar14;
            }
          }
          else if (iVar13 == 1) {
            if ((bVar1 & 1) != 0) {
              FUN_004647c0(local_8c,&DAT_008941f8,local_118[2][2]);
              iVar13 = (int)pppiVar5[3] + *local_11c;
              uVar12 = 0x2000;
              if (param_3 != 0) {
                uVar12 = param_3 & 0xf | 0x2000;
              }
              ppiVar8 = pppiVar5[5];
              pppiVar5[5] = (int **)0x0;
              iVar14 = FUN_00464080(uVar12);
              if (iVar13 < iVar14) {
                ppiVar9 = (int **)FUN_00465a70(iVar13,uVar12);
                pppiVar5[5] = ppiVar9;
              }
              else {
                local_128 = local_128 + iVar13;
                if ((char)uVar12 == '\0') {
                  local_124 = local_124 + iVar13;
                }
              }
              iVar13 = local_120;
              if (ppiVar8 != (int **)0x0) {
                FUN_004655f0(ppiVar8);
                iVar13 = local_120;
              }
            }
          }
          else if ((iVar13 == 2) && (pppiVar5[5] != (int **)0x0)) {
            FUN_004655f0(pppiVar5[5]);
            pppiVar5[5] = (int **)0x0;
          }
        }
        local_118 = (int ***)*local_118;
      } while ((int ****)local_118 != &local_130);
    }
    local_120 = iVar13 + 1;
  } while (local_120 < 3);
  local_130 = (int ***)&local_130;
  local_12c = local_130;
  FUN_004655f0(local_110);
  if ((param_4 != '\0') && (local_124 != 0)) {
                    /* WARNING: Subroutine does not return */
    __break();
  }
  if ((int ****)local_130 != &local_130) {
    do {
      pppiVar5 = (int ***)*local_130;
      pppiVar6 = (int ***)local_130[1];
      *pppiVar6 = (int **)pppiVar5;
      pppiVar5[1] = (int **)pppiVar6;
      thunk_FUN_007c7250(local_130);
    } while ((int ****)local_130 != &local_130);
  }
  ExceptionList = local_c;
  return local_128;
}

