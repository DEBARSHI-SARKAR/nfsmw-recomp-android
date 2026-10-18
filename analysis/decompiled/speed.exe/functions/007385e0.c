/* speed.exe 007385e0 FUN_007385e0; analysis pseudocode, not buildable source.
 * calls 007c5250 _qsort
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007385e0(void *param_1,size_t param_2,_PtFuncCompare *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 1;
  _qsort(param_1,param_2,4,param_3);
  iVar7 = 2;
  if (2 < (int)param_2) {
    do {
      if (3 < iVar8) {
        pfVar1 = *(float **)((int)param_1 + iVar7 * 4);
        puVar6 = (undefined4 *)((int)param_1 + iVar8 * 4 + -8);
        do {
          pfVar2 = (float *)puVar6[2];
          fVar5 = (*pfVar1 - *pfVar2) * (((float *)puVar6[1])[1] - pfVar2[1]) -
                  (*(float *)puVar6[1] - *pfVar2) * (pfVar1[1] - pfVar2[1]);
          if (fVar5 < _DAT_00890968 == (fVar5 == _DAT_00890968)) goto LAB_00738736;
          pfVar2 = (float *)puVar6[1];
          fVar5 = (*pfVar1 - *pfVar2) * (((float *)*puVar6)[1] - pfVar2[1]) -
                  (pfVar1[1] - pfVar2[1]) * (*(float *)*puVar6 - *pfVar2);
          if (fVar5 < _DAT_00890968 == (fVar5 == _DAT_00890968)) {
            iVar8 = iVar8 + -1;
            goto LAB_00738736;
          }
          pfVar2 = (float *)*puVar6;
          fVar5 = (*pfVar1 - *pfVar2) * (((float *)puVar6[-1])[1] - pfVar2[1]) -
                  (*(float *)puVar6[-1] - *pfVar2) * (pfVar1[1] - pfVar2[1]);
          if (fVar5 < _DAT_00890968 == (fVar5 == _DAT_00890968)) {
            iVar8 = iVar8 + -2;
            goto LAB_00738736;
          }
          pfVar2 = (float *)puVar6[-1];
          fVar5 = (*pfVar1 - *pfVar2) * (((float *)puVar6[-2])[1] - pfVar2[1]) -
                  (pfVar1[1] - pfVar2[1]) * (*(float *)puVar6[-2] - *pfVar2);
          if (fVar5 < _DAT_00890968 == (fVar5 == _DAT_00890968)) {
            iVar8 = iVar8 + -3;
            goto LAB_00738736;
          }
          iVar8 = iVar8 + -4;
          puVar6 = puVar6 + -4;
        } while (3 < iVar8);
      }
      if (0 < iVar8) {
        pfVar1 = *(float **)((int)param_1 + iVar7 * 4);
        do {
          pfVar2 = *(float **)((int)param_1 + iVar8 * 4);
          pfVar3 = *(float **)((int)param_1 + iVar8 * 4 + -4);
          fVar5 = (*pfVar1 - *pfVar2) * (pfVar3[1] - pfVar2[1]) -
                  (*pfVar3 - *pfVar2) * (pfVar1[1] - pfVar2[1]);
          if (fVar5 < _DAT_00890968 == (fVar5 == _DAT_00890968)) break;
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
      }
LAB_00738736:
      uVar4 = *(undefined4 *)((int)param_1 + iVar8 * 4 + 4);
      iVar8 = iVar8 + 1;
      *(undefined4 *)((int)param_1 + iVar8 * 4) = *(undefined4 *)((int)param_1 + iVar7 * 4);
      *(undefined4 *)((int)param_1 + iVar7 * 4) = uVar4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_2);
  }
  return iVar8;
}

