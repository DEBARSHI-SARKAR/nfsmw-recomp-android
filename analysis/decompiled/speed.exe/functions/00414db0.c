/* speed.exe 00414db0 FUN_00414db0; analysis pseudocode, not buildable source.
 * calls 00410180 FUN_00410180
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00414db0(int *param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  float10 fVar10;
  float fStack_24;
  undefined4 local_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  local_20 = 0;
  iVar6 = (**(code **)(*(int *)param_1[0x25] + 8))();
  cVar2 = *(char *)(iVar6 + 0x21);
  piVar7 = (int *)(**(code **)(*param_1 + 8))();
  fVar10 = (float10)(**(code **)(*piVar7 + 0x90))();
  fVar1 = (float)fVar10;
  fVar10 = (float10)(**(code **)(*param_1 + 0x34))();
  fVar3 = _DAT_008910dc;
  if (cVar2 != '\0') {
    fVar3 = _DAT_008910e0;
  }
  if (fVar3 < (float)fVar10) {
    fVar3 = _DAT_008910d4;
    if (cVar2 != '\0') {
      fVar3 = _DAT_008910d8;
    }
    if (fVar3 < fVar1) {
      fVar3 = _DAT_008910d0;
      if (cVar2 != '\0') {
        fVar3 = _DAT_0089103c;
      }
      if (fVar3 < (float)fVar10 - fVar1) {
        (**(code **)(*param_1 + 8))();
        piVar7 = (int *)FUN_005d59f0(&LAB_004039f0);
        if (piVar7 != (int *)0x0) {
          pfVar8 = (float *)(**(code **)(*param_1 + 0x44))();
          fStack_18 = *pfVar8;
          fStack_14 = pfVar8[1];
          fStack_10 = pfVar8[2];
          piVar9 = (int *)(**(code **)(*param_1 + 8))();
          pfVar8 = (float *)(**(code **)(*piVar9 + 0xc))();
          fStack_18 = fStack_18 - *pfVar8;
          fStack_14 = fStack_14 - pfVar8[1];
          fStack_10 = fStack_10 - pfVar8[2];
          fStack_c = fStack_18;
          fStack_8 = fStack_14;
          fStack_4 = fStack_10;
          FUN_00410180(&fStack_18);
          pfVar8 = (float *)(**(code **)(*piVar7 + 0x24))();
          fVar3 = fStack_10 * pfVar8[2];
          fStack_24 = 0.8;
          fVar5 = fStack_14 * pfVar8[1];
          fVar4 = fStack_18 * *pfVar8;
          if (cVar2 == '\0') {
            fStack_24 = 0.95;
          }
          fVar10 = (float10)FUN_00410180(&fStack_18);
          if (fVar10 * (float10)fStack_24 * (float10)fVar1 < (float10)(fVar4 + fVar5 + fVar3)) {
            local_20 = 1;
          }
        }
      }
    }
  }
  (**(code **)(*(int *)param_1[0x25] + 0x20))(local_20);
  return;
}

