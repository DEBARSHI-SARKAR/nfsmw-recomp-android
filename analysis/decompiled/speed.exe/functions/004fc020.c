/* speed.exe 004fc020 FUN_004fc020; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x004fc102) */
/* WARNING: Removing unreachable block (ram,0x004fc0e5) */
/* WARNING: Removing unreachable block (ram,0x004fc120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc020(int param_1,int param_2,float param_3,float param_4,float param_5,float param_6)

{
  float *pfVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  
  iVar9 = (int)param_3;
  if (*(char *)((int)param_3 + 7) == '\x01') {
    cVar3 = *(char *)((int)param_3 + 4);
    fVar6 = ABS(param_4 - *(float *)((int)param_3 + 0x10));
    fVar7 = ABS(param_5 - *(float *)((int)param_3 + 0x14));
    fVar5 = ABS(param_6 - *(float *)((int)param_3 + 0x18));
    fVar8 = *(float *)((int)param_3 + 0x1c) * *(float *)((int)param_3 + 0x1c);
    fVar6 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
    if (fVar6 < fVar8) {
      pfVar1 = (float *)((int)param_3 + 0x30);
      pcVar2 = (char *)((int)param_3 + 5);
      param_3 = 1.0;
      fVar5 = *pfVar1 * *pfVar1;
      if (fVar5 < fVar6) {
        param_3 = _DAT_0089096c - (fVar6 - fVar5) / (fVar8 - fVar5);
      }
      if (cVar3 == '\0') {
        uVar4 = *(uint *)(iVar9 + 0xc);
        fVar7 = (float)(uVar4 >> 8 & 0xff);
        fVar8 = (float)(uVar4 >> 0x10 & 0xff);
        fVar5 = *(float *)(iVar9 + 0x2c);
        if (*pcVar2 == '\x02') {
          if (*(float **)(param_2 + 0xb4) < *(float **)(param_2 + 0xb8)) {
            **(float **)(param_2 + 0xb4) = (float)(uVar4 & 0xff) * param_3;
            *(float *)(*(int *)(param_2 + 0xb4) + 4) = fVar7 * param_3;
            *(float *)(*(int *)(param_2 + 0xb4) + 8) = fVar8 * param_3;
            *(float *)(*(int *)(param_2 + 0xb4) + 0xc) = fVar5 * param_3;
            if (_DAT_00890968 < param_3) {
              *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + 0x10;
              *(float *)(param_2 + 0xbc) = param_3 + *(float *)(param_2 + 0xbc);
              return;
            }
          }
        }
        else if (fVar6 < *(float *)(param_2 + 0xc0)) {
          **(float **)(param_2 + 0xb0) = (float)(uVar4 & 0xff);
          *(float *)(*(int *)(param_2 + 0xb0) + 4) = fVar7;
          *(float *)(*(int *)(param_2 + 0xb0) + 8) = fVar8;
          *(float *)(*(int *)(param_2 + 0xb0) + 0xc) = fVar5;
          *(float *)(param_2 + 0xc0) = fVar6;
          return;
        }
      }
      else if (((cVar3 == '\x02') || (cVar3 == '\x03')) && (*(int *)(param_2 + 200) < 0x18)) {
        *(int *)(param_1 + *(int *)(param_2 + 200) * 4) = iVar9;
        *(float *)(param_1 + 0x60 + *(int *)(param_2 + 200) * 4) = param_3;
        *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + 1;
        return;
      }
    }
  }
  return;
}

