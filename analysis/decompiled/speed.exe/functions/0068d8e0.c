/* speed.exe 0068d8e0 FUN_0068d8e0; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 007c45f0 FUN_007c45f0
 * calls 00486610 FUN_00486610
 * calls 0066bae0 FUN_0066bae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0068d8e0(int param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (int)param_7;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  if (_DAT_00890968 < param_3) {
    fVar1 = _DAT_0089096c - *(float *)(param_2 + 0x4c);
    fStack_4 = ((_DAT_008f89d8 - _DAT_0089096c) * fVar1 + _DAT_0089096c) *
               *(float *)(*(int *)(param_1 + 0x78) + 0x70) * *(float *)(param_2 + 0xbc) * param_3;
    if (param_7 != 0.0) {
      fStack_4 = (*(float *)((int)param_7 + 0x10) * _DAT_008910f0 + _DAT_0089096c) * fStack_4;
    }
    fStack_4 = -fStack_4;
    uStack_18 = *(undefined4 *)(param_2 + 0x70);
    fStack_c = fStack_4 * *(float *)(param_2 + 0x50);
    fStack_14 = *(float *)(param_2 + 0x74);
    uStack_10 = *(undefined4 *)(param_2 + 0x78);
    fStack_8 = *(float *)(param_2 + 0x54) * fStack_4;
    fStack_4 = *(float *)(param_2 + 0x58) * fStack_4;
    if (_DAT_008933d4 <= *(float *)(param_2 + 0x6c)) {
      fStack_14 = fVar1 * _DAT_008f89dc + fStack_14;
    }
    FUN_00486610(&uStack_18,param_2,&uStack_18);
    (**(code **)(*piVar3 + 0x88))(&fStack_c,&uStack_18);
  }
  if (_DAT_00890968 < param_4) {
    param_7 = *(float *)(param_2 + 0x14);
    if (param_7 <= _DAT_00890968) {
      param_7 = _DAT_00890968;
    }
    if (_DAT_008933d4 <= *(float *)(param_2 + 0x6c)) {
      param_7 = 1.0;
    }
    if (_DAT_00891218 < *(float *)(param_2 + 0xbc)) {
      fStack_8 = *(float *)(param_2 + 0x54);
      fStack_4 = *(float *)(param_2 + 0x58);
    }
    fVar4 = (float10)FUN_007c45f0();
    if ((float10)DAT_008f89d4 <= fVar4) {
      param_3 = (float)fVar4;
    }
    else {
      param_3 = DAT_008f89d4;
    }
    fVar4 = (float10)FUN_0066bae0(param_1 + 0x70,*(undefined4 *)(param_2 + 0xbc));
    fVar4 = fVar4 * (float10)param_3 * (float10)param_7 * (float10)param_4;
    if (*(float *)(param_2 + 0x6c) == _DAT_00890968) {
      fVar4 = fVar4 * (float10)_DAT_0089119c;
    }
    if (iVar2 != 0) {
      fVar4 = ((float10)*(float *)(iVar2 + 0x10) * (float10)_DAT_008910f0 + (float10)_DAT_0089096c)
              * fVar4;
    }
    if ((float10)_DAT_00890968 < fVar4) {
      fStack_8 = *(float *)(param_2 + 0x74);
      fStack_c = *(float *)(param_2 + 0x70);
      fStack_4 = *(float *)(param_2 + 0x78);
      if (*(float *)(param_2 + 0x6c) != _DAT_00890968) {
        fStack_4 = (param_5 - param_6) * *(float *)(*(int *)(param_1 + 0x78) + 0x5c) * _DAT_00890dc4
                   + param_6;
      }
      fStack_14 = (float)-fVar4;
      uStack_18 = 0;
      uStack_10 = 0;
      FUN_00486610(&fStack_c,param_2,&fStack_c);
      FUN_00401670(&uStack_18,param_2,&uStack_18);
      (**(code **)(*piVar3 + 0x88))(&uStack_18,&fStack_c);
      return;
    }
  }
  return;
}

