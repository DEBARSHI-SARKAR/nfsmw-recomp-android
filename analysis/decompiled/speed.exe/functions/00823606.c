/* speed.exe 00823606 FUN_00823606; analysis pseudocode, not buildable source.
 * calls 0082615f FUN_0082615f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823606(byte *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = 0;
  fVar1 = (float)DAT_009c2046 * _DAT_008933d4;
  if (*param_1 != 0) {
    pbVar3 = param_1 + 4;
    do {
      FUN_0082615f((int)*(short *)pbVar3,(float)param_2 / fVar1);
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 2;
    } while (iVar2 < (int)(uint)*param_1);
  }
  return;
}

