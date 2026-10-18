/* speed.exe 00651040 FUN_00651040; analysis pseudocode, not buildable source.
 * calls 00651040 FUN_00651040
 */

float * __thiscall FUN_00651040(int *param_1,int param_2,float param_3,float param_4,float param_5)

{
  short sVar1;
  float *pfVar2;
  int iVar3;
  short *psVar4;
  
  sVar1 = *(short *)(param_2 + 0xe);
  iVar3 = 0;
  if (0 < sVar1) {
    psVar4 = (short *)(param_2 + 0x1c);
    do {
      pfVar2 = (float *)(*psVar4 * 0x30 + *param_1);
      if (((ABS(param_3 - *pfVar2) < pfVar2[4]) && (ABS(param_4 - pfVar2[1]) < pfVar2[5])) &&
         (ABS(param_5 - pfVar2[2]) < pfVar2[6])) {
        if (*(short *)((int)pfVar2 + 0xe) < 1) {
          return pfVar2;
        }
        pfVar2 = (float *)FUN_00651040(pfVar2,param_3,param_4,param_5);
        if (pfVar2 != (float *)0x0) {
          return pfVar2;
        }
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar3 < sVar1);
  }
  return (float *)0x0;
}

