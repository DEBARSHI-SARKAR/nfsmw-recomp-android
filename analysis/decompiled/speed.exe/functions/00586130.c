/* speed.exe 00586130 FUN_00586130; analysis pseudocode, not buildable source.
 * calls 00586050 FUN_00586050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00586130(short *param_1,undefined4 param_2,int param_3,char param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  float10 fVar4;
  float10 fVar5;
  short *psVar6;
  float local_4;
  
  psVar6 = param_1;
  if (param_1 == (short *)0x0) {
    return (float10)_DAT_00890968;
  }
  sVar1 = *param_1;
  fVar4 = (float10)_DAT_00890968;
  param_1 = (short *)_DAT_00890968;
  iVar2 = 0;
  local_4 = 0.0;
  if (sVar1 != 0) {
    while( true ) {
      psVar3 = psVar6 + 1;
      if (sVar1 == 10) {
        return fVar4;
      }
      if (sVar1 == 0x5e) break;
      if (sVar1 == 0x20) {
        local_4 = (float)fVar4;
      }
      if (iVar2 == 0) {
        psVar6 = (short *)0x0;
      }
      fVar4 = (float10)FUN_00586050(sVar1,psVar6,param_2);
      fVar4 = fVar4 + (float10)(float)param_1;
      param_1 = (short *)(float)fVar4;
      if (param_3 != 0) {
        fVar5 = (float10)param_3;
        if (param_3 < 0) {
          fVar5 = fVar5 + (float10)_DAT_00891214;
        }
        if ((fVar5 < fVar4) && (param_4 != '\0')) {
          if (local_4 <= _DAT_00890968) {
            return fVar4;
          }
          return (float10)local_4;
        }
      }
      sVar1 = *psVar3;
      iVar2 = iVar2 + 1;
      psVar6 = psVar3;
      if (sVar1 == 0) {
        return fVar4;
      }
    }
    return fVar4;
  }
  return fVar4;
}

