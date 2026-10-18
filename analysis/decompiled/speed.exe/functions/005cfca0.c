/* speed.exe 005cfca0 FUN_005cfca0; analysis pseudocode, not buildable source.
 * calls 007c94b0 __chkstk
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_005cfca0(float *param_1,float *param_2,float *param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  float *pfVar11;
  char *pcVar12;
  undefined4 uStack_4c;
  undefined1 auStack_29 [5];
  int local_24;
  float *local_20;
  char *local_1c;
  char *local_14;
  int local_c;
  float *local_8;
  
  pfVar4 = param_3;
  iVar9 = -((int)param_1 * 0x10 + 0x20);
  local_20 = (float *)((uint)(auStack_29 + iVar9) & 0xffffffe0);
  *(undefined4 *)((int)&uStack_4c + iVar9) = 0x5cfcd5;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  param_3[3] = param_2[3];
  pcVar8 = (char *)((uint)(auStack_29 + (iVar9 - ((int)param_1 + 0x22U & 0xfffffffc))) & 0xffffffe0)
  ;
  local_24 = (int)param_1 + -1;
  pcVar10 = (char *)0x1;
  if (local_24 != 0) {
    while (pfVar11 = param_2 + 4, pcVar10 == (char *)0x1) {
      if (_DAT_008a34d8 <
          (*pfVar11 - *param_3) * (*pfVar11 - *param_3) +
          (param_2[6] - param_3[2]) * (param_2[6] - param_3[2])) {
        param_3[4] = *pfVar11;
        param_3[5] = param_2[5];
        param_3[6] = param_2[6];
        param_3[7] = param_2[7];
        pcVar10 = (char *)0x2;
      }
      local_24 = local_24 + -1;
      param_2 = pfVar11;
      if (local_24 == 0) {
        return pcVar10;
      }
    }
    if (local_24 != 0) {
      local_8 = param_2 + 6;
      do {
        param_3 = (float *)0x0;
        local_14 = (char *)0x0;
        if (3 < (int)pcVar10) {
          local_c = (2 - (int)pcVar10) * 0x10;
          iVar9 = ((uint)(pcVar10 + -4) >> 2) + 1;
          local_14 = (char *)(iVar9 * 4);
          pfVar7 = pfVar4 + 10;
          pcVar12 = pcVar8;
          do {
            param_1 = (float *)((-0x18 - (int)pfVar4) + (int)pfVar7);
            if (pcVar10 <= pcVar12 + (1 - (int)pcVar8)) {
              param_1 = (float *)(local_c + -0x10);
            }
            bVar3 = _DAT_00890968 <=
                    (*pfVar11 - pfVar7[-10]) *
                    (*(float *)((int)param_1 + 8 + (int)pfVar4) - pfVar7[-8]) -
                    (*local_8 - pfVar7[-8]) * (*(float *)((int)param_1 + (int)pfVar4) - pfVar7[-10])
            ;
            *pcVar12 = bVar3;
            if (!bVar3) {
              param_3 = (float *)((int)param_3 + 1);
            }
            param_1 = (float *)((-8 - (int)pfVar4) + (int)pfVar7);
            if (pcVar10 <= pcVar12 + (2 - (int)pcVar8)) {
              param_1 = (float *)local_c;
            }
            bVar3 = _DAT_00890968 <=
                    (*pfVar11 - pfVar7[-6]) *
                    (*(float *)((int)param_1 + 8 + (int)pfVar4) - pfVar7[-4]) -
                    (*local_8 - pfVar7[-4]) * (*(float *)((int)param_1 + (int)pfVar4) - pfVar7[-6]);
            pcVar12[1] = bVar3;
            if (!bVar3) {
              param_3 = (float *)((int)param_3 + 1);
            }
            param_1 = (float *)((8 - (int)pfVar4) + (int)pfVar7);
            if (pcVar10 <= pcVar12 + (3 - (int)pcVar8)) {
              param_1 = (float *)(local_c + 0x10);
            }
            bVar3 = _DAT_00890968 <=
                    (*pfVar11 - pfVar7[-2]) * (*(float *)((int)param_1 + 8 + (int)pfVar4) - *pfVar7)
                    - (*local_8 - *pfVar7) * (*(float *)((int)param_1 + (int)pfVar4) - pfVar7[-2]);
            pcVar12[2] = bVar3;
            if (!bVar3) {
              param_3 = (float *)((int)param_3 + 1);
            }
            param_1 = (float *)((0x18 - (int)pfVar4) + (int)pfVar7);
            if (pcVar10 <= pcVar12 + (4 - (int)pcVar8)) {
              param_1 = (float *)(local_c + 0x20);
            }
            bVar3 = _DAT_00890968 <=
                    (*pfVar11 - pfVar7[2]) *
                    (*(float *)((int)param_1 + 8 + (int)pfVar4) - pfVar7[4]) -
                    (*local_8 - pfVar7[4]) * (*(float *)((int)param_1 + (int)pfVar4) - pfVar7[2]);
            pcVar12[3] = bVar3;
            if (!bVar3) {
              param_3 = (float *)((int)param_3 + 1);
            }
            local_c = local_c + 0x40;
            pcVar12 = pcVar12 + 4;
            pfVar7 = pfVar7 + 0x10;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (local_14 < pcVar10) {
          pcVar12 = local_14 + (int)pcVar8;
          iVar9 = (int)(local_14 + (1 - (int)pcVar10)) * 0x10;
          pfVar7 = pfVar4 + (int)local_14 * 4 + 2;
          local_14 = (char *)((int)pcVar10 - (int)local_14);
          do {
            iVar5 = iVar9;
            if (pcVar12 + (1 - (int)pcVar8) < pcVar10) {
              iVar5 = (8 - (int)pfVar4) + (int)pfVar7;
            }
            bVar3 = _DAT_00890968 <=
                    (*pfVar11 - pfVar7[-2]) * (*(float *)(iVar5 + 8 + (int)pfVar4) - *pfVar7) -
                    (*local_8 - *pfVar7) * (*(float *)(iVar5 + (int)pfVar4) - pfVar7[-2]);
            *pcVar12 = bVar3;
            if (!bVar3) {
              param_3 = (float *)((int)param_3 + 1);
            }
            iVar9 = iVar9 + 0x10;
            pfVar7 = pfVar7 + 4;
            pcVar12 = pcVar12 + 1;
            local_14 = (char *)((int)local_14 + -1);
          } while (local_14 != (char *)0x0);
        }
        iVar9 = (int)param_3;
        if (param_3 != (float *)0x0) {
          if (*pcVar8 == '\0') {
            if ((pcVar10 + -1)[(int)pcVar8] == '\0') {
              cVar2 = (pcVar10 + -1)[(int)pcVar8];
              pcVar12 = pcVar10;
              while (cVar2 == '\0') {
                cVar2 = (pcVar12 + -2)[(int)pcVar8];
                pcVar12 = pcVar12 + -1;
              }
            }
            else {
              pcVar12 = (char *)0x0;
            }
          }
          else {
            pcVar12 = (char *)0x1;
            cVar2 = pcVar8[1];
            while (cVar2 != '\0') {
              pcVar1 = pcVar12 + 1;
              pcVar12 = pcVar12 + 1;
              cVar2 = pcVar1[(int)pcVar8];
            }
          }
          param_1 = (float *)(pcVar12 + (int)param_3);
          *local_20 = *pfVar11;
          local_20[1] = pfVar11[1];
          local_1c = pcVar10 + (1 - (int)param_3);
          local_20[2] = pfVar11[2];
          local_20[3] = pfVar11[3];
          if (local_1c != (char *)0x0) {
            pfVar6 = pfVar4 + (int)param_1 * 4;
            pfVar7 = local_20;
            do {
              param_3 = pfVar7 + 4;
              if (pcVar10 <= param_1) {
                param_1 = (float *)((int)param_1 + -(int)pcVar10);
                pfVar6 = pfVar6 + (int)pcVar10 * -4;
              }
              *param_3 = *pfVar6;
              pfVar7[5] = pfVar6[1];
              pfVar7[6] = pfVar6[2];
              pfVar7[7] = pfVar6[3];
              param_1 = (float *)((int)param_1 + 1);
              pfVar6 = pfVar6 + 4;
              local_1c = local_1c + -1;
              pfVar7 = param_3;
            } while (local_1c != (char *)0x0);
          }
          pcVar10 = pcVar10 + (2 - iVar9);
          *pfVar4 = *local_20;
          pfVar4[1] = local_20[1];
          pfVar4[2] = local_20[2];
          pfVar4[3] = local_20[3];
          param_3 = (float *)0x1;
          if ((char *)0x1 < pcVar10) {
            param_1 = pfVar4 + 4;
            pfVar7 = local_20;
            do {
              pfVar6 = pfVar7 + 4;
              if ((*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) +
                  (pfVar7[2] - pfVar7[6]) * (pfVar7[2] - pfVar7[6]) <= _DAT_008a34d8) {
                pcVar10 = pcVar10 + -1;
              }
              else {
                *param_1 = *pfVar6;
                param_1[1] = pfVar7[5];
                param_1[2] = pfVar7[6];
                param_1[3] = pfVar7[7];
                param_3 = (float *)((int)param_3 + 1);
                param_1 = param_1 + 4;
              }
              pfVar7 = pfVar6;
            } while (param_3 < pcVar10);
          }
        }
        pfVar11 = pfVar11 + 4;
        local_8 = local_8 + 4;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  return pcVar10;
}

