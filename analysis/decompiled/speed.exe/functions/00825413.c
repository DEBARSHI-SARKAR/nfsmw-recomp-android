/* speed.exe 00825413 FUN_00825413; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00825413(float *param_1,int param_2,float param_3)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *unaff_EDI;
  
  fVar3 = (float)param_2;
  fVar2 = param_3 * fVar3;
  pbVar1 = (byte *)*unaff_EDI;
  iVar6 = param_2 / 2 + (uint)*pbVar1;
  if (_DAT_0089096c <= param_3) {
    fVar3 = (fVar3 + *param_1) - fVar2;
    fVar2 = ((float)(iVar6 + param_2) + *param_1) - fVar2;
    fVar4 = fVar3;
    if (fVar3 < _DAT_00890968) {
      fVar4 = -fVar3;
    }
    fVar5 = fVar2;
    if (fVar2 < _DAT_00890968) {
      fVar5 = -fVar2;
    }
    *unaff_EDI = pbVar1 + 1;
    if (fVar5 <= fVar4) {
      *param_1 = fVar2;
      return iVar6;
    }
  }
  else {
    fVar3 = (fVar3 + *param_1) - fVar2;
    fVar2 = ((float)(param_2 * 2 - iVar6) + *param_1) - (fVar2 + fVar2);
    fVar4 = fVar3;
    if (fVar3 < _DAT_00890968) {
      fVar4 = -fVar3;
    }
    fVar5 = fVar2;
    if (fVar2 < _DAT_00890968) {
      fVar5 = -fVar2;
    }
    if (fVar5 <= fVar4) {
      *unaff_EDI = pbVar1 + 2;
      *param_1 = fVar2;
      return -iVar6;
    }
    *unaff_EDI = pbVar1 + 1;
  }
  *param_1 = fVar3;
  return 0;
}

