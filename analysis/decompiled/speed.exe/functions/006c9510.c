/* speed.exe 006c9510 FUN_006c9510; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006c9510(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = 0;
  bVar3 = 1;
  pfVar2 = (float *)(param_1 + 4);
  fVar1 = param_2[3];
  do {
    bVar4 = 0;
    if (bVar3 == 0) break;
    fVar1 = 0.0;
    bVar3 = bVar3 & _DAT_00890968 <=
                    param_2[1] * *pfVar2 + pfVar2[-1] * *param_2 + pfVar2[1] * param_2[2] +
                    pfVar2[2] + param_2[3];
    iVar5 = iVar5 + 1;
    pfVar2 = pfVar2 + 4;
    bVar4 = bVar3;
  } while (iVar5 < 6);
  return CONCAT31((int3)((uint)fVar1 >> 8),bVar4);
}

