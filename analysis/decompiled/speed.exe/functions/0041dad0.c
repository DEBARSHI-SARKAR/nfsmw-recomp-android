/* speed.exe 0041dad0 FUN_0041dad0; analysis pseudocode, not buildable source.
 * calls 00413ee0 FUN_00413ee0
 */

void FUN_0041dad0(float *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5
                 ,float param_6)

{
  float local_c;
  float local_8;
  char local_4;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_00413ee0(*param_2);
    if (local_4 != '\0') {
      if (local_c < param_4) {
        param_4 = local_c;
      }
      if (local_8 < param_5) {
        param_5 = local_8;
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  return;
}

