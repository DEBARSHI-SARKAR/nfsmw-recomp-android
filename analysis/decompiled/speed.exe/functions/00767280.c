/* speed.exe 00767280 FUN_00767280; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00767280(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = *param_1;
  fVar4 = param_1[2];
  fVar1 = param_1[4] - fVar3;
  fVar5 = param_1[6] - fVar4;
  fVar8 = param_2[4] - *param_2;
  fVar6 = param_2[6] - param_2[2];
  fVar2 = fVar6 * fVar1 - fVar8 * fVar5;
  if (fVar2 != _DAT_00890968) {
    fVar7 = fVar4 - param_2[2];
    fVar9 = fVar3 - *param_2;
    fVar6 = fVar7 * fVar8 - fVar9 * fVar6;
    if ((((_DAT_008a355c <= fVar6) && (fVar6 < fVar2 != (fVar6 == fVar2))) ||
        ((fVar6 < _DAT_00891218 != (fVar6 == _DAT_00891218) && (fVar2 <= fVar6)))) &&
       (((fVar8 = fVar7 * fVar1 - fVar9 * fVar5, _DAT_008a355c <= fVar8 && (fVar8 < fVar2)) ||
        ((fVar8 < _DAT_00891218 != (fVar8 == _DAT_00891218) && (fVar2 <= fVar8)))))) {
      if (param_3 != (float *)0x0) {
        fVar6 = fVar6 / fVar2;
        *param_3 = fVar1 * fVar6 + fVar3;
        fVar3 = param_1[5];
        fVar1 = param_1[1];
        fVar2 = param_1[1];
        param_3[3] = 1.0;
        param_3[1] = (fVar3 - fVar1) * fVar6 + fVar2;
        param_3[2] = fVar6 * fVar5 + fVar4;
      }
      return 1;
    }
  }
  return 0;
}

