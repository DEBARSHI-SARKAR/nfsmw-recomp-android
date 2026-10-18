/* speed.exe 00819f0b FUN_00819f0b; analysis pseudocode, not buildable source.
 */

int FUN_00819f0b(byte *param_1)

{
  float fVar1;
  byte *pbVar2;
  int iVar3;
  
  fVar1 = (float)*(int *)(param_1 + 8);
  if (1 < *param_1) {
    pbVar2 = param_1 + 0xc;
    iVar3 = *param_1 - 1;
    do {
      fVar1 = fVar1 * (float)*(int *)pbVar2;
      pbVar2 = pbVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (int)ROUND(fVar1 * *(float *)(param_1 + 4));
}

