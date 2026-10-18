/* speed.exe 00779170 FUN_00779170; analysis pseudocode, not buildable source.
 * calls 00402690 FUN_00402690
 * calls 00762d00 FUN_00762d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_00779170(float *param_1,int param_2,float *param_3,char param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  char local_1e;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(short *)((int)param_1 + 0x32) = *(short *)((int)param_1 + 0x32) + 1;
  local_18 = *param_3;
  local_14 = param_3[1];
  fVar1 = param_1[0xc];
  local_10 = param_3[2];
  bVar3 = false;
  local_1e = '\0';
  if (((uint)fVar1 & 1) != 0) {
    local_1e = FUN_00762d00(&local_18,param_1);
  }
  param_3 = (float *)0x7e967699;
  if ((local_1e == '\0') || (param_4 == '\0')) {
    local_14 = local_14 + param_1[0xd];
    param_1[0xc] = (float)((uint)fVar1 & 0xfffffffe);
    piVar5 = *(int **)(param_2 + 4);
    if (piVar5 != *(int **)(param_2 + 8)) {
      do {
        if ((bVar3) && ((*(byte *)((int)param_1 + 0x2d) & 4) == 0)) break;
        iVar2 = *piVar5;
        pfVar7 = *(float **)(iVar2 + 4);
        if (pfVar7 != *(float **)(iVar2 + 8)) {
          do {
            cVar4 = FUN_00762d00(&local_18,pfVar7);
            if (cVar4 != '\0') {
              FUN_00402690(&local_c);
              if (local_8 == _DAT_00890968) {
                fVar1 = pfVar7[1];
              }
              else {
                fVar1 = pfVar7[1] -
                        ((local_18 - *pfVar7) * local_c + (local_10 - pfVar7[2]) * local_4) /
                        local_8;
              }
              fVar1 = local_14 - fVar1;
              if ((fVar1 < (float)param_3) && (_DAT_00890da8 < fVar1)) {
                param_1[0xc] = (float)((uint)param_1[0xc] | 1);
                pfVar8 = pfVar7;
                pfVar9 = param_1;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *pfVar9 = *pfVar8;
                  pfVar8 = pfVar8 + 1;
                  pfVar9 = pfVar9 + 1;
                }
                param_1[0xe] = pfVar7[3];
                bVar3 = true;
                param_3 = (float *)fVar1;
                if ((*(byte *)((int)param_1 + 0x2d) & 4) == 0) break;
              }
            }
            pfVar7 = pfVar7 + 0xc;
          } while (pfVar7 != *(float **)(iVar2 + 8));
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != *(int **)(param_2 + 8));
    }
  }
  return local_1e == '\0';
}

