/* speed.exe 004293d0 FUN_004293d0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00405870 FUN_00405870
 * calls 004023c0 FUN_004023c0
 * calls 005ff990 FUN_005ff990
 * calls 00727480 FUN_00727480
 * calls 00653e20 FUN_00653e20
 * calls 00460bf0 FUN_00460bf0
 * calls 004255a0 FUN_004255a0
 * calls 00404af0 FUN_00404af0
 * calls 006533b0 FUN_006533b0
 * calls 004292a0 FUN_004292a0
 * calls 007c4b80 FUN_007c4b80
 * calls 00408fa0 FUN_00408fa0
 * calls 00654af0 FUN_00654af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004293d0(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *pvStack_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0086816c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  if ((DAT_0090d990 & 1) == 0) {
    DAT_0090d990 = DAT_0090d990 | 1;
    local_14 = 0;
    ExceptionList = &pvStack_1c;
    DAT_0090d98c = FUN_00460bf0();
  }
  if ((DAT_0090d990 & 2) == 0) {
    DAT_0090d990 = DAT_0090d990 | 2;
    local_14 = 1;
    DAT_0090d988 = FUN_00460bf0();
  }
  local_14 = 0xffffffff;
  *(float *)(param_1 + 0x7c0) = *(float *)(param_1 + 0x7c0) - param_2;
  FUN_004292a0();
  cVar3 = (**(code **)(*(int *)(param_1 + 0x758) + 0x24))();
  if ((cVar3 == '\0') || (DAT_009b3829 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x51) = uVar4;
  pfVar7 = (float *)(param_1 + 0x7ac);
  *pfVar7 = 0.0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  cVar3 = (**(code **)(*(int *)(param_1 + 0x758) + 0x24))();
  if (cVar3 != '\0') {
    piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    cVar3 = (**(code **)(*piVar5 + 0x20))();
    bVar2 = true;
    if (cVar3 == '\0') goto LAB_004294d8;
  }
  bVar2 = false;
LAB_004294d8:
  fStack_58 = (float)(**(code **)(*(int *)(param_1 + 0x758) + 0x50))();
  if (((bVar2) && (fStack_58 != 0.0)) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x24))(), cVar3 == '\0')) {
    if (DAT_0092cd84 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)*DAT_0092cd7c;
    }
    fVar1 = param_2 + *(float *)(param_1 + 0x7b4);
    *(float *)(param_1 + 0x7b4) = fVar1;
    if ((_DAT_0089096c < fVar1) && (piVar5 != (int *)0x0)) {
      fVar1 = *(float *)((int)fStack_58 + 0x18);
      fStack_48 = 0.0;
      fStack_4c = 0.0;
      FUN_004255a0(&fStack_4c);
      fVar10 = (float10)FUN_00408fa0();
      fStack_40 = 0.0;
      uStack_3c = 0;
      fStack_5c = (float)((fVar10 - (float10)fVar1) * (float10)*(float *)(DAT_0091e000 + 0x4484) *
                         (float10)_DAT_00890dc4);
      uStack_38 = 0;
      cVar3 = (**(code **)(*piVar5 + 0xd4))();
      if (cVar3 != '\0') {
        fStack_5c = ((_DAT_0089096c - fStack_40) * _DAT_00890634 + _DAT_0089096c) * fStack_5c;
      }
      FUN_00653e20(fStack_5c);
      *(float *)(param_1 + 0x7b4) = *(float *)(param_1 + 0x7b4) - _DAT_0089096c;
    }
    piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    iVar6 = (**(code **)(*piVar5 + 0x38))();
    cVar3 = FUN_005ff990(fStack_58,*(undefined4 *)(param_1 + 0x7b0));
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x7b8) = 0;
      *pfVar7 = 0.0;
    }
    else if (iVar6 != 2) {
      if (*pfVar7 <= _DAT_00890968) {
        if (*pfVar7 < _DAT_00890968) {
          cVar3 = FUN_00404af0();
          if (cVar3 == '\0') {
            fVar10 = (float10)FUN_006533b0();
            *pfVar7 = (float)(fVar10 * (float10)*pfVar7);
          }
          else {
            *pfVar7 = *pfVar7 * _DAT_00890634;
          }
        }
      }
      else {
        cVar3 = FUN_00404af0();
        if (cVar3 == '\0') {
          fVar10 = (float10)FUN_006533b0();
          *pfVar7 = (float)(fVar10 * (float10)*pfVar7);
        }
        else {
          *pfVar7 = *pfVar7 * _DAT_00890634;
        }
      }
    }
  }
  piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x54))();
  pfVar7 = (float *)(**(code **)(*piVar5 + 0x20))();
  fStack_4c = *pfVar7;
  fStack_48 = pfVar7[1];
  fStack_44 = pfVar7[2];
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  fStack_4c = fStack_4c - *(float *)(iVar6 + 4);
  fStack_58 = fStack_48;
  *(undefined1 *)(param_1 + 0x784) = 0;
  fStack_54 = -fStack_50;
  *(undefined1 *)(param_1 + 0x785) = 0;
  bVar2 = true;
  piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 0xa0))();
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)(param_1 + 0x794);
    *piVar5 = *piVar5 + -1;
    if (((*piVar5 < 0) && (*(undefined4 *)(param_1 + 0x794) = 10, DAT_0092c67c != (int *)0x0)) &&
       ((cVar3 = (**(code **)(*DAT_0092c67c + 4))(), cVar3 != '\0' &&
        (((DAT_0091e000 == 0 || (*(int *)(DAT_0091e000 + 0x1960) == 0)) &&
         (iVar6 = FUN_00727480(&fStack_58), iVar6 != 0)))))) {
      (**(code **)(*DAT_0092c67c + 0x2c))();
      FUN_004023c0("AICopManager");
      (**(code **)(*(int *)(param_1 + 0x758) + 4))();
      FUN_007c4b80();
      FUN_00405870();
      FUN_00654af0();
    }
  }
  else {
    fVar10 = (float10)(**(code **)(*piVar5 + 0x1c))();
    bVar2 = (float10)_DAT_00890ea8 <= fVar10;
    cVar3 = (**(code **)(*piVar5 + 0x74))();
    if ((cVar3 != '\0') && (piVar5 = (int *)FUN_005d59f0(), piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 0x18))();
      (**(code **)(*piVar5 + 0x1c))();
      (**(code **)(*piVar5 + 0x14))(0);
      (**(code **)(*piVar5 + 0x2c))(0);
      (**(code **)(*piVar5 + 0x24))(0x3f800000);
      (**(code **)(*piVar5 + 0x20))(0);
    }
  }
  iVar8 = 0;
  iVar6 = FUN_00727480(&fStack_58);
  if (iVar6 != 0) {
    do {
      if (*(float *)(iVar6 + 0x14) == _DAT_00890968) {
LAB_004298cc:
        if (*(char *)(param_1 + 0x790) == '\0') {
          *(undefined1 *)(param_1 + 0x790) = 1;
          if (bVar2) {
            *(undefined4 *)(param_1 + 0x78c) = 0x3d4ccccd;
          }
          else {
            *(undefined4 *)(param_1 + 0x78c) = 0x47c34f80;
          }
        }
        else if (*(float *)(param_1 + 0x78c) <= _DAT_0089165c) {
          *(float *)(param_1 + 0x788) = param_2 + *(float *)(param_1 + 0x788);
        }
        else {
          *(undefined4 *)(param_1 + 0x788) = 0;
        }
        param_2 = 0.0;
        if ((*(float *)(param_1 + 0x78c) < *(float *)(param_1 + 0x788)) &&
           ((*(int *)(iVar6 + 0x30) == DAT_0090d98c ||
            (bVar9 = *(int *)(iVar6 + 0x30) != DAT_0090d988, *(undefined1 *)(param_1 + 0x785) = 1,
            bVar9)))) {
          *(undefined1 *)(param_1 + 0x784) = 1;
        }
        iVar8 = iVar8 + 1;
      }
      else {
        fVar1 = fStack_4c - *(float *)(iVar6 + 0x14);
        if (fVar1 < _DAT_00890968) {
          fVar1 = -fVar1;
        }
        if (fVar1 < _DAT_00891660) goto LAB_004298cc;
      }
      iVar6 = FUN_00727480(&fStack_58);
    } while (iVar6 != 0);
    if (iVar8 != 0) {
      ExceptionList = pvStack_20;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x790) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0;
  ExceptionList = pvStack_20;
  return;
}

