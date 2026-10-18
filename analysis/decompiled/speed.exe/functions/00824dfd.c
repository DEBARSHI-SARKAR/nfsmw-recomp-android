/* speed.exe 00824dfd FUN_00824dfd; analysis pseudocode, not buildable source.
 * calls 008264f7 FUN_008264f7
 */

void FUN_00824dfd(int param_1,int *param_2)

{
  *(float *)(param_1 + 0x50) = (float)(*param_2 >> 7) / (float)(param_2[1] >> 8);
  FUN_008264f7(param_1 + 0x1c,3);
  return;
}

