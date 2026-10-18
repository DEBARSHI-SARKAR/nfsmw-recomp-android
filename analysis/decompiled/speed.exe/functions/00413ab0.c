/* speed.exe 00413ab0 FUN_00413ab0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00413ab0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  float *unaff_retaddr;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_c [12];
  
  pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x34))(auStack_c);
  pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
  fVar3 = *pfVar9;
  fVar4 = pfVar9[1];
  fVar5 = pfVar9[2];
  iVar10 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  if (*(int **)(iVar10 + 0x1c) == (int *)0x0) {
    pfVar9 = (float *)&DAT_008a2fb4;
  }
  else {
    piVar11 = (int *)(**(code **)(**(int **)(iVar10 + 0x1c) + 0x54))();
    pfVar9 = (float *)(**(code **)(*piVar11 + 0x24))();
  }
  fVar6 = *pfVar9;
  fVar7 = pfVar9[1];
  fVar8 = pfVar9[2];
  FUN_005c5e80(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar12 = (float10)FUN_005c5e80(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  fStack_1c = *param_2;
  fStack_18 = param_2[1];
  fVar3 = param_2[2];
  if ((float10)_DAT_00890dc4 < fVar12) {
    fVar3 = ((*param_2 - fStack_28) * fVar6 +
            (param_2[2] - fVar2) * fVar8 + fVar7 * (param_2[1] - fVar1)) *
            (_DAT_0089096c / (float)fVar12) * (_DAT_0089096c / (float)fVar12) * _DAT_0089107c;
    fStack_1c = fVar3 * fVar6 + (*param_2 - fStack_28) + fStack_28;
    fStack_18 = fVar1 + fVar7 * fVar3 + (param_2[1] - fVar1);
    fVar3 = fVar2 + fVar8 * fVar3 + (param_2[2] - fVar2);
  }
  *unaff_retaddr = (fVar6 + fStack_1c) - fStack_28;
  unaff_retaddr[1] = (fVar7 + fStack_18) - fVar1;
  unaff_retaddr[2] = (fVar8 + fVar3) - fVar2;
  return;
}

