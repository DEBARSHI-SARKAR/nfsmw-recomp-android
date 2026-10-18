/* speed.exe 005e92e0 FUN_005e92e0; analysis pseudocode, not buildable source.
 * calls 00402060 FUN_00402060
 * calls 00565f20 FUN_00565f20
 * calls 005db420 FUN_005db420
 * calls 00410180 FUN_00410180
 * calls 0041eba0 FUN_0041eba0
 * calls 005dc720 FUN_005dc720
 * calls 0040e4a0 FUN_0040e4a0
 * calls 0040e020 FUN_0040e020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e92e0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int *unaff_retaddr;
  float fVar10;
  float fVar11;
  float fStack_1c;
  int *local_10;
  undefined1 auStack_c [12];
  
  if ((((*(char *)(param_1 + 0x21) == '\0') && (*(char *)(param_1 + 0x1e) == '\0')) &&
      (*(char *)(param_1 + 0x1d) == '\0')) &&
     ((*(char *)(param_1 + 0x1c) == '\0' &&
      (piVar5 = (int *)FUN_0041eba0(), iVar3 = DAT_0091e000, piVar5 != (int *)0x0)))) {
    cVar4 = FUN_0040e4a0(&local_10);
    if ((cVar4 != '\0') && (cVar4 = (**(code **)(*local_10 + 0x20))(), cVar4 != '\0')) {
      fVar8 = (float10)(**(code **)(*local_10 + 0x24))();
      *(float *)(param_1 + 0x108) =
           (float)(fVar8 * (float10)param_2 + (float10)*(float *)(param_1 + 0x108));
    }
    piVar6 = (int *)(**(code **)(*piVar5 + 0x20))();
    if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0x40))(), cVar4 != '\0')) {
      *(float *)(param_1 + 0x11c) = param_2 + *(float *)(param_1 + 0x11c);
    }
    (**(code **)(*piVar5 + 0x68))(auStack_c);
    fVar8 = (float10)FUN_00410180(&local_10);
    if ((float10)*(float *)(param_1 + 0x100) < fVar8) {
      *(float *)(param_1 + 0x100) = (float)fVar8;
    }
    fVar1 = (float)((float10)(float)unaff_retaddr * fVar8) + *(float *)(param_1 + 0xfc);
    *(float *)(param_1 + 0xfc) = fVar1;
    *(float *)(param_1 + 0x110) = (float)unaff_retaddr + *(float *)(param_1 + 0x110);
    if (*(float *)(param_1 + 0x128) == _DAT_00890968) {
      if ((_DAT_0091e0b8 & 1) == 0) {
        _DAT_0091e0b8 = _DAT_0091e0b8 | 1;
        _DAT_0091e0b4 = 402.335;
      }
      if (_DAT_0091e0b4 <= fVar1) {
        fVar8 = (float10)FUN_00565f20();
        *(float *)(param_1 + 0x128) = (float)fVar8;
      }
    }
    if (*(float *)(param_1 + 0x124) == _DAT_00890968) {
      if ((_DAT_0091e0b8 & 2) == 0) {
        _DAT_0091e0b8 = _DAT_0091e0b8 | 2;
        _DAT_0091e0b0 = 26.8218;
      }
      if (_DAT_0091e0b0 <= *(float *)(param_1 + 0x100)) {
        fVar8 = (float10)FUN_00565f20();
        *(float *)(param_1 + 0x124) = (float)fVar8;
      }
    }
    fVar1 = *(float *)(iVar3 + 0x4484);
    cVar4 = FUN_0040e020(&stack0x00000000);
    if (cVar4 == '\0') {
      fStack_1c = 0.0;
    }
    else {
      fVar8 = (float10)(**(code **)(*unaff_retaddr + 0x60))();
      fStack_1c = (float)fVar8;
    }
    fVar11 = _DAT_00890968;
    *(float *)(param_1 + 0xf8) = fStack_1c;
    if (fVar11 < fVar1) {
      iVar2 = *(int *)(param_1 + 0x28);
      fVar11 = 0.0;
      if (0 < iVar2) {
        fVar11 = *(float *)(iVar3 + 0x4488);
      }
      if (1 < iVar2) {
        fVar11 = (float)(iVar2 + -1) * *(float *)(iVar3 + 0x448c) + fVar11;
      }
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar7 = 0;
      fVar10 = 0.0;
      if (0 < iVar3) {
        do {
          fVar8 = (float10)FUN_005dc720(iVar7,iVar2);
          iVar7 = iVar7 + 1;
          fVar10 = (float)(fVar8 + (float10)fVar10);
        } while (iVar7 < iVar3);
      }
      if (_DAT_00890968 != fStack_1c) {
        fVar8 = (float10)FUN_005dc720(iVar3,iVar2);
        fVar8 = (fVar8 - (float10)fStack_1c) + (float10)fVar10;
        fVar9 = (float10)FUN_005db420(iVar2);
        if (fVar9 <= (float10)_DAT_00890968) {
          fVar9 = (float10)_DAT_008a3720;
        }
        else {
          fVar9 = (float10)FUN_00402060((float)((float10)(float)fVar8 / fVar9),0,0x3f800000);
          fVar9 = fVar9 * (float10)_DAT_008a3720;
        }
        *(float *)(param_1 + 0x24) = (float)fVar9;
        fVar8 = (float10)FUN_00402060((float)(fVar8 + (float10)fVar11) / fVar1,0,0x3f800000);
        *(float *)(param_1 + 0x18) = (float)(fVar8 * (float10)_DAT_008a3720);
      }
    }
  }
  return;
}

