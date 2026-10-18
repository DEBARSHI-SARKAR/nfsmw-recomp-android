/* speed.exe 0042a0b0 FUN_0042a0b0; analysis pseudocode, not buildable source.
 * calls 00403f40 FUN_00403f40
 * calls 00402060 FUN_00402060
 * calls 00653e20 FUN_00653e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a0b0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fStack_c;
  
  uVar7 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x18))();
  if (((uVar7 & 2) != 0) && (piVar1 = *(int **)(param_1 + 0xe0), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x18))(0);
    (**(code **)(*piVar1 + 0x1c))(0);
    (**(code **)(*piVar1 + 0x24))(0);
    (**(code **)(*piVar1 + 0x2c))(0);
    piVar8 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    cVar6 = (**(code **)(*piVar8 + 0x20))();
    if (cVar6 == '\0') {
      if ((*(char *)(param_1 + 0xa7) == '\0') && (*(char *)(param_1 + 0xa8) != '\0')) {
        *(undefined4 *)(param_1 + 0x750) = 0x3f800000;
        (**(code **)(*piVar1 + 0x24))(0x3f800000);
      }
      else {
        if ((*(int **)(param_1 + 0xd4) == (int *)0x0) ||
           (cVar6 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))(), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        piVar8 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
        fVar9 = (float10)(**(code **)(*piVar8 + 0x90))();
        fVar12 = (float)fVar9;
        fVar2 = *(float *)(param_1 + 0x84);
        fVar4 = fVar12 - fVar2;
        FUN_00653e20(fVar4,fStack_c,0,0);
        if (_DAT_00890634 <= fVar2) {
          if (bVar5) {
            if (fVar12 <= _DAT_0089096c) {
              *(undefined4 *)(param_1 + 0x750) = 0x3f800000;
            }
            else {
              *(undefined4 *)(param_1 + 0x750) = 0xbf800000;
            }
          }
          else if (_DAT_00890da8 <= fVar12) {
            iVar3 = *(int *)(param_1 + 0x744);
            fVar9 = (float10)FUN_00403f40(0xc0a00000,0x40a00000);
            fVar10 = (float10)FUN_00402060((float)fVar9);
            fVar9 = (float10)_DAT_00890810;
            fVar11 = (float10)FUN_00402060(*(undefined4 *)(iVar3 + 0x5c),0xc1200000,0x41200000);
            *(float *)(param_1 + 0x750) =
                 (float)((float10)fVar4 * (float10)_DAT_00890808 +
                         fVar11 * (float10)_DAT_00891698 + (float10)(float)(fVar10 * fVar9) +
                        (float10)*(float *)(param_1 + 0x750));
          }
          else {
            *(undefined4 *)(param_1 + 0x750) = 0xbf800000;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x750) = 0xbf800000;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x750) = 0x3f4ccccd;
    }
    fVar12 = *(float *)(param_1 + 0x750);
    *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x84);
    fVar2 = _DAT_00890968;
    fStack_c = _DAT_0089096c;
    if ((fVar12 < _DAT_0089096c) && (fStack_c = fVar12, fVar12 < _DAT_00890da8)) {
      fStack_c = -1.0;
    }
    *(float *)(param_1 + 0x750) = fStack_c;
    fVar12 = _DAT_00890968;
    if ((fVar2 < fStack_c) && (fVar12 = fStack_c, _DAT_0089096c < fStack_c)) {
      fStack_c = 1.0;
      fVar12 = fStack_c;
    }
    fStack_c = fVar12;
    (**(code **)(*piVar1 + 0x18))(fStack_c);
    fVar12 = -*(float *)(param_1 + 0x750);
    fVar2 = _DAT_00890968;
    if ((_DAT_00890968 < fVar12) && (fVar2 = fVar12, _DAT_0089096c < fVar12)) {
      (**(code **)(*piVar1 + 0x1c))(0x3f800000);
      return;
    }
    (**(code **)(*piVar1 + 0x1c))(fVar2);
  }
  return;
}

