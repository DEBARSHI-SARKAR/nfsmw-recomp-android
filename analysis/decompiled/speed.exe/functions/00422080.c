/* speed.exe 00422080 FUN_00422080; analysis pseudocode, not buildable source.
 * calls 0040edd0 FUN_0040edd0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 006533b0 FUN_006533b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00422080(int param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fStack0000000c;
  float fVar10;
  float fStack_14;
  undefined4 uStack_c;
  
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x40) + 0x78))(param_2);
  FUN_0040edd0(&stack0xffffffe8,DAT_0092cd7c,DAT_0092cd7c + DAT_0092cd84 * 4,uStack_c,(float)fVar6);
  fVar1 = *(float *)(param_1 + 0x88);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x94))();
  pfVar3 = (float *)FUN_00454810(0xcc320329,0);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_006269b0(4);
  }
  fVar9 = *pfVar3;
  if (((*(char *)(param_1 + 100) == '\0') || (DAT_0091e000 == 0)) ||
     (*(char *)(DAT_0091e000 + 0x198a) == '\0')) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
    if (iVar5 != 0) {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
      cVar2 = (**(code **)(*piVar4 + 0x124))();
      if (cVar2 != '\0') {
        fVar9 = fVar9 * _DAT_00890d44;
      }
    }
  }
  else {
    fVar9 = fVar9 + fVar9;
  }
  fVar7 = (float10)FUN_006533b0(param_2);
  if (param_3 == '\0') {
    _param_3 = 1.0;
  }
  else {
    _param_3 = *(float *)(param_1 + 0x8c) + _DAT_0089096c;
  }
  fStack0000000c = 1.0;
  fVar10 = 0.0;
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar5 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x38))(), iVar5 == 1)) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x34))(&stack0xffffffe8);
    fVar10 = fStack_14 * _DAT_00891520;
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x54) + 4))();
    fVar8 = (float10)FUN_006533b0((float)fVar8);
    fStack0000000c = (float)fVar8;
  }
  fVar6 = (float10)fStack0000000c * (float10)_param_3 * (float10)(float)fVar7 * (float10)fVar9 *
          (float10)(((float)fVar6 - fStack_14) * fVar1 + fStack_14) + (float10)fVar10;
  if (fVar6 <= (float10)_DAT_00890968) {
    fVar6 = (float10)_DAT_00890968;
  }
  return fVar6;
}

