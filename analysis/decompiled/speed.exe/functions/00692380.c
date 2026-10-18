/* speed.exe 00692380 FUN_00692380; analysis pseudocode, not buildable source.
 * calls 00692140 FUN_00692140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00692380(int param_1)

{
  bool bVar1;
  char cVar2;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fStack_8;
  
  FUN_00692140(0);
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x98))();
  fVar5 = (float10)_DAT_008967e0;
  bVar1 = fVar3 * fVar5 < (float10)_DAT_00891184;
  if (*(float *)(*(int *)(param_1 + 0x160) + 0x70) < _DAT_0089096c) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x114) + 0x24))(2);
    if ((cVar2 == '\0') &&
       (cVar2 = (**(code **)(**(int **)(param_1 + 0x114) + 0x24))(3), cVar2 == '\0')) {
      bVar1 = true;
    }
    uVar8 = 2;
    fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x114) + 0x50))(2);
    unaff_ESI = (float)fVar4;
    fVar6 = 4.2039e-45;
    fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x114) + 0x50))(3);
    fVar9 = (float)fVar4;
    if (bVar1) {
      fVar9 = (fVar9 + unaff_EDI) * _DAT_008933d4;
      unaff_EDI = fVar9;
    }
    (**(code **)(**(int **)(param_1 + 0x114) + 0x54))(2,unaff_EDI + fStack_8,fVar6,uVar8,fVar9);
    (**(code **)(**(int **)(param_1 + 0x114) + 0x54))(3,fVar6 + unaff_ESI);
  }
  bVar1 = (float)(fVar3 * fVar5) < _DAT_00891184;
  if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x160) + 0x70)) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x114) + 0x24))(0);
    if ((cVar2 == '\0') &&
       (cVar2 = (**(code **)(**(int **)(param_1 + 0x114) + 0x24))(1), cVar2 == '\0')) {
      bVar1 = true;
    }
    uVar8 = 0;
    (**(code **)(**(int **)(param_1 + 0x114) + 0x50))(0);
    fVar7 = 1.4013e-45;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x114) + 0x50))(1);
    fVar9 = (float)fVar5;
    fVar6 = unaff_ESI;
    if (bVar1) {
      fVar9 = (fVar9 + unaff_ESI) * _DAT_008933d4;
      fVar6 = fVar9;
    }
    (**(code **)(**(int **)(param_1 + 0x114) + 0x54))(0,fVar6 + fStack_8,fVar7,uVar8,fVar9);
    (**(code **)(**(int **)(param_1 + 0x114) + 0x54))(1,fVar7 + unaff_ESI);
  }
  return;
}

