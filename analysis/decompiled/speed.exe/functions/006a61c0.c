/* speed.exe 006a61c0 FUN_006a61c0; analysis pseudocode, not buildable source.
 * calls 00695520 FUN_00695520
 */

int FUN_006a61c0(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar9 = 0;
  do {
    piVar1 = (int *)param_1[1];
    fVar2 = (float)param_1[2];
    piVar7 = (int *)0x0;
    param_1[3] = (int)fVar2;
    piVar4 = (int *)*param_1;
    if ((int *)*param_1 == (int *)0x0) {
LAB_006a6259:
      iVar3 = param_1[1];
      iVar8 = 0;
      if (param_1[1] != 0) {
        do {
          iVar6 = iVar3;
          if (fVar2 <= *(float *)(iVar6 + 0xc)) break;
          iVar9 = iVar9 + 1;
          iVar3 = *(int *)(iVar6 + 4);
          iVar8 = iVar6;
        } while (*(int *)(iVar6 + 4) != 0);
        if (iVar8 != 0) {
          FUN_00695520(iVar8,*(undefined4 *)(iVar8 + 4));
        }
      }
    }
    else {
      do {
        piVar5 = piVar4;
        if ((float)piVar5[3] <= fVar2) break;
        iVar9 = iVar9 + 1;
        piVar4 = (int *)*piVar5;
        piVar7 = piVar5;
      } while ((int *)*piVar5 != (int *)0x0);
      if (piVar7 == (int *)0x0) goto LAB_006a6259;
      iVar3 = *piVar7;
      if (*(int **)param_1[5] == param_1) {
        *(int *)param_1[5] = param_1[1];
      }
      if (*param_1 != 0) {
        *(int *)(*param_1 + 4) = param_1[1];
      }
      if ((int *)param_1[1] != (int *)0x0) {
        *(int *)param_1[1] = *param_1;
      }
      param_1[1] = 0;
      *param_1 = 0;
      if (iVar3 != 0) {
        *param_1 = iVar3;
        *(int **)(iVar3 + 4) = param_1;
      }
      param_1[1] = (int)piVar7;
      *piVar7 = (int)param_1;
      if (param_1[1] == *(int *)param_1[5]) {
        *(int *)param_1[5] = (int)param_1;
      }
    }
    iVar9 = iVar9 + 1;
    param_1 = piVar1;
    if (piVar1 == (int *)0x0) {
      return iVar9;
    }
  } while( true );
}

