/* speed.exe 00750b00 thunk_FUN_00744e20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00744e20(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar16 = DAT_009b37cc;
  if (DAT_009b37cc != DAT_009b37cc + DAT_009b37d4) {
    do {
      piVar2 = (int *)*piVar16;
      if ((((char)piVar2[0x18] == '\0') && (piVar2[10] == 3)) &&
         (iVar12 = piVar2[0x11], iVar12 != 0)) {
        (**(code **)(*piVar2 + 0x18))(auStack_50);
        uStack_68 = uStack_18;
        uStack_70 = uStack_20;
        piVar3 = *(int **)(param_1 + 0x44);
        uStack_6c = uStack_1c;
        if ((((piVar3 == (int *)(param_1 + 0x44)) || (piVar3 == (int *)0x0)) ||
            ((piVar3 = piVar3 + -1, piVar3 == (int *)0x0 ||
             ((cVar9 = (**(code **)(*piVar3 + 0x28))(), cVar9 != '\0' ||
              (iVar10 = (**(code **)(*piVar3 + 0x10))(), iVar10 == 0)))))) ||
           (*(int *)(iVar10 + 0x94) != piVar2[0xc])) {
          FUN_00742950(param_1,&uStack_70,auStack_50,0,param_2,param_3);
          iVar10 = piVar2[0x11];
          if (param_2 == 0) {
            if ((*(int *)(param_1 + 4) == 1) || (*(int *)(param_1 + 4) == 2)) {
              if (*(int *)(iVar10 + 0x1280) < 0) {
                *(undefined4 *)(iVar10 + 0x1280) = 0;
              }
              iVar13 = *(int *)(iVar10 + 0x1280) + 1;
              *(int *)(iVar10 + 0x1280) = iVar13;
              if (2 < iVar13) {
                *(undefined4 *)(iVar10 + 0x1280) = 0;
              }
              FUN_00444fe0(*(int *)(iVar10 + 0x1280) * 0x40 + 0x1190 + iVar10,auStack_50);
              iVar13 = (*(int *)(iVar10 + 0x1280) + 0x125) * 0x10;
              *(undefined4 *)(iVar13 + 4 + iVar10) = uStack_6c;
              puVar11 = (undefined4 *)(iVar13 + iVar10);
              puVar11[2] = uStack_68;
              *puVar11 = uStack_70;
            }
            pfVar4 = (float *)piVar2[0xe];
            if ((_DAT_00895074 <
                 SQRT(pfVar4[2] * pfVar4[2] + pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4)) &&
               (*(int *)(iVar12 + 0x117c) != 0)) {
              iStack_80 = 3;
              do {
                iVar13 = iStack_80 + *(int *)(iVar10 + 0x1280);
                iVar14 = (iVar13 + 1) % 3;
                pfVar4 = (float *)((iVar14 + 0x125) * 0x10 + iVar10);
                iVar12 = 0;
                iVar13 = ((iVar13 + 2) % 3 + 0x125) * 0x10;
                iVar15 = iVar13 + iVar10;
                fStack_60 = *(float *)(iVar13 + iVar10) - *pfVar4;
                fStack_5c = *(float *)(iVar15 + 4) - pfVar4[1];
                fStack_58 = *(float *)(iVar15 + 8) - pfVar4[2];
                if (0 < DAT_00903694) {
                  do {
                    pfVar7 = DAT_00915f84;
                    iVar12 = iVar12 + 1;
                    pfVar8 = DAT_00915f84 + 4;
                    fVar6 = (float)iVar12 / (float)DAT_00903694;
                    if (pfVar8 < DAT_00915f88) {
                      if (DAT_00915f84 != (float *)0x0) {
                        *DAT_00915f84 = fStack_60 * fVar6;
                        DAT_00915f84 = pfVar8;
                        pfVar7[1] = fStack_5c * fVar6;
                        pfVar7[2] = fStack_58 * fVar6;
                        fVar5 = pfVar4[2];
                        fVar1 = pfVar4[1];
                        *pfVar7 = fStack_60 * fVar6 + *pfVar4;
                        pfVar7[1] = fStack_5c * fVar6 + fVar1;
                        pfVar7[2] = fStack_58 * fVar6 + fVar5;
                        FUN_00742950(param_1,pfVar7,iVar14 * 0x40 + 0x1190 + iVar10,8,0,2);
                        pfVar8 = DAT_00915f84;
                      }
                    }
                    else {
                      DAT_00915f98 = DAT_00915f98 + 0x10;
                      DAT_00915f94 = 1;
                      pfVar8 = DAT_00915f84;
                    }
                    DAT_00915f84 = pfVar8;
                  } while (iVar12 < DAT_00903694);
                }
                iStack_80 = iStack_80 + -1;
              } while (0 < iStack_80);
            }
          }
        }
      }
      piVar16 = piVar16 + 1;
    } while (piVar16 != DAT_009b37cc + DAT_009b37d4);
  }
  return;
}

