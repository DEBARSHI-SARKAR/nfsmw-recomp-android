/* speed.exe 0040ed50 FUN_0040ed50; analysis pseudocode, not buildable source.
 * calls 004077d0 FUN_004077d0
 */

void FUN_0040ed50(float *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5
                 )

{
  float fVar1;
  float fVar2;
  float local_8;
  float local_4;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_004077d0(*param_2);
    fVar1 = local_8;
    if (param_4 < local_8) {
      fVar1 = param_4;
    }
    fVar2 = local_4;
    if (param_5 < local_4) {
      fVar2 = param_5;
    }
    param_5 = fVar2;
    param_4 = fVar1;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}

