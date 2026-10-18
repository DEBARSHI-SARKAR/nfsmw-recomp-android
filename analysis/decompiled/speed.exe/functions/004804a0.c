/* speed.exe 004804a0 FUN_004804a0; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 * calls 00652b10 thunk_FUN_007c7250
 * calls 0045da70 FUN_0045da70
 * calls 00652ad0 _malloc
 * calls 0047fe10 FUN_0047fe10
 * calls 0046eb70 FUN_0046eb70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004804a0(int param_1,int *param_2,int param_3)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  undefined **ppuVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float10 fVar15;
  int *piStack_24;
  int iStack_1c;
  float local_14;
  int iStack_c;
  int local_8;
  
  local_8 = 0;
  iVar14 = 0;
  if (param_1 != 0) {
    local_14 = 0.0;
    pvVar3 = _malloc(param_3 * 4);
    iVar14 = 0;
    piVar6 = param_2;
    if (0 < param_3) {
      do {
        iVar10 = 0;
        piVar4 = &DAT_008ee3a4;
        do {
          if (*piVar6 == *piVar4) {
            ppuVar5 = &PTR_PTR_008ee3a0 + iVar10 * 6;
            goto LAB_00480501;
          }
          piVar4 = piVar4 + 6;
          iVar10 = iVar10 + 1;
        } while ((int)piVar4 < 0x8ee434);
        ppuVar5 = (undefined **)0x0;
LAB_00480501:
        if ((code *)ppuVar5[4] == (code *)0x0) {
          fVar15 = (float10)_DAT_00890968;
        }
        else {
          fVar15 = (float10)(*(code *)ppuVar5[4])(param_1);
        }
        if (DAT_0091103a != '\0') {
          fVar15 = fVar15 + (float10)_DAT_00890cd4;
        }
        if (fVar15 < (float10)_DAT_00890cd4) {
          *(undefined4 *)((int)pvVar3 + iVar14 * 4) = 0;
        }
        else {
          *(float *)((int)pvVar3 + iVar14 * 4) = (float)fVar15;
          local_14 = (float)(fVar15 + (float10)local_14);
        }
        iVar14 = iVar14 + 1;
        piVar6 = piVar6 + 5;
      } while (iVar14 < param_3);
      if (_DAT_00890968 < local_14) {
        iVar10 = 0;
        iVar14 = 0;
        if (3 < param_3) {
          pfVar13 = (float *)((int)pvVar3 + 8);
          piVar6 = param_2 + 7;
          iVar12 = (param_3 - 4U >> 2) + 1;
          iVar14 = iVar12 * 4;
          do {
            if (_DAT_00890968 < pfVar13[-2]) {
              iVar10 = iVar10 + piVar6[-5];
            }
            if (_DAT_00890968 < pfVar13[-1]) {
              iVar10 = iVar10 + *piVar6;
            }
            if (_DAT_00890968 < *pfVar13) {
              iVar10 = iVar10 + piVar6[5];
            }
            if (_DAT_00890968 < pfVar13[1]) {
              iVar10 = iVar10 + piVar6[10];
            }
            pfVar13 = pfVar13 + 4;
            piVar6 = piVar6 + 0x14;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        if (iVar14 < param_3) {
          piVar6 = param_2 + iVar14 * 5 + 2;
          do {
            if (_DAT_00890968 < *(float *)((int)pvVar3 + iVar14 * 4)) {
              iVar10 = iVar10 + *piVar6;
            }
            iVar14 = iVar14 + 1;
            piVar6 = piVar6 + 5;
          } while (iVar14 < param_3);
        }
        if (0 < iVar10) {
          piVar6 = _malloc(iVar10 * 0xc);
          piStack_24 = param_2 + 2;
          iStack_c = 0;
          iVar14 = 0;
          do {
            fVar1 = *(float *)((int)pvVar3 + iStack_c * 4);
            iVar10 = iVar14;
            if (_DAT_00890968 < fVar1) {
              iStack_1c = 0;
              if (0 < *piStack_24) {
                piVar4 = piVar6 + iVar14 * 3 + 2;
                do {
                  piVar7 = (int *)FUN_0045d380(iStack_1c);
                  if (piVar7 == piStack_24 + 1) {
                    piVar7 = (int *)0x0;
                  }
                  if ((((-1 < (short)piVar7[5] + -1) || ((short)piVar7[5] == 1)) &&
                      (piVar9 = piVar7 + 10, piVar9 != (int *)0x0)) && ((char)*piVar9 != '\0')) {
                    iVar12 = 0;
                    piVar8 = &DAT_008ee3a4;
                    do {
                      if (piStack_24[-2] == *piVar8) {
                        ppuVar5 = &PTR_PTR_008ee3a0 + iVar12 * 6;
                        goto LAB_00480712;
                      }
                      piVar8 = piVar8 + 6;
                      iVar12 = iVar12 + 1;
                    } while ((int)piVar8 < 0x8ee434);
                    ppuVar5 = (undefined **)0x0;
LAB_00480712:
                    if ((code *)ppuVar5[5] == (code *)0x0) {
                      DAT_009110a0 = 0;
                    }
                    else {
                      DAT_009110a0 = (*(code *)ppuVar5[5])(param_1);
                    }
                    if (_DAT_0089481c <= fVar1) {
LAB_00480775:
                      piVar4[-2] = (int)piVar7;
                      piVar4[-1] = (int)fVar1;
                      *(undefined1 *)piVar4 = DAT_009110a0;
                      iVar10 = iVar10 + 1;
                      piVar4 = piVar4 + 3;
                    }
                    else {
                      cVar2 = FUN_0047fe10(piVar9,0,param_1);
                      if (cVar2 != '\0') {
                        piVar9 = &DAT_00911014;
                        do {
                          if (piVar7 == (int *)*piVar9) goto LAB_0048078b;
                          piVar9 = piVar9 + 1;
                        } while ((int)piVar9 < 0x911020);
                        goto LAB_00480775;
                      }
                    }
LAB_0048078b:
                    DAT_009110a0 = 0;
                  }
                  iStack_1c = iStack_1c + 1;
                } while (iStack_1c < *piStack_24);
              }
              iVar12 = iVar10 - iVar14;
              if (0 < iVar12) {
                fVar1 = _DAT_0089096c / (float)iVar12;
                if (3 < iVar12) {
                  iVar12 = iVar14 * 3;
                  iVar11 = ((iVar10 - iVar14) - 4U >> 2) + 1;
                  iVar14 = iVar14 + iVar11 * 4;
                  pfVar13 = (float *)(piVar6 + iVar12 + 4);
                  do {
                    iVar11 = iVar11 + -1;
                    pfVar13[-3] = fVar1 * pfVar13[-3];
                    *pfVar13 = fVar1 * *pfVar13;
                    pfVar13[3] = fVar1 * pfVar13[3];
                    pfVar13[6] = fVar1 * pfVar13[6];
                    pfVar13 = pfVar13 + 0xc;
                  } while (iVar11 != 0);
                }
                if (iVar14 < iVar10) {
                  iVar12 = iVar10 - iVar14;
                  pfVar13 = (float *)(piVar6 + iVar14 * 3 + 1);
                  do {
                    iVar12 = iVar12 + -1;
                    *pfVar13 = fVar1 * *pfVar13;
                    pfVar13 = pfVar13 + 3;
                  } while (iVar12 != 0);
                }
              }
            }
            iStack_c = iStack_c + 1;
            piStack_24 = piStack_24 + 5;
            iVar14 = iVar10;
          } while (iStack_c < param_3);
          if (0 < iVar10) {
            fVar15 = (float10)FUN_0045da70(local_14);
            iVar14 = 0;
            if (0 < iVar10) {
              pfVar13 = (float *)(piVar6 + 1);
              do {
                if (fVar15 < (float10)*pfVar13) {
                  local_8 = piVar6[iVar14 * 3];
                  DAT_009110a0 = (undefined1)piVar6[iVar14 * 3 + 2];
                  if (local_8 == 0) {
                    local_8 = *piVar6;
                    DAT_009110a0 = (undefined1)piVar6[2];
                  }
                  goto LAB_004808d2;
                }
                iVar14 = iVar14 + 1;
                fVar15 = fVar15 - (float10)*pfVar13;
                pfVar13 = pfVar13 + 3;
              } while (iVar14 < iVar10);
            }
            local_8 = *piVar6;
            DAT_009110a0 = (undefined1)piVar6[2];
          }
LAB_004808d2:
          thunk_FUN_007c7250(piVar6);
        }
      }
    }
    thunk_FUN_007c7250(pvVar3);
    iVar14 = local_8;
  }
  return iVar14;
}

