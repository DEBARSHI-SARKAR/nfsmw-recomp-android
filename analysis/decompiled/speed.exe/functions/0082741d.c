/* speed.exe 0082741d FUN_0082741d; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082741d(int param_1,int param_2,int param_3,int *param_4,uint *param_5,int param_6,
                 uint param_7)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  
  puVar6 = param_5;
  puVar1 = (ushort *)((int)param_5 + 2);
  param_5 = (uint *)0x0;
  *puVar6 = (uint)*puVar1;
  fVar5 = _DAT_008933d4;
  if (0 < param_1) {
    do {
      fVar4 = (float)(int)*puVar6;
      if ((int)*puVar6 < 0) {
        fVar4 = fVar4 + _DAT_00891214;
      }
      fVar4 = fVar4 * _DAT_008c5dd0;
      pfVar2 = (float *)(param_2 + *param_4 * 4);
      pfVar3 = (float *)(param_2 + 8 + *param_4 * 4);
      *(float *)(param_3 + (int)param_5 * 4) =
           (pfVar2[1] - pfVar2[-1]) * fVar5 * fVar4 +
           ((pfVar2[1] + pfVar2[1] + pfVar2[-1]) - (*pfVar2 * _DAT_00890da4 + *pfVar3) * fVar5) *
           fVar4 * fVar4 +
           fVar4 * fVar4 * fVar4 *
           (((*pfVar2 - pfVar2[1]) * _DAT_008959e4 - pfVar2[-1]) + *pfVar3) * fVar5 + *pfVar2;
      *puVar6 = *puVar6 + (param_6 << 0x10 | param_7 >> 0x10);
      *param_4 = *param_4 + (*puVar6 >> 0x10);
      *(undefined2 *)((int)puVar6 + 2) = 0;
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < param_1);
  }
  *puVar6 = *puVar6 << 0x10;
  return;
}

