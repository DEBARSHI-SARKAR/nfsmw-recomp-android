/* speed.exe 00826710 FUN_00826710; analysis pseudocode, not buildable source.
 */

void FUN_00826710(float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  
  fVar1 = *param_1;
  iVar3 = param_2 * -4;
  do {
    fVar1 = param_1[2] * *(float *)(iVar3 + param_3 + param_2 * 4) + fVar1 * param_1[1];
    *(float *)(iVar3 + param_4 + param_2 * 4) = fVar1;
    bVar2 = iVar3 < -4;
    iVar3 = iVar3 + 4;
  } while (bVar2);
  *param_1 = fVar1;
  return;
}

