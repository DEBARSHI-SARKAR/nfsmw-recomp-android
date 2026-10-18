/* speed.exe 00411fe0 FUN_00411fe0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00411fe0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  float fStack_20;
  
  iVar8 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  fVar1 = *(float *)(iVar8 + 0x10);
  fVar2 = *(float *)(iVar8 + 0x14);
  fVar3 = *(float *)(iVar8 + 0x18);
  pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fVar4 = *pfVar9 - fVar1;
  fVar6 = pfVar9[1] - fVar2;
  fVar5 = pfVar9[2] - fVar3;
  fVar13 = (float10)FUN_005c5e80(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
  fStack_20 = 60.0;
  if (*(int *)(iVar8 + 0x1c) != 0) {
    piVar10 = (int *)FUN_005d59f0(&LAB_00403700);
    if (piVar10 != (int *)0x0) {
      iVar11 = (**(code **)(*piVar10 + 0xb4))();
      fVar1 = fVar1 - *(float *)(iVar11 + 0x98);
      fVar2 = fVar2 - *(float *)(iVar11 + 0x9c);
      fVar3 = fVar3 - *(float *)(iVar11 + 0xa0);
      fVar14 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      fStack_20 = (float)(fVar14 + (float10)_DAT_008905f8);
    }
  }
  if ((float)fVar13 <= fStack_20) {
    if (*(int **)(iVar8 + 0x1c) == (int *)0x0) {
      pfVar9 = (float *)&DAT_008a2fb4;
    }
    else {
      piVar10 = (int *)(**(code **)(**(int **)(iVar8 + 0x1c) + 0x54))();
      pfVar9 = (float *)(**(code **)(*piVar10 + 0x24))();
    }
    pfVar12 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
    fVar13 = (float10)FUN_005c5e80((*pfVar9 - *pfVar12) * (*pfVar9 - *pfVar12) +
                                   (pfVar9[1] - pfVar12[1]) * (pfVar9[1] - pfVar12[1]) +
                                   (pfVar9[2] - pfVar12[2]) * (pfVar9[2] - pfVar12[2]));
    if (fVar13 <= (float10)_DAT_00891038) {
      cVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 0x68))();
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
        return cVar7 != '\0';
      }
    }
  }
  return false;
}

