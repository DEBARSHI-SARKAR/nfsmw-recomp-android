/* speed.exe 00419240 FUN_00419240; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 005d59f0 FUN_005d59f0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00419240(int param_1,int param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  float10 fVar14;
  int local_20;
  int *local_1c;
  int local_18;
  float local_14;
  float local_10;
  int *local_c;
  
  local_14 = 0.0;
  local_10 = 0.0;
  local_1c = (int *)0x0;
  local_c = (int *)0x0;
  local_20 = 0;
  local_18 = 0;
  iVar6 = FUN_005cc240("AIGoalFleePursuit");
  puVar7 = *(undefined4 **)(param_1 + 0x60);
  if (puVar7 == puVar7 + *(int *)(param_1 + 0x68)) {
    return;
  }
  do {
    piVar13 = (int *)*puVar7;
    piVar8 = (int *)(**(code **)(*piVar13 + 0x44))();
    if ((*piVar8 != DAT_0092c4f4) &&
       (((piVar8 = (int *)FUN_005d59f0(&LAB_004038e0), piVar8 == (int *)0x0 ||
         (piVar9 = (int *)(**(code **)(*piVar8 + 0x80))(), *piVar9 == 0)) &&
        (cVar5 = (**(code **)(*piVar13 + 0x7c))(), cVar5 == '\0')))) {
      piVar9 = (int *)FUN_005d59f0(&LAB_00403700);
      if ((piVar9 == (int *)0x0) ||
         (piVar9 = (int *)(**(code **)(*piVar9 + 0xc0))(), *piVar9 != iVar6)) {
        fVar14 = (float10)(**(code **)(*piVar8 + 0x74))();
        bVar1 = fVar14 < (float10)_DAT_00890968 == (fVar14 == (float10)_DAT_00890968);
        if (!bVar1) {
          local_20 = local_20 + 1;
        }
        uVar10 = (**(code **)(*piVar13 + 0x4c))();
        iVar11 = FUN_005cc240(uVar10);
        if (iVar11 == param_2) {
          iVar11 = *(int *)(param_1 + 0xbc);
          pfVar12 = (float *)(**(code **)(*piVar13 + 0xc))();
          fVar2 = *pfVar12 - *(float *)(iVar11 + 0x10);
          fVar3 = pfVar12[1] - *(float *)(iVar11 + 0x14);
          fVar4 = pfVar12[2] - *(float *)(iVar11 + 0x18);
          fVar14 = (float10)FUN_005c5e80(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
          if (bVar1) {
            fVar14 = fVar14 + (float10)_DAT_00891184;
          }
          if (((float10)local_10 < fVar14) || (local_1c == (int *)0x0)) {
            local_14 = local_10;
            local_c = local_1c;
            local_1c = piVar13;
            local_10 = (float)fVar14;
          }
          else if ((float10)local_14 < fVar14) {
            local_14 = (float)fVar14;
            local_c = piVar13;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
      }
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != (undefined4 *)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68) * 4));
  if (((local_1c != (int *)0x0) &&
      (piVar13 = (int *)FUN_005d59f0(&LAB_004038e0), piVar13 != (int *)0x0)) && (local_18 < param_3)
     ) {
    fVar14 = (float10)(**(code **)(*piVar13 + 0x74))();
    if (fVar14 < (float10)_DAT_00890968 != (fVar14 == (float10)_DAT_00890968)) {
      if (local_20 < 3) goto LAB_00419452;
      local_20 = local_20 + -1;
    }
    (**(code **)(*piVar13 + 0xc))();
  }
LAB_00419452:
  if (((local_c != (int *)0x0) &&
      (piVar13 = (int *)FUN_005d59f0(&LAB_004038e0), piVar13 != (int *)0x0)) &&
     ((local_18 + 1 < param_3 &&
      ((fVar14 = (float10)(**(code **)(*piVar13 + 0x74))(),
       fVar14 < (float10)_DAT_00890968 == (fVar14 == (float10)_DAT_00890968) || (2 < local_20))))))
  {
    (**(code **)(*piVar13 + 0xc))();
  }
  return;
}

