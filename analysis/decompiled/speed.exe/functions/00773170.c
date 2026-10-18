/* speed.exe 00773170 FUN_00773170; analysis pseudocode, not buildable source.
 * calls 00767280 FUN_00767280
 */

bool __thiscall FUN_00773170(byte *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = param_4;
  *(undefined1 *)((int)param_4 + 0x51) = 0;
  pfVar6 = *(float **)(param_2 + 4);
  pfVar5 = (float *)0x0;
  param_4 = (float *)0x7e967699;
  if (pfVar6 != *(float **)(param_2 + 8)) {
    do {
      if (((*param_1 & *(byte *)((int)pfVar6 + 0xd)) == 0) &&
         (cVar3 = FUN_00767280(param_3,pfVar6,&local_10), cVar3 != '\0')) {
        if (pfVar6[5] <= pfVar6[1]) {
          fVar1 = pfVar6[5];
        }
        else {
          fVar1 = pfVar6[1];
        }
        if (fVar1 < local_c) {
          if (pfVar6[1] <= pfVar6[5]) {
            fVar1 = pfVar6[5];
          }
          else {
            fVar1 = pfVar6[1];
          }
          if ((local_c < fVar1) &&
             (fVar1 = (local_8 - param_3[2]) * (local_8 - param_3[2]) +
                      (local_c - param_3[1]) * (local_c - param_3[1]) +
                      (local_10 - *param_3) * (local_10 - *param_3), fVar1 < (float)param_4)) {
            *pfVar2 = local_10;
            pfVar2[1] = local_c;
            pfVar2[2] = local_8;
            pfVar2[3] = local_4;
            pfVar5 = pfVar6;
            param_4 = (float *)fVar1;
          }
        }
      }
      pfVar6 = pfVar6 + 10;
    } while (pfVar6 != *(float **)(param_2 + 8));
    if (pfVar5 != (float *)0x0) {
      pfVar6 = pfVar2 + 8;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      *(undefined1 *)((int)pfVar2 + 0x51) = 2;
    }
  }
  return *(char *)((int)pfVar2 + 0x51) != '\0';
}

