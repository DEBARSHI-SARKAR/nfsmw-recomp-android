/* speed.exe 006927a0 FUN_006927a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006927a0(char param_1,int param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float fVar1;
  byte bVar2;
  float10 fVar3;
  
  if (((param_1 == '\0') || (param_2 < 3)) && (param_2 != 1)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  fVar3 = (float10)param_5;
  fVar1 = (-(float)(&DAT_008aae0c)[bVar2] / param_6) * _DAT_00894200;
  if (((_DAT_00890968 < param_3) && ((param_5 - param_4) / param_3 < fVar1)) &&
     (fVar1 = fVar1 * param_3 + param_4, param_5 <= fVar1)) {
    fVar3 = (float10)fVar1;
  }
  return (float10)param_4 * (float10)_DAT_00899d6c + fVar3 * (float10)_DAT_008ab24c;
}

