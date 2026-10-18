/* speed.exe 0042bd00 FUN_0042bd00; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0042bd00(int *param_1,float param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float10 fVar12;
  float fStack_14;
  float fStack_c;
  
  iVar6 = (**(code **)(*param_1 + 0x1c))();
  if (iVar6 != 0) {
    piVar7 = (int *)(**(code **)(*param_1 + 0x1c))();
    iVar6 = (**(code **)(*piVar7 + 8))();
    if (iVar6 != 0) {
      piVar7 = (int *)(**(code **)(*param_1 + 0x1c))();
      iVar6 = (**(code **)(*piVar7 + 8))();
      pfVar11 = (float *)(iVar6 + 0x10);
      piVar7 = (int *)(**(code **)(*param_1 + 0x1c))();
      (**(code **)(*piVar7 + 0x140))();
      puVar10 = (undefined4 *)param_1[3];
      fStack_c = 3.4028235e+38;
      fStack_14 = 3.4028235e+38;
      if (puVar10 != (undefined4 *)param_1[4]) {
        do {
          piVar7 = (int *)*puVar10;
          cVar5 = (**(code **)(*piVar7 + 0x88))();
          if ((cVar5 != '\0') && (cVar5 = (**(code **)(*piVar7 + 0x7c))(), cVar5 == '\0')) {
            iVar8 = (**(code **)(*piVar7 + 0xc))();
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar6 + 0x14);
            pfVar9 = (float *)(**(code **)(*piVar7 + 0xc))();
            fVar4 = pfVar9[1] - *(float *)(iVar6 + 0x14);
            fVar3 = pfVar9[2] - *(float *)(iVar6 + 0x18);
            fVar12 = (float10)FUN_005c5e80((*pfVar9 - *pfVar11) * (*pfVar9 - *pfVar11) +
                                           fVar4 * fVar4 + fVar3 * fVar3);
            fVar3 = (float)fVar12;
            pfVar9 = (float *)(**(code **)(*piVar7 + 0xc))();
            fVar4 = pfVar9[2] - *(float *)(iVar6 + 0x18);
            fVar12 = (float10)FUN_005c5e80(fVar4 * fVar4 +
                                           (*pfVar9 - *pfVar11) * (*pfVar9 - *pfVar11));
            if ((fVar3 < fStack_c) && (fStack_c = fVar3, param_4 != (undefined4 *)0x0)) {
              *param_4 = piVar7;
            }
            if ((ABS(fVar1 - fVar2) < _DAT_00890d44) && (fVar12 < (float10)fStack_14)) {
              fStack_14 = (float)fVar12;
            }
            if ((fVar3 < _DAT_00890544) &&
               (piVar7 = (int *)FUN_005d59f0(&LAB_004038e0), piVar7 != (int *)0x0)) {
              (**(code **)(*piVar7 + 0x88))();
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != (undefined4 *)param_1[4]);
      }
      *param_3 = fStack_14;
      if ((_DAT_00890968 < param_2) &&
         (*(undefined1 *)(param_1 + 0x17) = 0, fStack_14 < _DAT_008916d0)) {
        fVar1 = *(float *)(iVar6 + 0x18) - (float)param_1[0xf];
        fVar2 = *(float *)(iVar6 + 0x14) - (float)param_1[0xe];
        if (fVar1 * fVar1 +
            fVar2 * fVar2 + (*pfVar11 - (float)param_1[0xd]) * (*pfVar11 - (float)param_1[0xd]) <
            _DAT_00890f90) {
          fVar1 = (float)param_1[0x16];
          param_1[0x16] = (int)(param_2 + fVar1);
          if (param_2 + fVar1 <= _DAT_00890560) {
            piVar7 = (int *)(**(code **)(*param_1 + 0x1c))();
            iVar6 = (**(code **)(*piVar7 + 0x114))();
            if (iVar6 != 2) goto LAB_0042bf58;
          }
          *(undefined1 *)(param_1 + 0x17) = 1;
          return (float10)fStack_c;
        }
        param_1[0x13] = (int)*pfVar11;
        param_1[0x14] = *(int *)(iVar6 + 0x14);
        param_1[0x15] = *(int *)(iVar6 + 0x18);
        param_1[0x16] = 0;
      }
LAB_0042bf58:
      return (float10)fStack_c;
    }
  }
  return (float10)_DAT_008908bc;
}

