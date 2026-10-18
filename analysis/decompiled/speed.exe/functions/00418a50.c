/* speed.exe 00418a50 FUN_00418a50; analysis pseudocode, not buildable source.
 * calls 0040a430 FUN_0040a430
 * calls 0040a390 FUN_0040a390
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418a50(float *param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  float unaff_EBX;
  float10 fVar8;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c [2];
  float fStack_4;
  
  piVar6 = param_2;
  pfVar5 = param_1;
  FUN_0040a430(param_2,&local_3c,&local_48,&local_4c);
  piVar7 = param_3;
  FUN_0040a430(param_3,&local_18,local_c,&param_2);
  FUN_0040a390(param_1,&local_3c,&local_48,local_4c,&local_18,local_c,param_2);
  (**(code **)(*piVar7 + 8))(&local_24);
  (**(code **)(*piVar6 + 8))(&fStack_34);
  param_1 = (float *)param_2;
  fVar4 = (fStack_44 + unaff_EBX) * _DAT_00890634;
  local_4c = (fStack_40 + local_4c) * _DAT_00890634;
  local_48 = (local_3c + local_48) * _DAT_00890634;
  local_c[0] = local_18 + local_c[0];
  fStack_44 = (fStack_20 + fStack_14) * _DAT_00890634;
  fStack_40 = (fStack_1c + fStack_10) * _DAT_00890634;
  local_3c = local_c[0] * _DAT_00890634;
  fVar1 = fStack_38 - fStack_2c;
  fStack_4 = fStack_34 - fStack_28;
  fVar3 = fStack_30 - local_24;
  fVar2 = fVar1 * fVar1 + fStack_4 * fStack_4 + fVar3 * fVar3;
  if (((_DAT_008910cc < fVar2) || (fVar2 < _DAT_00891108)) &&
     (fVar1 = -(((fVar4 - fStack_44) * fVar1 +
                (local_4c - fStack_40) * fStack_4 + (local_48 - local_3c) * fVar3) / fVar2),
     _DAT_00890ea8 < fVar1)) {
    local_48 = fStack_30 * fVar1 + local_48;
    fStack_10 = fStack_28 * fVar1 + fStack_40;
    local_c[0] = local_24 * fVar1 + local_3c;
    fStack_20 = (fStack_38 * fVar1 + fVar4) - (fStack_2c * fVar1 + fStack_44);
    fVar2 = (fStack_34 * fVar1 + local_4c) - fStack_10;
    fVar1 = (fStack_20 * fStack_20 +
            fVar2 * fVar2 + (local_48 - local_c[0]) * (local_48 - local_c[0])) * _DAT_00890634 +
            fVar1;
    param_1 = (float *)((float)param_3 / (fVar1 * fVar1) + (float)param_2);
  }
  param_2 = (int *)(pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
  fVar8 = (float10)FUN_005c5e80(param_2);
  if (fVar8 <= (float10)_DAT_008910cc) {
    return;
  }
  fVar8 = (float10)_DAT_00891104 / fVar8;
  if ((float10)(float)param_1 < fVar8) {
    fVar8 = (float10)(float)param_1;
  }
  *pfVar5 = (float)(fVar8 * (float10)*pfVar5);
  pfVar5[1] = (float)(fVar8 * (float10)pfVar5[1]);
  pfVar5[2] = (float)(fVar8 * (float10)pfVar5[2]);
  return;
}

