/* speed.exe 0041da00 FUN_0041da00; analysis pseudocode, not buildable source.
 */

void FUN_0041da00(float *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5
                 ,float param_6,float param_7)

{
  uint uVar1;
  char cVar2;
  float local_c;
  float local_8;
  float local_4;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
    cVar2 = (**(code **)(*(int *)*param_2 + 0xd4))(&local_c);
    if (cVar2 != '\0') {
      if (local_c < param_4) {
        local_c = param_4;
      }
      if (local_8 < param_5) {
        local_8 = param_5;
      }
      if (local_4 < param_6) {
        local_4 = param_6;
      }
      uVar1 = (uint)param_7 >> 8;
      param_7 = (float)CONCAT31((int3)uVar1,1);
      param_4 = local_c;
      param_5 = local_8;
      param_6 = local_4;
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return;
}

