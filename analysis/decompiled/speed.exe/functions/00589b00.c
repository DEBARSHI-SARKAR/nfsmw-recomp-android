/* speed.exe 00589b00 FUN_00589b00; analysis pseudocode, not buildable source.
 * calls 00572210 FUN_00572210
 * calls 00586050 FUN_00586050
 * calls 00575a20 FUN_00575a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00589b00(int param_1,short *param_2,short *param_3,char param_4,int *param_5)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  short sVar11;
  float10 fVar12;
  int local_1c;
  float local_14;
  
  iVar6 = 0;
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  do {
    if (param_3 <= param_2) {
      return iVar6;
    }
    sVar11 = 0;
    local_1c = 0;
    local_14 = 0.0;
    iVar9 = 0;
    psVar10 = param_2;
    if (_DAT_00890968 < (float)(*(int *)(param_1 + 0x2c) + -0x10)) {
      do {
        iVar9 = local_1c;
        if (((param_3 <= psVar10) || (sVar2 = *psVar10, sVar2 == 10)) || (sVar2 == 0x5e)) break;
        if (sVar2 == 0x24) {
          psVar7 = psVar10 + 1;
          iVar9 = 0;
          sVar3 = *psVar7;
          psVar8 = psVar7;
          while ((sVar3 != 0 && (sVar3 != 0x24))) {
            psVar1 = psVar8 + 1;
            psVar8 = psVar8 + 1;
            iVar9 = iVar9 + 1;
            sVar3 = *psVar1;
          }
          if (iVar9 == 0) goto LAB_00589c48;
          iVar9 = FUN_00572210(psVar10);
          if (iVar9 == 0) {
            fVar12 = (float10)0.0;
          }
          else {
            fVar12 = (float10)(int)*(short *)(iVar9 + 0x44);
          }
          fVar12 = fVar12 + (float10)local_14;
          psVar8 = psVar10;
          if ((*psVar10 == 0x24) && (sVar11 = *psVar7, psVar8 = psVar7, sVar11 != 0x24)) {
            while ((sVar11 != 0 && (sVar11 != 0x24))) {
              psVar8 = psVar7 + 1;
              psVar7 = psVar7 + 1;
              sVar11 = *psVar8;
            }
            psVar8 = psVar7 + 1;
          }
          iVar9 = local_1c + ((int)psVar8 - (int)psVar10 >> 1);
          sVar11 = 0;
        }
        else {
LAB_00589c48:
          fVar12 = (float10)FUN_00586050(sVar2,sVar11,0);
          fVar12 = fVar12 + (float10)local_14;
          iVar9 = local_1c + 1;
          psVar8 = psVar10 + 1;
          sVar11 = *psVar8;
        }
        local_14 = (float)fVar12;
        psVar10 = psVar8;
        local_1c = iVar9;
      } while (fVar12 < (float10)(*(int *)(param_1 + 0x2c) + -0x10));
    }
    iVar4 = iVar9;
    if ((int)param_3 - (int)param_2 >> 1 <= iVar9) {
      if (param_4 == '\0') {
        FUN_00575a20(param_2,iVar9);
      }
      if (param_5 != (int *)0x0) {
        *param_5 = *param_5 + iVar9 + 1;
      }
      return iVar6 + 1;
    }
    do {
      iVar5 = iVar4;
      iVar4 = iVar5 + -1;
      if (iVar4 < 1) goto LAB_00589cc1;
    } while (param_2[iVar4] != 0x20);
    if (0 < iVar4) {
      iVar9 = iVar5;
    }
LAB_00589cc1:
    if (param_4 == '\0') {
      FUN_00575a20(param_2,iVar9);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = *param_5 + iVar9 + 1;
    }
    iVar6 = iVar6 + 1;
    param_2 = param_2 + iVar9;
  } while( true );
}

