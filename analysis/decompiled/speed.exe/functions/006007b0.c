/* speed.exe 006007b0 FUN_006007b0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005faa20 FUN_005faa20
 * calls 005da150 FUN_005da150
 * calls 005fbee0 FUN_005fbee0
 * calls 005dc6d0 FUN_005dc6d0
 * calls 005fba00 FUN_005fba00
 * calls 005e97b0 FUN_005e97b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006007b0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float local_1c;
  float local_18;
  float local_10 [4];
  
  if (*(char *)(param_1 + 0x21) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x154) == '\0') {
    local_18 = *(float *)(param_1 + 0x150);
  }
  else {
    fVar9 = (float10)FUN_006e8de0();
    local_18 = (float)((fVar9 - (float10)*(float *)(param_1 + 0x14c)) +
                      (float10)*(float *)(param_1 + 0x150));
  }
  fVar1 = *(float *)(param_1 + 0x18);
  local_1c = local_18;
  if (_DAT_00890cd4 < fVar1) {
    local_1c = local_18 / (fVar1 * _DAT_00890dc4);
  }
  if (((*(int *)(DAT_0091e000 + 0x1968) != 0) && (iVar4 = FUN_005faa20(), iVar4 == 2)) &&
     ((*(char *)(param_1 + 0x1d) != '\0' ||
      ((*(char *)(param_1 + 0x1e) != '\0' || (fVar1 < _DAT_008a3728)))))) {
    local_1c = 0.0;
    *(undefined1 *)(param_1 + 400) = 1;
  }
  if ((((*(int *)(DAT_0091e000 + 0x1968) != 0) && (iVar4 = FUN_005faa20(), iVar4 == 5)) &&
      (*(int *)(param_1 + 4) != 0)) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    piVar5 = (int *)FUN_005da150();
    if (_DAT_00890968 < local_1c - local_18) {
      FUN_005dc6d0(-((local_1c - local_18) * (float)*piVar5));
    }
  }
  cVar3 = FUN_005fbee0();
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 4) == 0) goto LAB_006009f5;
    iVar6 = FUN_005fba00();
    iVar7 = 0;
    iVar4 = *(int *)(param_1 + 0x28);
    fVar2 = _DAT_00890968;
    if (0 < iVar6) {
      pfVar8 = (float *)(DAT_0091e000 + 0x19bc + *(int *)(param_1 + 0xc) * 4);
      do {
        iVar4 = iVar7;
        if (*pfVar8 == _DAT_00890968) break;
        iVar7 = iVar7 + 1;
        fVar2 = *pfVar8 + fVar2;
        pfVar8 = pfVar8 + 0x10;
        iVar4 = *(int *)(param_1 + 0x28);
      } while (iVar7 < iVar6);
    }
    *(float *)(DAT_0091e000 + 0x19bc + (iVar4 * 0x10 + *(int *)(param_1 + 0xc)) * 4) =
         local_1c - fVar2;
  }
  if (*(int *)(param_1 + 4) != 0) {
    fVar2 = _DAT_0089096c;
    if (*(char *)(param_1 + 400) != '\0') {
      fVar2 = fVar1;
    }
    local_10[0] = 0.2;
    local_10[1] = 0.4;
    local_10[2] = 0.6;
    local_10[3] = 0.8;
    iVar4 = 0;
    pfVar8 = (float *)(param_1 + 300);
    do {
      if (*pfVar8 == _DAT_00890968) {
        if (fVar2 < local_10[iVar4]) {
          *pfVar8 = 0.0;
        }
        else {
          *pfVar8 = local_1c * local_10[iVar4];
        }
      }
      if (pfVar8[4] == 0.0) {
        pfVar8[4] = *(float *)(param_1 + 0x10);
      }
      iVar4 = iVar4 + 1;
      pfVar8 = pfVar8 + 1;
    } while (iVar4 < 4);
  }
LAB_006009f5:
  if (*(char *)(param_1 + 400) == '\0') {
    *(undefined1 *)(param_1 + 0x154) = 0;
    *(float *)(param_1 + 0x150) = local_1c;
    FUN_005e97b0();
  }
  return;
}

