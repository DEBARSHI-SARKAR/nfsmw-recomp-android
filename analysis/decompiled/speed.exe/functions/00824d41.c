/* speed.exe 00824d41 FUN_00824d41; analysis pseudocode, not buildable source.
 * calls 008264f7 FUN_008264f7
 */

void FUN_00824d41(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *(float *)(param_1 + 0x50) = (float)(*param_2 >> 7) / (float)(iVar2 >> 8);
  *(float *)(param_1 + 0x54) = (float)(iVar1 >> 7) / (float)(iVar2 >> 8);
  FUN_008264f7(param_1 + 0x1c,4);
  return;
}

