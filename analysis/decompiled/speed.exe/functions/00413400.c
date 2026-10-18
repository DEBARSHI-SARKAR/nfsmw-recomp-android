/* speed.exe 00413400 FUN_00413400; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

void __thiscall FUN_00413400(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float *unaff_retaddr;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_1c;
  undefined1 auStack_c [12];
  
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fVar1 = *pfVar3;
  fVar2 = pfVar3[1];
  puVar7 = auStack_c;
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x34))(puVar7);
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
  fVar8 = *pfVar3;
  fVar9 = pfVar3[1];
  fVar10 = pfVar3[2];
  iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 100))(puVar7,fVar8,fVar9,fVar10);
  if (*(int **)(iVar4 + 0x1c) != (int *)0x0) {
    piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x1c) + 0x54))();
    (**(code **)(*piVar5 + 0x24))();
  }
  FUN_005c5e80(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  fVar8 = fVar2 - param_2[2];
  fVar6 = (float10)FUN_005c5e80(fVar8 * fVar8 + (fStack_1c - *param_2) * (fStack_1c - *param_2));
  *param_3 = (float)fVar6;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  *unaff_retaddr = (*param_2 + 0.0) - fStack_1c;
  unaff_retaddr[1] = (fVar8 + 0.0) - fVar1;
  unaff_retaddr[2] = (fVar9 + 0.0) - fVar2;
  return;
}

