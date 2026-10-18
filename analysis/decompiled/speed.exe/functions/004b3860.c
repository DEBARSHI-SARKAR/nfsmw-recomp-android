/* speed.exe 004b3860 FUN_004b3860; analysis pseudocode, not buildable source.
 * calls 005ce2b0 FUN_005ce2b0
 */

void FUN_004b3860(undefined4 param_1,int param_2,int param_3,float param_4,float param_5)

{
  int local_14;
  float local_10;
  float local_c;
  
  local_14 = 0;
  if (0 < param_3) {
    do {
      FUN_005ce2b0(param_1,(float)local_14 / (float)(param_3 + -1),&local_10);
      local_14 = local_14 + 1;
      *(float *)(param_2 + -8 + local_14 * 8) = local_10 * param_4;
      *(float *)(param_2 + -4 + local_14 * 8) = local_c * param_5;
    } while (local_14 < param_3);
  }
  return;
}

