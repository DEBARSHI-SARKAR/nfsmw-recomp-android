/* speed.exe 00586210 FUN_00586210; analysis pseudocode, not buildable source.
 * calls 00586130 FUN_00586130
 */

float10 FUN_00586210(short *param_1,uint param_2)

{
  float fVar1;
  short sVar2;
  short *psVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00586130(param_1,0,0,0);
  sVar2 = *param_1;
  fVar1 = (float)fVar4;
  if (sVar2 != 0) {
    psVar3 = param_1;
    param_1 = (short *)(float)fVar4;
    do {
      psVar3 = psVar3 + 1;
      if ((((param_2 & 0x20) != 0) || ((sVar2 != 10 && (sVar2 != 0x5e)))) &&
         (fVar4 = (float10)FUN_00586130(psVar3,0,0,0), (float10)(float)param_1 < fVar4)) {
        param_1 = (short *)(float)fVar4;
      }
      sVar2 = *psVar3;
      fVar1 = (float)param_1;
    } while (sVar2 != 0);
  }
  param_1 = (short *)fVar1;
  return (float10)(float)param_1;
}

