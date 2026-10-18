/* speed.exe 00602c80 FUN_00602c80; analysis pseudocode, not buildable source.
 * calls 005fa780 FUN_005fa780
 * calls 005ebc80 FUN_005ebc80
 * calls 005faa20 FUN_005faa20
 * calls 005d51f0 FUN_005d51f0
 * calls 00454810 FUN_00454810
 * calls 005dba10 FUN_005dba10
 * calls 005dbaf0 FUN_005dbaf0
 * calls 005fde80 FUN_005fde80
 * calls 005e95f0 FUN_005e95f0
 * calls 005e92e0 FUN_005e92e0
 * calls 007303d0 FUN_007303d0
 * calls 00654af0 FUN_00654af0
 * calls 005e9660 FUN_005e9660
 * calls 00602bb0 FUN_00602bb0
 * calls 005db920 FUN_005db920
 * calls 005e3400 FUN_005e3400
 * calls 005dbbc0 FUN_005dbbc0
 * calls 005fe090 FUN_005fe090
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8de0 FUN_006e8de0
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 005ebf30 FUN_005ebf30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00602c80(int param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  float10 fVar12;
  float fStack00000004;
  float local_28;
  float local_24;
  int local_20;
  
  if ((*(int *)(param_1 + 0x1960) == 1) && (*(char *)(param_1 + 0x19a5) != '\0')) {
    *(undefined1 *)(param_1 + 0x1998) = 1;
    *(undefined1 *)(param_1 + 0x19a5) = 0;
  }
  if ((*(int *)(param_1 + 0x1960) == 0) && (*(char *)(param_1 + 0x1998) != '\0')) {
    FUN_00602bb0();
    *(undefined1 *)(param_1 + 0x1998) = 0;
  }
  if (((*(int *)(param_1 + 0x1960) == 0) && (*(int *)(param_1 + 0x199c) != 0)) &&
     (cVar3 = FUN_005ebc80(*(int *)(param_1 + 0x199c)), cVar3 != '\0')) {
    *(undefined4 *)(param_1 + 0x199c) = 0;
  }
  if ((*(int *)(param_1 + 0x1960) == 1) && (iVar9 = *(int *)(param_1 + 0x1958), 0 < iVar9)) {
    iVar8 = 0;
    local_20 = 0;
    if (0 < iVar9) {
      piVar6 = (int *)(param_1 + 0x1c);
      iVar7 = iVar9;
      do {
        if (*piVar6 != 0) {
          iVar8 = iVar8 + 1;
        }
        piVar6 = piVar6 + 0x65;
        iVar7 = iVar7 + -1;
        local_20 = iVar8;
      } while (iVar7 != 0);
    }
    local_28 = 0.0;
    local_24 = 0.0;
    fVar1 = _DAT_0089096c;
    if (0 < iVar9) {
      piVar6 = (int *)(param_1 + 0x18);
      iVar8 = iVar9;
      do {
        FUN_005e92e0();
        if (*piVar6 != 0) {
          if ((piVar6[1] != 0) || (fVar1 = (float)local_20, (float)local_20 < _DAT_0089096c)) {
            fVar1 = _DAT_0089096c;
          }
          local_24 = fVar1 * (float)piVar6[6] + local_24;
          local_28 = fVar1 + local_28;
        }
        piVar6 = piVar6 + 0x65;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      fVar1 = _DAT_0089096c;
      if (_DAT_0089096c <= local_28) {
        fVar1 = local_28;
      }
    }
    *(float *)(param_1 + 0x44a0) = local_24 / fVar1;
    FUN_005fde80();
    if (0 < iVar9) {
      do {
        FUN_005e3400();
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_1 + 0x1968);
    if (iVar9 == 0) {
LAB_00602e7a:
      uVar10 = 0;
    }
    else {
      piVar6 = *(int **)(iVar9 + 0xc);
      if ((piVar6 != (int *)0x0) && (*piVar6 == 0)) {
        FUN_005fa780(piVar6);
      }
      piVar6 = *(int **)(iVar9 + 0x10);
      if ((piVar6 != (int *)0x0) && (*piVar6 == 0)) {
        FUN_005fa780(piVar6);
      }
      pfVar5 = (float *)FUN_00454810(0x7585f041,0);
      if (pfVar5 == (float *)0x0) {
        pfVar5 = (float *)FUN_006269b0(4);
      }
      if (*pfVar5 <= _DAT_00890968) goto LAB_00602e7a;
      uVar10 = 1;
    }
    if (*(int *)(param_1 + 0x1968) == 0) {
      fStack00000004 = 0.0;
    }
    else {
      if (*(char *)(param_1 + 0x1978) == '\0') {
        fVar12 = (float10)*(float *)(param_1 + 0x1974);
      }
      else {
        fVar12 = (float10)FUN_006e8de0();
        fVar12 = (fVar12 - (float10)*(float *)(param_1 + 0x1970)) +
                 (float10)*(float *)(param_1 + 0x1974);
      }
      fStack00000004 = (float)fVar12;
    }
    fVar12 = (float10)FUN_005fe090();
    FUN_005db920(fStack00000004,uVar10,(float)fVar12);
    FUN_00654af0();
    if (*(int *)(param_1 + 0x1968) == 0) {
      fStack00000004 = 0.0;
    }
    else {
      if (*(char *)(param_1 + 0x1978) == '\0') {
        fVar12 = (float10)*(float *)(param_1 + 0x1974);
      }
      else {
        fVar12 = (float10)FUN_006e8de0();
        fVar12 = (fVar12 - (float10)*(float *)(param_1 + 0x1970)) +
                 (float10)*(float *)(param_1 + 0x1974);
      }
      fStack00000004 = (float)fVar12;
    }
    iVar9 = FUN_007c4b80();
    if (*(int *)(param_1 + 0x198c) < iVar9) {
      *(int *)(param_1 + 0x198c) = iVar9;
      FUN_005dba10(fStack00000004);
      FUN_00654af0();
    }
    iVar9 = *(int *)(param_1 + 0x1968);
    if (iVar9 != 0) {
      if ((*(int **)(iVar9 + 0xc) != (int *)0x0) && (**(int **)(iVar9 + 0xc) == 0)) {
        FUN_005fa780();
      }
      if ((*(int **)(iVar9 + 0x10) != (int *)0x0) && (**(int **)(iVar9 + 0x10) == 0)) {
        FUN_005fa780();
      }
      pfVar5 = (float *)FUN_00454810(0x7585f041);
      if (pfVar5 == (float *)0x0) {
        pfVar5 = (float *)FUN_006269b0();
      }
      if (_DAT_00890968 < *pfVar5) {
        if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) &&
           (iVar9 = FUN_005faa20(), iVar9 == 8)) {
          cVar3 = *(char *)(param_1 + 0x1978);
          if (*(char *)(param_1 + 0x197c) == '\x01') {
            if (cVar3 != '\0') {
              if (cVar3 == '\0') {
                *(undefined1 *)(param_1 + 0x1978) = 0;
                *(undefined4 *)(param_1 + 0x1974) = *(undefined4 *)(param_1 + 0x1974);
              }
              else {
                fVar12 = (float10)FUN_006e8de0();
                *(undefined1 *)(param_1 + 0x1978) = 0;
                *(float *)(param_1 + 0x1974) =
                     (float)((fVar12 - (float10)*(float *)(param_1 + 0x1970)) +
                            (float10)*(float *)(param_1 + 0x1974));
              }
            }
          }
          else if (cVar3 == '\0') {
            if (*(char *)(param_1 + 0x1978) == '\0') {
              fVar12 = (float10)*(float *)(param_1 + 0x1974);
            }
            else {
              fVar12 = (float10)FUN_006e8de0();
              fVar12 = (fVar12 - (float10)*(float *)(param_1 + 0x1970)) +
                       (float10)*(float *)(param_1 + 0x1974);
            }
            *(float *)(param_1 + 0x1974) = (float)fVar12;
            fVar12 = (float10)FUN_006e8de0();
            *(float *)(param_1 + 0x1970) = (float)fVar12;
            *(undefined1 *)(param_1 + 0x1978) = 1;
          }
        }
        if ((*(char *)(param_1 + 0x1989) == '\0') &&
           (fVar12 = (float10)FUN_005fe090(),
           fVar12 < (float10)_DAT_00890968 != (fVar12 == (float10)_DAT_00890968))) {
          FUN_005dbaf0();
          FUN_00654af0();
          iVar9 = 0;
          *(undefined1 *)(param_1 + 0x1989) = 1;
          if (0 < *(int *)(param_1 + 0x1958)) {
            pcVar11 = (char *)(param_1 + 0x39);
            do {
              if (((*(int *)(pcVar11 + -0x1d) == 0) && (*pcVar11 == '\0')) &&
                 ((*(int *)(pcVar11 + -0x21) != 0 &&
                  (((iVar8 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8), iVar8 != 0
                    && (*(int *)(iVar8 + 4) != 0)) &&
                   (piVar6 = (int *)FUN_005d59f0(), piVar6 != (int *)0x0)))))) {
                (**(code **)(*piVar6 + 0x6c))();
              }
              iVar9 = iVar9 + 1;
              pcVar11 = pcVar11 + 0x194;
            } while (iVar9 < *(int *)(param_1 + 0x1958));
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x19a4) == '\0') {
    return;
  }
  cVar3 = FUN_005e95f0();
  if ((cVar3 == '\0') && (cVar3 = FUN_005e9660(), cVar3 == '\0')) {
    cVar3 = FUN_005ebf30();
    bVar2 = false;
    if (cVar3 == '\0') goto LAB_0060316a;
  }
  else {
LAB_0060316a:
    bVar2 = true;
  }
  cVar3 = FUN_007303d0();
  if ((DAT_0092c67c == (int *)0x0) || (cVar4 = (**(code **)(*DAT_0092c67c + 0x18))(), cVar4 == '\0')
     ) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  if (cVar3 == '\0') {
    if (bVar2) {
      return;
    }
  }
  else {
    if (bVar2) {
      return;
    }
    if (cVar4 != '\0') {
      return;
    }
    if (DAT_009aab63 == '\0') goto LAB_006031c1;
    cVar4 = FUN_007303d0();
  }
  if (cVar4 != '\0') {
    return;
  }
LAB_006031c1:
  FUN_005dbbc0();
  FUN_00654af0();
  *(undefined1 *)(param_1 + 0x19a4) = 0;
  return;
}

