/* speed.exe 00769360 FUN_00769360; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 * calls 00735620 FUN_00735620
 * calls 00735a30 FUN_00735a30
 * calls 0045dbd0 FUN_0045dbd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00769360(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_18;
  
  local_18 = 0.35;
  if (DAT_00925e90 != 3) {
    local_18 = 0.05;
  }
  cVar6 = FUN_00735620();
  if (cVar6 == '\0') {
    fVar1 = param_1[1];
    fVar2 = DAT_009259bc * _DAT_008970f0 * (float)(int)fVar1 * *param_1 * _DAT_008b5b18 + param_1[2]
    ;
    param_1[2] = fVar2;
    if (local_18 <= fVar2) {
      if (_DAT_0089096c - local_18 < fVar2) {
        param_1[2] = _DAT_0089096c - local_18;
        param_1[1] = (float)-(int)fVar1;
      }
    }
    else {
      param_1[2] = local_18;
      param_1[1] = (float)-(int)fVar1;
    }
  }
  else {
    fVar7 = (float10)FUN_00735a30();
    param_1[2] = (float)fVar7;
  }
  fVar1 = param_1[2];
  if (param_1[2] <= local_18) {
    fVar1 = local_18;
  }
  if (_DAT_0089096c - local_18 < fVar1) {
    fVar1 = _DAT_0089096c - local_18;
  }
  fVar2 = param_1[3];
  fVar3 = param_1[4];
  fVar1 = (fVar1 - (float)_DAT_008987a8) * (float)_DAT_008b5bf8;
  fVar4 = fVar2 + _DAT_00891654;
  fVar7 = (float10)FUN_0045dbd0(fVar4);
  fVar5 = fVar1 + _DAT_00891654;
  fVar8 = (float10)FUN_0045dbd0(fVar5);
  fVar9 = (float10)FUN_0045dbd0(fVar3);
  fVar10 = (float10)FUN_0045dbd0(fVar2);
  fVar11 = (float10)FUN_0045dbd0(fVar1);
  param_1[0x5c] =
       (float)((fVar11 * (float10)(float)fVar7 +
               (float10)(float)(fVar10 * (float10)(float)fVar9 * (float10)(float)fVar8)) *
              (float10)_DAT_00905d44);
  fVar7 = (float10)FUN_0045dbd0(fVar5);
  fVar8 = (float10)FUN_0045dbd0(fVar4);
  fVar9 = (float10)FUN_0045dbd0(fVar2);
  fVar10 = (float10)FUN_0045dbd0(fVar1);
  fVar11 = (float10)FUN_0045dbd0(fVar3);
  param_1[0x5d] =
       (float)((fVar11 * (float10)(float)fVar8 * (float10)(float)fVar7 +
               (float10)(float)(fVar10 * (float10)(float)fVar9)) * (float10)_DAT_00905d44);
  fVar8 = (float10)FUN_0045dbd0(fVar3 + _DAT_00891654);
  fVar9 = (float10)FUN_0045dbd0(fVar5);
  fVar7 = (float10)_DAT_00905d44;
  param_1[0x5f] = 1.0;
  param_1[0x5e] = (float)(fVar9 * fVar7 * (float10)(float)fVar8);
  param_1[99] = 0.0;
  FUN_0045f490(param_1 + 0x60,param_1 + 0x5c);
  return;
}

