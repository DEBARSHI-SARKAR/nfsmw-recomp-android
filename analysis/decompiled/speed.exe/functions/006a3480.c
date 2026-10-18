/* speed.exe 006a3480 FUN_006a3480; analysis pseudocode, not buildable source.
 * calls 0066bb00 FUN_0066bb00
 * calls 00401da0 FUN_00401da0
 * calls 006a3340 FUN_006a3340
 * calls 006a3440 FUN_006a3440
 * calls 00672fe0 FUN_00672fe0
 * calls 006a2ff0 FUN_006a2ff0
 * calls 006a29b0 FUN_006a29b0
 * calls 00401d70 FUN_00401d70
 * calls 00401ae0 FUN_00401ae0
 * calls 00401d10 FUN_00401d10
 * calls 00693410 FUN_00693410
 * calls 006a29e0 FUN_006a29e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a3480(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float unaff_retaddr;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float afStack_c [3];
  
  piVar9 = *(int **)(param_1 + 0xcc);
  if (piVar9 == (int *)0x0) {
    return;
  }
  if (*(int **)(param_1 + 0xd0) == (int *)0x0) {
    return;
  }
  iVar8 = (**(code **)(**(int **)(param_1 + 0xd0) + 8))();
  if (iVar8 != 4) {
    return;
  }
  iVar8 = (**(code **)(**(int **)(param_1 + 0xcc) + 8))();
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar8 + 0x14);
  (**(code **)(*piVar9 + 8))();
  FUN_006a3440(param_2);
  fVar5 = *(float *)(*(int *)(param_1 + 0xdc) + 0x58) * _DAT_008a9398;
  fStack_1c = *(float *)(*(int *)(param_1 + 0xdc) + 0x5c) * _DAT_008a9398;
  fVar4 = fVar5 * *(float *)(param_1 + 0x6c);
  fVar10 = (float10)FUN_0066bb00(param_1 + 0xd4,1);
  FUN_006a3340();
  fStack_18 = 1.0;
  if (_DAT_00890968 < *(float *)(param_1 + 0x68)) {
    fStack_18 = 0.0;
  }
  fStack_24 = -1.0;
  if (*(int *)(param_1 + 100) != 0) {
    fStack_24 = 1.0;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0xf0) + 0x80);
  fVar11 = (float10)FUN_006a29b0(*(int *)(param_1 + 100));
  fVar2 = *(float *)(*(int *)(param_1 + 0xf0) + 0x6c);
  fStack_24 = (float)(fVar11 * (float10)fVar1 * (float10)fStack_24);
  if (_DAT_00890968 < fVar2) {
    fVar11 = (float10)FUN_00401ae0(*(float *)(param_1 + 0xc0) * _DAT_008a9394,
                                   *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x5c),
                                   *(undefined4 *)(param_1 + 0x118));
    fStack_24 = (float)((((float10)_DAT_0089096c - fVar11) * (float10)fVar2 * (float10)fStack_18 *
                         (float10)*(float *)(param_1 + 0x6c) + (float10)_DAT_0089096c) *
                       (float10)fStack_24);
  }
  afStack_c[0] = 0.0;
  afStack_c[1] = 0.0;
  afStack_c[2] = 0.0;
  piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  (**(code **)(*piVar9 + 0x3c))(afStack_c);
  bVar3 = afStack_c[0] < _DAT_00894b58;
  *(undefined1 *)(param_1 + 200) = 0;
  if (((*(int *)(param_1 + 100) == 1) || (bVar3)) || (fVar5 == _DAT_00890968)) {
    fVar1 = *(float *)(param_1 + 0xc0) * _DAT_008a9394;
    fVar11 = (float10)FUN_00672fe0(param_1 + 0xd4,fVar1);
    fVar10 = (float10)_DAT_008a938c;
    fVar12 = (float10)FUN_006a2ff0((float)(fVar11 * fVar10),fVar1);
    fVar1 = (float)(((float10)(float)(fVar11 * fVar10) * (float10)*(float *)(param_1 + 0x6c) +
                    ((float10)_DAT_0089096c - (float10)*(float *)(param_1 + 0x6c)) * fVar12) /
                   (float10)fStack_18);
    fVar10 = (float10)fVar1 * (float10)unaff_retaddr * (float10)_DAT_00890e98 +
             (float10)*(float *)(param_1 + 0xc0);
    *(float *)(param_1 + 0xc0) = (float)fVar10;
    if (fVar1 <= _DAT_00890968) {
      if (fVar10 <= (float10)fVar2) goto LAB_006a38ab;
    }
    else if ((float10)fVar2 <= fVar10) {
LAB_006a38ab:
      fVar10 = (float10)fVar2;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    fStack_1c = 0.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc0) * _DAT_008a9394;
    fVar11 = (float10)FUN_00693410(fVar1);
    fVar12 = (float10)FUN_006a2ff0((float)fVar11,fVar1);
    fVar1 = fVar5 * (float)fVar10;
    if (fVar1 < _DAT_00890968) {
      fVar12 = fVar12 * (float10)_DAT_008aac20;
    }
    if ((float)fVar10 == _DAT_00890968) {
      fVar12 = (float10)_DAT_00890968;
    }
    fVar13 = (float10)_DAT_0089096c - (float10)*(float *)(param_1 + 0x6c);
    fVar10 = (float10)(float)fVar11 * (float10)*(float *)(param_1 + 0x6c) + fVar13 * fVar12;
    fVar11 = (float10)_DAT_0089096c;
    fVar1 = (float)(((float10)fVar4 - (float10)0.0) * (fVar11 / (float10)fVar4) * (float10)fVar1 +
                   (float10)0.0);
    *(float *)(param_1 + 0xc4) = fVar1;
    if (fVar4 < fVar1) {
      fVar10 = (((float10)fVar1 * (fVar11 / (float10)fVar4) - (float10)_DAT_0089096c) + fVar13) *
               fVar12;
    }
    fStack_24 = (float)fVar10;
    if (fVar2 < fVar1) {
      fVar10 = (float10)FUN_00401d10(0,fVar1 - *(float *)(param_1 + 0xc0));
      fVar10 = (float10)FUN_00401da0((float)((fVar10 / (float10)fStack_18) * (float10)unaff_retaddr)
                                    );
      fVar10 = fVar10 + (float10)*(float *)(param_1 + 0xc0);
      *(undefined1 *)(param_1 + 200) = 1;
    }
    else {
      if (fVar1 == fVar2) {
        fStack_24 = 0.0;
        goto LAB_006a38cc;
      }
      if (fVar2 <= fVar1) goto LAB_006a38cc;
      fVar6 = (fStack_24 / fStack_18) * unaff_retaddr;
      fVar7 = *(float *)(param_1 + 0xc0) - fVar1;
      if (fVar7 <= fVar6) {
        if (-fVar6 <= fVar7) {
          *(float *)(param_1 + 0xc0) = fVar1;
        }
        else {
          *(float *)(param_1 + 0xc0) = fVar6 + *(float *)(param_1 + 0xc0);
        }
      }
      else {
        *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) - fVar6 * _DAT_00890e98;
      }
      fVar10 = (float10)FUN_00401da0(*(undefined4 *)(param_1 + 0xc0),fVar2);
    }
  }
  *(float *)(param_1 + 0xc0) = (float)fVar10;
LAB_006a38cc:
  fVar10 = (float10)FUN_00401d70(*(undefined4 *)(param_1 + 0xc0),0,fVar4);
  *(float *)(param_1 + 0xc0) = (float)fVar10;
  fVar10 = (float10)FUN_006a29e0(*(undefined4 *)(param_1 + 100));
  *(float *)(param_1 + 0x60) =
       (float)(fVar10 * (float10)fVar5 * (float10)fStack_24 * (float10)fStack_1c);
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0xc0) * _DAT_008a9394;
  return;
}

