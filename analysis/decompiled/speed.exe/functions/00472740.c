/* speed.exe 00472740 FUN_00472740; analysis pseudocode, not buildable source.
 * calls 004725d0 FUN_004725d0
 * calls 0045a430 FUN_0045a430
 * calls 0056ebc0 FUN_0056ebc0
 * calls 005fe090 FUN_005fe090
 * calls 0064c5f0 FUN_0064c5f0
 * calls 00402240 FUN_00402240
 * calls 0045f490 FUN_0045f490
 * calls 006e9660 FUN_006e9660
 * calls 006dfaf0 FUN_006dfaf0
 * calls 004684d0 FUN_004684d0
 * calls 0073def0 FUN_0073def0
 * calls 00401ae0 FUN_00401ae0
 * calls 004681b0 FUN_004681b0
 * calls 00468fa0 FUN_00468fa0
 * calls 00402060 FUN_00402060
 * calls 0045a760 FUN_0045a760
 * calls 00444fe0 FUN_00444fe0
 * calls 005e8b20 FUN_005e8b20
 * calls 004021e0 FUN_004021e0
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00472740(int param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  float *pfVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float10 fVar17;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  pvVar5 = ExceptionList;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0086a26b;
  local_1c = ExceptionList;
  DAT_00911054 = '\0';
  DAT_00911055 = 0;
  fVar3 = *(float *)(param_1 + 0x58) - param_2;
  ExceptionList = &local_1c;
  *(float *)(param_1 + 0x58) = fVar3;
  if (fVar3 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x5c) - param_2;
  *(float *)(param_1 + 0x5c) = fVar3;
  if (fVar3 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x60) - param_2;
  *(float *)(param_1 + 0x60) = fVar3;
  if (fVar3 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      ExceptionList = pvVar5;
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
    ExceptionList = pvStack_20;
    return;
  }
  FUN_004725d0();
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc1) = 0;
  if ((*(int **)(param_1 + 0x4c) != (int *)0x0) &&
     (cVar6 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(), cVar6 != '\0')) {
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc1) = 1;
  }
  cVar6 = (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
  if (cVar6 == '\0') {
LAB_0047287e:
    if (DAT_0091e000 != 0) {
      uVar8 = (**(code **)(**(int **)(param_1 + 0x44) + 4))();
      iVar9 = FUN_005e8b20(uVar8);
      if ((iVar9 != 0) && (*(char *)(iVar9 + 0x22) != '\0')) {
        ExceptionList = local_1c;
        return;
      }
    }
  }
  else if (DAT_0091e000 != 0) {
    cVar6 = FUN_004684d0();
    if ((cVar6 != '\0') &&
       (fVar16 = (float10)FUN_005fe090(),
       fVar16 < (float10)_DAT_00890968 != (fVar16 == (float10)_DAT_00890968))) {
      uVar8 = (**(code **)(**(int **)(param_1 + 0x44) + 4))();
      iVar9 = FUN_005e8b20(uVar8);
      if ((iVar9 != 0) && (*(char *)(iVar9 + 0x21) == '\0')) {
        ExceptionList = local_1c;
        return;
      }
    }
    goto LAB_0047287e;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc3) = 0;
  piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0xac))();
  if ((piVar10 != (int *)0x0) &&
     (piVar10 = (int *)(**(code **)(*piVar10 + 0xa0))(), piVar10 != (int *)0x0)) {
    fStack_c4 = 0.0;
    iVar9 = (**(code **)(*piVar10 + 0x40))(&fStack_c4);
    if ((iVar9 != 0) &&
       (((_DAT_008945ec < fStack_c4 &&
         (fStack_c4 < _DAT_008910f0 * *(float *)(*(int *)(param_1 + 0x30) + 0x10))) &&
        (piVar10 = DAT_0092ce9c, piVar13 = DAT_0092ce9c, DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4
        )))) {
      do {
        piVar1 = (int *)*piVar13;
        if (((piVar1 != (int *)0x0) &&
            (cVar6 = (**(code **)(*piVar1 + 0x88))(), piVar10 = DAT_0092ce9c, cVar6 != '\0')) &&
           (piVar11 = (int *)(**(code **)(*piVar1 + 0x44))(), piVar10 = DAT_0092ce9c,
           *piVar11 == DAT_0092c52c)) {
          pfVar12 = (float *)(**(code **)(*piVar1 + 0xc))();
          fStack_a8 = pfVar12[1];
          fStack_c0 = *pfVar12;
          fStack_b0 = pfVar12[2];
          iVar9 = *(int *)(param_1 + 0x30);
          fStack_ac = -fStack_c0;
          FUN_004021e0(&fStack_80,&fStack_b0,iVar9 + 0x20);
          fVar16 = (float10)FUN_00402240(&fStack_80);
          piVar10 = DAT_0092ce9c;
          if (((float10)_DAT_008945ec < fVar16) &&
             (fVar16 < (float10)_DAT_008910f0 * (float10)*(float *)(iVar9 + 0x10))) {
            FUN_0045f490(&fStack_a0,&fStack_80);
            iVar9 = *(int *)(param_1 + 0x30);
            fVar3 = fStack_a0 * *(float *)(iVar9 + 0x50) +
                    fStack_98 * *(float *)(iVar9 + 0x58) + fStack_9c * *(float *)(iVar9 + 0x54);
            piVar10 = DAT_0092ce9c;
            if ((_DAT_008945e8 < fVar3) &&
               (fVar16 = (float10)FUN_00402060(fVar3,0,0x3f800000),
               fVar17 = SQRT((float10)_DAT_0089096c - fVar16 * fVar16),
               fVar16 = (float10)fStack_80 * fVar17, fVar17 = (float10)fStack_7c * fVar17,
               piVar10 = DAT_0092ce9c,
               SQRT(fVar16 * fVar16 + fVar17 * fVar17) < (float10)_DAT_00894c34)) {
              *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc3) = 1;
              DAT_00911056 = 1;
              break;
            }
          }
        }
        piVar13 = piVar13 + 1;
      } while (piVar13 != piVar10 + DAT_0092cea4);
    }
  }
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (piVar10 = (int *)FUN_005d59f0(&LAB_00403f90), piVar10 != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(0);
    cVar6 = (**(code **)(*piVar10 + 0x38))();
    if ((cVar6 != '\0') &&
       (cVar6 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(), cVar6 == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(1);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xbd) = 0;
    iVar9 = (**(code **)(*piVar10 + 8))();
    if ((_DAT_00890968 < *(float *)(iVar9 + 0x1c)) ||
       (iVar9 = (**(code **)(*piVar10 + 8))(), _DAT_00890968 < *(float *)(iVar9 + 0x18))) {
      *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xbd) = 1;
    }
  }
  if (_DAT_00890968 < *(float *)(param_1 + 0x68)) {
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - param_2;
  }
  if ((_DAT_00890968 < *(float *)(param_1 + 0x68)) && (*(float *)(param_1 + 0x68) < _DAT_00890ea8))
  {
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar9 = FUN_006dfaf0();
    if (iVar9 != 0) {
      FUN_0073def0(0x3e4ccccd);
    }
  }
  if (*(char *)(param_1 + 0x70) == '\0') {
    if (*(float *)(param_1 + 0x6c) <= _DAT_00890968) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - param_2 / _DAT_008ed454;
    }
  }
  else if (_DAT_0089096c <= *(float *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  }
  else {
    *(float *)(param_1 + 0x6c) =
         (param_2 / _DAT_008ed454) * _DAT_0089472c + *(float *)(param_1 + 0x6c);
  }
  if (*(float *)(param_1 + 0x6c) <= _DAT_00890d60) {
    if (DAT_00911054 != '\0') goto LAB_00472c08;
  }
  else {
    DAT_00911054 = '\x01';
LAB_00472c08:
    iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x1c);
    if (iVar9 != 0) {
      fVar3 = (_DAT_0089096c - *(float *)(param_1 + 0x6c)) * _DAT_00894648 + _DAT_008910f0;
      if (_DAT_00894604 < fVar3) {
        fVar3 = _DAT_0089096c;
      }
      *(float *)(iVar9 + 0xcc) = fVar3;
    }
  }
  cVar6 = (**(code **)(**(int **)(param_1 + 0x44) + 0x40))();
  fVar3 = _DAT_00890968;
  if (cVar6 == '\0') {
    fVar4 = *(float *)(param_1 + 0x50) - param_2;
    *(float *)(param_1 + 0x50) = fVar4;
    if (fVar4 <= fVar3) {
      fVar4 = _DAT_00890968;
    }
  }
  else {
    fVar4 = param_2 * _DAT_0089472c + *(float *)(param_1 + 0x50);
    bVar2 = _DAT_0089096c <= fVar4;
    *(float *)(param_1 + 0x50) = fVar4;
    if (bVar2) {
      fVar4 = _DAT_0089096c;
    }
  }
  *(float *)(param_1 + 0x50) = fVar4;
  if (_DAT_00890d60 < *(float *)(param_1 + 0x50)) {
    DAT_00911055 = 1;
  }
  iVar9 = (**(code **)(**(int **)(param_1 + 0x44) + 0x14))();
  if (iVar9 == 0) goto LAB_00472d2c;
  iVar9 = FUN_0056ebc0(*(undefined4 *)(iVar9 + 0xc));
  if ((*(int *)(param_1 + 0x4c) == 0) ||
     (piVar10 = (int *)FUN_005d59f0(&LAB_00403f90), piVar10 == (int *)0x0)) {
    piVar10 = *(int **)(param_1 + 0x28);
  }
  else {
    cVar6 = (**(code **)(*piVar10 + 0x3c))();
    if (cVar6 != '\0') {
      DAT_008ee4b4 = iVar9;
      (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(6);
      goto LAB_00472d2c;
    }
    (**(code **)(*piVar10 + 0x38))();
    piVar10 = *(int **)(param_1 + 0x28);
    if (-1 < DAT_008ee4b4) {
      (**(code **)(*piVar10 + 0x20))(DAT_008ee4b4);
      DAT_008ee4b4 = -1;
      goto LAB_00472d2c;
    }
  }
  (**(code **)(*piVar10 + 0x20))(iVar9);
LAB_00472d2c:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      iVar9 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x30))();
      *(char *)(*(int *)(param_1 + 0x30) + 0xbe) = '\x01' - (iVar9 != 1);
    }
    FUN_00444fe0(auStack_60,*(undefined4 *)(param_1 + 0x38));
    FUN_0045a760(DAT_00988e84);
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc0) = 0;
    if ((*(int *)(param_1 + 0x4c) != 0) &&
       (piVar10 = (int *)FUN_005d59f0(&LAB_004039c0), piVar10 != (int *)0x0)) {
      piVar13 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 4))();
      piVar13 = (int *)(**(code **)(*piVar13 + 0x54))();
      iVar9 = (**(code **)(*piVar10 + 0x3c))();
      fStack_bc = *(float *)(iVar9 + 4);
      fStack_b8 = *(float *)(iVar9 + 8);
      fStack_c0 = 0.0;
      (**(code **)(*piVar13 + 0xa0))(&fStack_c0,0);
      pfVar12 = (float *)(**(code **)(*piVar13 + 0x20))();
      fStack_c0 = fStack_c0 + *pfVar12;
      fStack_bc = fStack_bc + pfVar12[1];
      fStack_b8 = fStack_b8 + pfVar12[2];
      fStack_2c = -fStack_c0;
      fStack_30 = fStack_b8;
      fStack_28 = fStack_bc;
      piVar10 = (int *)FUN_005d59f0(&LAB_00404040);
      if (piVar10 != (int *)0x0) {
        iVar9 = (**(code **)(*piVar10 + 0x4c))();
        iVar14 = (**(code **)(*piVar10 + 8))();
        if (iVar14 == iVar9) {
          piVar13 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 4))();
          iVar9 = (**(code **)(*piVar13 + 0x4c))();
          FUN_006e9660(*(undefined4 *)(iVar9 + 0x38));
          uStack_14 = 0;
          FUN_004681b0(&fStack_a0);
          uStack_14 = 0xffffffff;
          FUN_0045a430();
        }
        iVar9 = (**(code **)(*piVar10 + 0x4c))();
        if (0 < iVar9) {
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc0) = 1;
        }
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xbc) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xbf) = 0;
    if (((*(int *)(param_1 + 0x4c) != 0) && (iVar9 = FUN_005d59f0(&LAB_00402830), iVar9 != 0)) &&
       (piVar10 = (int *)FUN_005d59f0(&LAB_00404020), piVar10 != (int *)0x0)) {
      uVar7 = (**(code **)(*piVar10 + 0x20))();
      *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xbc) = uVar7;
      fVar16 = (float10)(**(code **)(*piVar10 + 4))();
      fVar17 = (float10)(**(code **)(*piVar10 + 8))();
      *(bool *)(*(int *)(param_1 + 0x30) + 0xbf) =
           fVar17 - (float10)_DAT_008946a4 < (float10)(float)fVar16;
    }
    fVar16 = (float10)_DAT_00890968;
    if ((*(char *)(*(int *)(param_1 + 0x30) + 0xc0) != '\0') &&
       (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
      fVar16 = (float10)(**(code **)(**(int **)(param_1 + 0x4c) + 0xb0))();
      if (fVar16 < (float10)_DAT_00890968) {
        fVar16 = -fVar16;
      }
      fStack_c4 = (float)fVar16;
      fVar16 = (float10)(**(code **)(**(int **)(param_1 + 0x4c) + 0x98))(0x41200000,0x41a00000);
      fVar17 = (float10)FUN_00401ae0((float)fVar16);
      fVar16 = (float10)FUN_00401ae0(fStack_c4 * _DAT_00890960,0,0x42b40000);
      fVar16 = fVar16 * (float10)(float)fVar17;
    }
    *(float *)(*(int *)(param_1 + 0x30) + 0xb0) = (float)fVar16;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc2) = 0;
    piVar10 = (int *)FUN_005d59f0(&LAB_00404010);
    if (piVar10 != (int *)0x0) {
      iVar9 = (**(code **)(*piVar10 + 4))();
      *(bool *)(*(int *)(param_1 + 0x30) + 0xc2) = iVar9 != *(int *)(param_1 + 0x74);
      *(int *)(param_1 + 0x74) = iVar9;
    }
    *(float *)(*(int *)(param_1 + 0x30) + 0xac) =
         *(float *)(param_1 + 0x58) / *(float *)(param_1 + 100);
    *(float *)(*(int *)(param_1 + 0x30) + 0xb4) =
         *(float *)(param_1 + 0x5c) / *(float *)(param_1 + 100);
    *(float *)(*(int *)(param_1 + 0x30) + 0xb8) =
         *(float *)(param_1 + 0x60) / *(float *)(param_1 + 100);
    fVar3 = *(float *)(param_1 + 0x6c);
    if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0x50)) {
      fVar3 = *(float *)(param_1 + 0x50);
    }
    *(float *)(*(int *)(param_1 + 0x30) + 0xc4) = _DAT_0089096c - fVar3 * _DAT_00894678;
    FUN_00468fa0(param_2,auStack_60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40))
    ;
    iVar9 = *(int *)(param_1 + 0x54);
    if (((iVar9 == 1) || (iVar9 == 2)) &&
       (FUN_0064c5f0(iVar9 + -1,*(int *)(param_1 + 0x30) + 0x40), puVar15 = DAT_0092c8fc,
       DAT_0092c8fc != DAT_0092c8fc + DAT_0092c904)) {
      do {
        piVar10 = (int *)*puVar15;
        pfVar12 = (float *)(**(code **)(*piVar10 + 4))();
        fStack_78 = pfVar12[1];
        iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x1c);
        fStack_b0 = pfVar12[2] - *(float *)(iVar9 + 0x40);
        fStack_ac = -*pfVar12 - *(float *)(iVar9 + 0x44);
        fStack_a8 = fStack_78 - *(float *)(iVar9 + 0x48);
        fStack_c4 = SQRT(fStack_b0 * fStack_b0 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8);
        fVar16 = (float10)(**(code **)(*piVar10 + 0xc))();
        if (((float10)fStack_c4 < fVar16 + (float10)_DAT_00890d3c) && (_DAT_00890968 < fStack_c4)) {
          FUN_0045f490(&fStack_a0,&fStack_b0);
          fVar16 = (float10)(**(code **)(*piVar10 + 8))();
          fVar16 = -(fVar16 / (float10)param_2);
          fStack_b8 = (float)((float10)fStack_98 * fVar16);
          fStack_70 = (float)((float10)fStack_a0 * fVar16);
          fStack_6c = (float)((float10)fStack_9c * fVar16);
          fStack_68 = fStack_b8;
          FUN_0064c5f0(*(int *)(param_1 + 0x54) + -1,&fStack_70);
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != DAT_0092c8fc + DAT_0092c904);
    }
  }
  ExceptionList = local_1c;
  return;
}

