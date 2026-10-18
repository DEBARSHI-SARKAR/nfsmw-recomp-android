/* speed.exe 0072c750 FUN_0072c750; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0072c750(int param_1,int param_2,short *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  int local_8;
  
  iVar1 = (int)param_3;
  iVar9 = 0;
  if (param_2 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(short *)(param_2 + 0x18)) {
    piVar6 = (int *)(param_1 + 0x10);
    param_3 = (short *)(param_2 + 0x1a);
    do {
      piVar7 = (int *)*piVar6;
      if (piVar7 != piVar6) {
        do {
          if ((short)piVar7[3] == *param_3) {
            iVar4 = 0;
            if (0 < (short)piVar7[4]) {
              psVar8 = (short *)((int)piVar7 + 0x12);
              do {
                iVar3 = 0;
                if (0 < iVar9) {
                  do {
                    if (*(short *)(iVar1 + iVar3 * 2) == *psVar8) {
                      if (-1 < iVar3) goto LAB_0072c7ee;
                      break;
                    }
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < iVar9);
                }
                if (iVar9 < param_4) {
                  *(short *)(iVar1 + iVar9 * 2) = *psVar8;
                  iVar9 = iVar9 + 1;
                }
LAB_0072c7ee:
                iVar4 = iVar4 + 1;
                psVar8 = psVar8 + 1;
              } while (iVar4 < (short)piVar7[4]);
            }
            break;
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != piVar6);
      }
      param_3 = param_3 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(short *)(param_2 + 0x18));
  }
  param_3 = (short *)0x0;
  if (0 < *(short *)(param_2 + 0x3a)) {
    psVar8 = (short *)(param_2 + 0x3c);
    do {
      sVar5 = *psVar8;
      iVar4 = 0;
      if (0 < iVar9) {
        do {
          if (*(short *)(iVar1 + iVar4 * 2) == sVar5) {
            if (-1 < iVar4) goto LAB_0072c85f;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar9);
      }
      if (iVar9 < param_4) {
        *(short *)(iVar1 + iVar9 * 2) = sVar5;
        iVar9 = iVar9 + 1;
      }
LAB_0072c85f:
      iVar4 = (int)sVar5 % 100;
      cVar2 = (char)((int)sVar5 / 100) + '@';
      if (((('@' < cVar2) && (cVar2 < 'U')) && (0 < iVar4)) && (iVar4 < DAT_00903164)) {
        sVar5 = sVar5 + (short)DAT_00903164;
        iVar4 = 0;
        if (0 < iVar9) {
          do {
            if (*(short *)(iVar1 + iVar4 * 2) == sVar5) {
              if (-1 < iVar4) goto LAB_0072c8ae;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar9);
        }
        if (iVar9 < param_4) {
          *(short *)(iVar1 + iVar9 * 2) = sVar5;
          iVar9 = iVar9 + 1;
        }
      }
LAB_0072c8ae:
      param_3 = (short *)((int)param_3 + 1);
      psVar8 = psVar8 + 1;
    } while ((int)param_3 < (int)*(short *)(param_2 + 0x3a));
  }
  return iVar9;
}

