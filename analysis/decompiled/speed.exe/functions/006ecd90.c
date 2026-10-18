/* speed.exe 006ecd90 FUN_006ecd90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ecd90(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  if ((((uint)param_1[6] >> 4 & 1) == 0) &&
     (*param_1 < _DAT_00890968 == (*param_1 == _DAT_00890968))) {
    uVar3 = (uint)param_1[6] & 0xf;
    if (uVar3 == 0) {
      fVar1 = param_1[2];
      param_1[2] = fVar1 + *param_1;
      if (_DAT_0089096c <= fVar1 + *param_1) {
        (**(code **)(*(int *)param_1[1] + 4))(param_1[8],param_2 / *param_1);
        param_1[2] = param_1[2] - _DAT_0089096c;
        return;
      }
    }
    else if ((uVar3 == 1) && (_DAT_00890968 < param_3)) {
      fVar1 = param_1[2];
      param_1[2] = fVar1 + *param_1;
      fVar2 = param_1[7];
      param_1[7] = param_3 + fVar2;
      if (_DAT_0089096c <= fVar1 + *param_1) {
        (**(code **)(*(int *)param_1[1] + 4))(param_1[8],param_3 + fVar2);
        fVar1 = param_1[2] - _DAT_0089096c;
        param_1[7] = 0.0;
        param_1[2] = fVar1;
      }
    }
  }
  return;
}

