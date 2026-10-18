/* speed.exe 0066bcc0 FUN_0066bcc0; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 * calls 0066bc60 FUN_0066bc60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bcc0(float param_1,int param_2,float param_3,float param_4,int param_5,
                    float *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float local_10;
  
  pfVar7 = param_6;
  iVar6 = (int)param_1;
  if (param_6 != (float *)0x0) {
    *param_6 = 0.0;
  }
  local_10 = _DAT_0089096c;
  if ((param_4 < _DAT_0089096c) && (local_10 = param_4, param_4 < _DAT_00890968)) {
    local_10 = 0.0;
  }
  uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 8) + 0x5c);
  uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 8) + 0x58);
  param_1 = 0.0;
  fVar8 = (float10)FUN_0066bc60(iVar6,param_2,param_5);
  fVar1 = (float)fVar8;
  pfVar4 = *(float **)(param_2 + 8);
  param_6 = (float *)pfVar4[6];
  param_4 = *pfVar4;
  fVar5 = pfVar4[2];
  if ((_DAT_00890968 < (float)param_6) || (_DAT_00890968 < param_4)) {
    if (param_5 != 0) {
      param_4 = param_4 - param_4 * *(float *)(param_5 + 0x18) * _DAT_008910f0;
      param_6 = (float *)((*(float *)(param_5 + 0x18) * _DAT_008910f0 + _DAT_0089096c) *
                         (float)param_6);
    }
    if (param_3 < fVar1) {
      if (fVar5 < _DAT_00890968) {
        fVar8 = (float10)FUN_00401ae0(param_3,uVar2,fVar1);
        param_1 = (float)(fVar8 * (float10)fVar5);
        if (pfVar7 != (float *)0x0) {
          iVar6 = *(int *)(param_2 + 8);
          if (param_4 < (float)param_6) {
            param_4 = (float)param_6;
          }
          fVar9 = (float10)FUN_00401ae0(-param_1,0,param_4);
          *pfVar7 = (float)-(fVar9 * (float10)*(float *)(iVar6 + 0x14) * (float10)(float)fVar8);
        }
      }
    }
    else {
      fVar8 = (float10)FUN_00401ae0(param_3,fVar1,uVar3);
      param_1 = (float)(fVar8 * (float10)(float)param_6 +
                       ((float10)_DAT_0089096c - fVar8) * (float10)param_4);
      if (pfVar7 != (float *)0x0) {
        iVar6 = *(int *)(param_2 + 8);
        if (param_4 < (float)param_6) {
          param_4 = (float)param_6;
        }
        fVar8 = (float10)FUN_00401ae0(param_1,0,param_4);
        *pfVar7 = (float)(fVar8 * (float10)*(float *)(iVar6 + 0x14) * (float10)local_10);
        return (float10)local_10 * (float10)param_1;
      }
    }
  }
  return (float10)local_10 * (float10)param_1;
}

