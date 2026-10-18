/* speed.exe 005ff2e0 FUN_005ff2e0; analysis pseudocode, not buildable source.
 * calls 00404a70 FUN_00404a70
 * calls 00402060 FUN_00402060
 * calls 00401ae0 FUN_00401ae0
 * calls 005fba00 FUN_005fba00
 * calls 005fc320 FUN_005fc320
 * calls 00402000 FUN_00402000
 * calls 005db470 FUN_005db470
 * calls 006e8df0 FUN_006e8df0
 * calls 00401dc0 FUN_00401dc0
 * calls 005c81b0 thunk_FUN_0045dac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ff2e0(int param_1,float param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float local_10;
  char *local_8;
  char *local_4;
  
  if (*(char *)(param_1 + 0x4490) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1964) != 2) {
    return;
  }
  if (*(int *)(param_1 + 0x1958) < 2) {
    return;
  }
  iVar5 = FUN_006e8df0();
  if (iVar5 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1960) != 1) {
    return;
  }
  if ((*(int *)(param_1 + 0x1968) != 0) && (cVar4 = FUN_005fc320(), cVar4 != '\0')) {
    return;
  }
  if (*(float *)(param_1 + 0x4484) < _DAT_00890968 !=
      (*(float *)(param_1 + 0x4484) == _DAT_00890968)) {
    return;
  }
  local_10 = *(float *)(param_1 + 0x449c);
  pcVar7 = (char *)0x0;
  iVar5 = *(int *)(param_1 + 0x1958);
  iVar8 = 0;
  bVar3 = false;
  local_4 = (char *)0x0;
  local_8 = (char *)0x0;
  if (0 < iVar5) {
    pcVar9 = (char *)(param_1 + 0x37);
    do {
      if (*(int *)(pcVar9 + -0x1b) == 0) {
        if (*pcVar9 != '\0') {
          return;
        }
        if ((pcVar9[2] == '\0') || (*(int *)(pcVar9 + -0xf) != 1)) {
          iVar6 = FUN_00404a70();
          if ((iVar6 == 3) && (pcVar9[-3] != '\0')) {
            local_8 = pcVar9 + -0x1f;
          }
        }
        else {
          local_4 = pcVar9 + -0x1f;
        }
      }
      else if ((pcVar9[2] != '\0') && (*(int *)(pcVar9 + -0xf) == 1)) {
        pcVar7 = pcVar9 + -0x1f;
      }
      iVar8 = iVar8 + 1;
      pcVar9 = pcVar9 + 0x194;
    } while (iVar8 < iVar5);
  }
  if ((param_2 == 0.0) || (param_2 == 1.4013e-45)) {
    if (param_3 == (int *)0x0) {
      return;
    }
    cVar4 = (**(code **)(*param_3 + 0x24))();
    if (cVar4 == '\0') {
      return;
    }
    param_3 = (int *)0x0;
    param_2 = 0.0;
    if (iVar5 < 1) goto LAB_005ff79d;
    puVar11 = (undefined4 *)(param_1 + 0x30);
    do {
      if (*(char *)(puVar11 + 1) == '\0') {
        if (puVar11[-5] == 0) {
          fVar12 = (float10)FUN_00401dc0(param_2,*puVar11);
          param_2 = (float)fVar12;
        }
        else {
          fVar12 = (float10)FUN_00401dc0(param_3,*puVar11);
          param_3 = (int *)(float)fVar12;
        }
      }
      puVar11 = puVar11 + 0x65;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (((float)param_3 <= param_2) || (param_2 <= _DAT_00890968)) goto LAB_005ff79d;
    fVar1 = ((float)param_3 - param_2) * *(float *)(param_1 + 0x4484);
  }
  else {
    if (param_2 != 7.00649e-45) {
      iVar8 = FUN_00404a70();
      if (iVar8 == 5) {
        iVar8 = 0;
        param_3 = (int *)0x0;
        param_2 = 0.0;
        if (0 < iVar5) {
          pfVar10 = (float *)(param_1 + 0x138);
          do {
            if (*(char *)((int)pfVar10 + -0xff) == '\0') {
              return;
            }
            if (pfVar10[-0x47] == 0.0) {
              param_3 = (int *)*pfVar10;
            }
            else {
              fVar12 = (float10)FUN_00401dc0(param_2,*pfVar10);
              param_2 = (float)fVar12;
            }
            iVar8 = iVar8 + 1;
            pfVar10 = pfVar10 + 0x65;
          } while (iVar8 < iVar5);
        }
        fVar12 = (float10)FUN_00401dc0(param_3,param_2);
        if (fVar12 <= (float10)_DAT_00890968) {
          return;
        }
        if (param_2 <= _DAT_00890968) {
          return;
        }
        if ((float)param_3 <= _DAT_00890968) {
          return;
        }
        fVar1 = ((float)param_3 - param_2) / (float)fVar12;
        if (fVar1 <= _DAT_00890968) {
          fVar12 = (float10)FUN_00401ae0(-fVar1,0,0x3e4ccccd,0xbf800000,0x3f800000);
          fVar12 = (float10)FUN_00402060((float)(fVar12 * (float10)_DAT_008a3758 + (float10)local_10
                                                ));
          local_10 = (float)fVar12;
        }
        else {
          fVar12 = (float10)FUN_00401ae0(fVar1,0x3d4ccccd,0x3e4ccccd,0xbf800000,0x3f800000);
          fVar12 = (float10)FUN_00402060((float)(fVar12 * (float10)_DAT_008a3738 + (float10)local_10
                                                ));
          local_10 = (float)fVar12;
        }
      }
      else if (local_4 == (char *)0x0) {
        if (pcVar7 == (char *)0x0) {
          if (local_8 == (char *)0x0) {
            return;
          }
          param_2 = (float)FUN_005fba00();
          if ((int)param_2 < 2) {
            param_2 = 1.4013e-45;
          }
          fVar12 = (float10)thunk_FUN_0045dac0((_DAT_008a3720 - *(float *)(local_8 + 0x18)) *
                                               *(float *)(param_1 + 0x4484) * _DAT_00890dc4,
                                               *(float *)(param_1 + 0x4484) / (float)(int)param_2);
          if (fVar12 <= (float10)_DAT_00890968) {
            return;
          }
          fVar12 = (float10)FUN_00401ae0((float)fVar12,0,0x43960000,0xbf800000,0x3f800000);
          fVar12 = (float10)FUN_00402060((float)((fVar12 * (float10)_DAT_00891644 -
                                                 (float10)_DAT_00890cd4) *
                                                 (float10)*(float *)(local_8 + 0x18) *
                                                 (float10)_DAT_00890dc4 + (float10)local_10));
          local_10 = (float)fVar12;
        }
        else {
          if (iVar5 < 1) {
            return;
          }
          pcVar7 = (char *)(param_1 + 0x39);
          do {
            if ((*(int *)(pcVar7 + -0x1d) == 0) && (*pcVar7 == '\0')) {
              fVar1 = *(float *)(pcVar7 + -9);
              fVar2 = (_DAT_008a3720 - fVar1) * *(float *)(param_1 + 0x4484) * _DAT_00890dc4;
              if (_DAT_00890968 < fVar2) {
                fVar12 = (float10)FUN_00401ae0(fVar2,0,0x43960000,0xbf800000,0x3f800000);
                fVar12 = (float10)FUN_00402060((float)((fVar12 * (float10)_DAT_00891644 -
                                                       (float10)_DAT_00890cd4) * (float10)fVar1 *
                                                       (float10)_DAT_00890dc4 + (float10)local_10));
                local_10 = (float)fVar12;
                bVar3 = true;
              }
            }
            pcVar7 = pcVar7 + 0x194;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (!bVar3) {
            return;
          }
        }
      }
      else {
        param_2 = 0.0;
        if (0 < iVar5) {
          pcVar7 = (char *)(param_1 + 0x35);
          do {
            if ((((pcVar7 + -0x1d != local_4) && (pcVar7[4] == '\0')) && (*pcVar7 == '\0')) &&
               (pcVar7[1] == '\0')) {
              fVar12 = (float10)FUN_00402000(param_2,*(undefined4 *)(pcVar7 + -5));
              param_2 = (float)fVar12;
            }
            pcVar7 = pcVar7 + 0x194;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        fVar1 = (_DAT_008a3720 - param_2) * *(float *)(param_1 + 0x4484) * _DAT_00890dc4;
        if ((_DAT_00890968 < fVar1) && (_DAT_00890968 < param_2)) {
          fVar12 = (float10)FUN_00401ae0(fVar1,0x43480000,0x443b8000,0xbf800000,0x3f800000);
          fVar12 = (float10)FUN_00402060((float)(fVar12 * (float10)_DAT_008a3728 + (float10)local_10
                                                ));
          local_10 = (float)fVar12;
        }
      }
      goto LAB_005ff79d;
    }
    param_3 = (int *)0x0;
    param_2 = 0.0;
    if (iVar5 < 1) goto LAB_005ff79d;
    pcVar7 = (char *)(param_1 + 0x35);
    do {
      if (((pcVar7[-1] == '\0') && (*pcVar7 == '\0')) && (pcVar7[1] == '\0')) {
        if (*(int *)(pcVar7 + -0x19) == 0) {
          fVar12 = (float10)FUN_00401dc0(param_2,*(undefined4 *)(pcVar7 + -5));
          param_2 = (float)fVar12;
        }
        else {
          fVar12 = (float10)FUN_00401dc0(param_3,*(undefined4 *)(pcVar7 + -5));
          param_3 = (int *)(float)fVar12;
        }
      }
      pcVar7 = pcVar7 + 0x194;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (((float)param_3 <= param_2) || (param_2 <= _DAT_00890968)) goto LAB_005ff79d;
    fVar1 = ((float)param_3 - param_2) * *(float *)(param_1 + 0x4484);
  }
  fVar12 = (float10)FUN_00401ae0(fVar1 * _DAT_00890dc4,0,0x43960000,0xbf800000,0x3f800000);
  fVar12 = (float10)FUN_00402060((float)(fVar12 * (float10)_DAT_008a3768 * (float10)param_2 *
                                         (float10)_DAT_00890dc4 + (float10)local_10));
  local_10 = (float)fVar12;
LAB_005ff79d:
  *(undefined1 *)(param_1 + 0x4490) = 1;
  FUN_005db470(local_10);
  *(float *)(param_1 + 0x449c) = local_10;
  return;
}

