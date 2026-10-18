/* speed.exe 00824e9d FUN_00824e9d; analysis pseudocode, not buildable source.
 * calls 008264f7 FUN_008264f7
 */

void FUN_00824e9d(int param_1,int *param_2)

{
  *(float *)(param_1 + 0x54) =
       ((float)(*param_2 >> 8) + (float)(*param_2 >> 8)) / (float)(param_2[1] >> 8);
  FUN_008264f7(param_1 + 0x1c,2);
  return;
}

