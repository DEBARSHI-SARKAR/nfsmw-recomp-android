/* speed.exe 00402690 FUN_00402690; analysis pseudocode, not buildable source.
 * calls 005c67f0 FUN_005c67f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402690(float *param_1,float *param_2)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = (param_1[2] - param_1[10]) * (param_1[5] - param_1[1]) -
             (param_1[1] - param_1[9]) * (param_1[6] - param_1[2]);
  local_14 = (*param_1 - param_1[8]) * (param_1[6] - param_1[2]) -
             (param_1[2] - param_1[10]) * (param_1[4] - *param_1);
  local_10 = (param_1[1] - param_1[9]) * (param_1[4] - *param_1) -
             (*param_1 - param_1[8]) * (param_1[5] - param_1[1]);
  if (((local_18 == _DAT_00890968) && (local_14 == _DAT_00890968)) && (local_10 == _DAT_00890968)) {
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
  }
  else {
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    FUN_005c67f0(&local_18,param_2);
  }
  if (param_2[1] < _DAT_00890968) {
    *param_2 = -*param_2;
    param_2[1] = -param_2[1];
    param_2[2] = -param_2[2];
  }
  if (_DAT_0089097c <= param_2[1]) {
    param_2[1] = 0.9999;
  }
  return;
}

