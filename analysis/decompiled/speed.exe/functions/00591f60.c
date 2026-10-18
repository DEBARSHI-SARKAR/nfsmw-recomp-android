/* speed.exe 00591f60 FUN_00591f60; analysis pseudocode, not buildable source.
 * calls 00586050 FUN_00586050
 */

float10 FUN_00591f60(short *param_1,uint param_2)

{
  short sVar1;
  short *psVar2;
  float10 fVar3;
  float local_4;
  
  local_4 = 0.0;
  if ((param_2 & 0x200) == 0) {
    sVar1 = *param_1;
    psVar2 = param_1 + -1;
    do {
      fVar3 = (float10)FUN_00586050(sVar1,(int)*psVar2,param_2);
      sVar1 = param_1[1];
      local_4 = (float)(fVar3 + (float10)local_4);
      if (((sVar1 == 0x20) || (sVar1 == 0)) || (sVar1 == 10)) break;
      psVar2 = param_1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0x5e);
  }
  return (float10)local_4;
}

