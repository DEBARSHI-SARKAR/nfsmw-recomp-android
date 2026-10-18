/* speed.exe 0048c5d0 FUN_0048c5d0; analysis pseudocode, not buildable source.
 * calls 0048af30 FUN_0048af30
 * calls 0048a910 FUN_0048a910
 * calls 00487160 FUN_00487160
 * calls 0048c270 FUN_0048c270
 * calls 00401670 FUN_00401670
 * calls 0048a000 FUN_0048a000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048c5d0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [116];
  undefined1 auStack_114 [144];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [116];
  
  piVar10 = *(int **)(param_1 + 0x34);
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar10 == (int *)0x0) {
    return;
  }
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(char *)(param_1 + 0x38) != '\0')) {
    return;
  }
  pfVar6 = (float *)(**(code **)*piVar1)();
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[2];
  fStack_260 = *(float *)(param_1 + 0x10);
  fStack_25c = *(float *)(param_1 + 0x14);
  fStack_258 = *(float *)(param_1 + 0x18);
  uVar7 = (**(code **)(*piVar1 + 0x18))();
  FUN_00401670(&fStack_260,uVar7,&fStack_254);
  fStack_260 = fStack_254 + fVar2;
  fStack_25c = fStack_250 + fVar3;
  fStack_258 = fStack_24c + fVar4;
  pfVar6 = (float *)(**(code **)*piVar10)();
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[2];
  fStack_254 = *(float *)(param_1 + 0x28);
  fStack_250 = *(float *)(param_1 + 0x2c);
  fStack_24c = *(float *)(param_1 + 0x30);
  uVar7 = (**(code **)(*piVar10 + 0x18))();
  FUN_00401670(&fStack_254,uVar7,&fStack_248);
  fStack_254 = fStack_248 + fVar2;
  fStack_250 = fStack_244 + fVar3;
  fStack_24c = fStack_240 + fVar4;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(char *)(param_1 + 0x20) == '\0') {
      fVar11 = (float10)(**(code **)(*piVar1 + 0x2c))();
      fStack_22c = (float)fVar11;
      fVar11 = (float10)(**(code **)(*piVar10 + 0x2c))();
      fStack_230 = (float)fVar11;
      fVar11 = (float10)(**(code **)(*piVar1 + 0x2c))();
      fVar11 = (float10)fStack_22c / (fVar11 + (float10)fStack_230);
    }
    else {
      fVar11 = (float10)_DAT_0089096c;
    }
  }
  else {
    fVar11 = (float10)_DAT_00890968;
  }
  fVar12 = (float10)_DAT_0089096c - fVar11;
  fStack_248 = (float)((float10)fStack_260 * fVar11);
  fStack_244 = (float)((float10)fStack_25c * fVar11);
  fStack_23c = fStack_248 + (float)((float10)fStack_254 * fVar12);
  fStack_238 = fStack_244 + (float)((float10)fStack_250 * fVar12);
  fStack_240 = (float)(fVar11 * (float10)fStack_258 + (float10)(float)((float10)fStack_24c * fVar12)
                      );
  fStack_234 = fStack_240;
  FUN_0048af30(&fStack_23c,*(char *)(param_1 + 0x20) == '\0');
  FUN_0048af30(&fStack_23c,*(char *)(param_1 + 0x38) == '\0');
  fStack_260 = fStack_23c;
  fStack_25c = fStack_238;
  fStack_258 = fStack_234;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_00487160(piVar1);
      FUN_00487160(piVar10);
      cVar5 = FUN_0048a000(auStack_114,&fStack_260,0x20);
      if (cVar5 == '\0') goto LAB_0048c8be;
      (**(code **)(*piVar1 + 0x14))(auStack_190);
      (**(code **)(*piVar1 + 0xc))(auStack_188);
      (**(code **)(*piVar10 + 0x14))(auStack_84);
      puVar8 = auStack_74;
    }
    else {
      FUN_00487160(piVar10);
      cVar5 = FUN_0048a910(&fStack_260,0x20);
      if (cVar5 == '\0') goto LAB_0048c8be;
      (**(code **)(*piVar10 + 0x14))(auStack_190);
      puVar8 = auStack_188;
    }
    iVar9 = *piVar10;
  }
  else {
    FUN_00487160(piVar1);
    cVar5 = FUN_0048a910(&fStack_260,0x20);
    if (cVar5 == '\0') goto LAB_0048c8be;
    (**(code **)(*piVar1 + 0x14))(auStack_190);
    iVar9 = *piVar1;
    puVar8 = auStack_188;
  }
  (**(code **)(iVar9 + 0xc))(puVar8);
LAB_0048c8be:
  piVar10 = (int *)**(int **)(param_1 + 0x44);
  if (piVar10 != *(int **)(param_1 + 0x44)) {
    do {
      FUN_0048c270(&fStack_23c);
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)(param_1 + 0x44));
  }
  return;
}

