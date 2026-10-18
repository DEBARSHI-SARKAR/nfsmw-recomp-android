/* speed.exe 00493700 FUN_00493700; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00493700(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  param_2 = param_2 * _DAT_0089551c;
  if (param_2 == _DAT_00890968) {
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 1.0;
    param_1[6] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 1.0;
    return;
  }
  fVar5 = (float10)fsin((float10)param_2);
  fVar6 = (float10)fcos((float10)param_2);
  fVar7 = (float10)_DAT_0089096c /
          SQRT((float10)param_5 * (float10)param_5 +
               (float10)param_4 * (float10)param_4 + (float10)param_3 * (float10)param_3);
  fVar8 = (float10)param_3 * fVar7;
  fVar1 = (float)(fVar7 * (float10)param_4);
  fVar2 = (float)(fVar7 * (float10)param_5);
  fVar7 = (float10)_DAT_0089096c - fVar6;
  fVar9 = fVar7 * fVar8;
  fVar3 = (float)(fVar7 * (float10)fVar1);
  fVar4 = (float)(fVar7 * (float10)fVar2);
  *param_1 = (float)(fVar9 * fVar8 + fVar6);
  param_1[1] = (float)((float10)fVar1 * fVar9 + (float10)(float)(fVar5 * (float10)fVar2));
  param_1[2] = (float)(fVar9 * (float10)fVar2 - (float10)(float)(fVar5 * (float10)fVar1));
  param_1[4] = (float)((float10)fVar3 * fVar8 - (float10)(float)(fVar5 * (float10)fVar2));
  param_1[5] = (float)((float10)fVar3 * (float10)fVar1 + fVar6);
  param_1[6] = fVar3 * fVar2 + (float)(fVar5 * fVar8);
  param_1[8] = (float)((float10)fVar4 * fVar8 + (float10)(float)(fVar5 * (float10)fVar1));
  param_1[9] = fVar4 * fVar1 - (float)(fVar5 * fVar8);
  param_1[10] = (float)((float10)fVar4 * (float10)fVar2 + fVar6);
  return;
}

