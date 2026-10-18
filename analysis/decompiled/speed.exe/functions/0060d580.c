/* speed.exe 0060d580 FUN_0060d580; analysis pseudocode, not buildable source.
 */

void FUN_0060d580(float *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5
                 ,float param_6)

{
  float fVar1;
  char cVar2;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = param_6;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
    cVar2 = (**(code **)(*(int *)*param_2 + 0xd4))(&local_c);
    param_6 = fVar1;
    if (cVar2 != '\0') {
      if (local_c < param_4) {
        local_c = param_4;
      }
      if (local_8 < param_5) {
        local_8 = param_5;
      }
      param_4 = local_c;
      param_5 = local_8;
      param_6 = local_4;
      if (local_4 < fVar1) {
        param_6 = fVar1;
      }
    }
    fVar1 = param_6;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = fVar1;
  return;
}

