/* speed.exe 0047c440 FUN_0047c440; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 0045e240 FUN_0045e240
 * calls 0045f640 FUN_0045f640
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0047c440(float *param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_90 [48];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [76];
  
  if ((_DAT_00911280 & 1) == 0) {
    _DAT_00911280 = _DAT_00911280 | 1;
  }
  _DAT_00911278 = 0;
  _DAT_00911274 = 0;
  _DAT_00911270 = 0;
  piVar4 = (int *)**(int **)(DAT_00911050 + 4);
  if (piVar4 != *(int **)(DAT_00911050 + 4)) {
    do {
      piVar2 = (int *)piVar4[2];
      (**(code **)(*piVar2 + 4))(local_50);
      FUN_0045e240(auStack_90,local_50);
      fStack_f0 = fStack_60 - *param_1;
      fStack_ec = fStack_5c - param_1[1];
      fStack_e8 = fStack_58 - param_1[2];
      fVar1 = fStack_ec * fStack_ec + fStack_f0 * fStack_f0 + fStack_e8 * fStack_e8;
      if ((_DAT_00895064 < fVar1) && (fVar1 < _DAT_00895060)) {
        FUN_0045f490(&fStack_f0,&fStack_f0);
        FUN_0045f490(&fStack_d0,param_2);
        if (_DAT_00894594 < fStack_cc * fStack_ec + fStack_f0 * fStack_d0 + fStack_c8 * fStack_e8) {
          fVar1 = _DAT_0089505c / fVar1;
          fStack_d8 = _DAT_00890968;
          if ((_DAT_00890968 < fVar1) && (fStack_d8 = fVar1, _DAT_0089096c < fVar1)) {
            fStack_d8 = 1.0;
          }
          (**(code **)(*piVar2 + 8))(&fStack_bc);
          fStack_ac = -fStack_bc;
          uStack_b0 = uStack_b4;
          uStack_a8 = uStack_b8;
          fVar5 = (float10)FUN_0045f340(param_2,&uStack_b0);
          fVar5 = (fVar5 - (float10)_DAT_00894614) * (float10)_DAT_00895058;
          fVar1 = (float)fVar5;
          fStack_d4 = _DAT_00890968;
          if (((float10)_DAT_00890968 < fVar5) && (fStack_d4 = fVar1, _DAT_0089096c < fVar1)) {
            fStack_d4 = 1.0;
          }
          FUN_0045f490(&fStack_a0,&uStack_b0);
          FUN_0045f490(&fStack_d0,param_2);
          fVar1 = fStack_a0 * fStack_d0 + fStack_9c * fStack_cc + fStack_98 * fStack_c8;
          fVar3 = _DAT_00890968;
          if (fVar1 < _DAT_00890968) {
            fVar3 = -fVar1;
          }
          FUN_0045f640(&DAT_00911270,&DAT_00911270,&fStack_f0,(fStack_d4 + fVar3) * fStack_d8);
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(DAT_00911050 + 4));
  }
  return &DAT_00911270;
}

