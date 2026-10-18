/* speed.exe 00789cc0 FUN_00789cc0; analysis pseudocode, not buildable source.
 * calls 00786750 FUN_00786750
 * calls 00779170 FUN_00779170
 * calls 00402690 FUN_00402690
 */

undefined4 __thiscall
FUN_00789cc0(float *param_1,float *param_2,float *param_3,undefined4 param_4,int param_5,
            char param_6)

{
  float fVar1;
  char cVar2;
  
  fVar1 = param_1[0xc];
  if (param_5 == 0) {
    cVar2 = FUN_00786750(0,param_2,param_4);
  }
  else {
    cVar2 = FUN_00779170(param_5 + 0x5c,param_2,param_4);
  }
  if (((uint)param_1[0xc] & 1) == 0) {
    param_1[0xe] = DAT_00988e84;
    if ((param_6 == '\0') || (((uint)fVar1 & 1) == 0)) {
      param_3[3] = -1.0;
      return 0;
    }
    param_1[0xc] = (float)((uint)param_1[0xc] | 1);
  }
  if (cVar2 != '\0') {
    if (((uint)param_1[0xc] & 1) == 0) {
      param_3[2] = 0.0;
      *param_3 = 0.0;
      param_3[1] = 1.0;
    }
    else {
      FUN_00402690(param_3);
    }
    param_3[3] = 0.0;
  }
  param_3[3] = (*param_1 - *param_2) * *param_3 +
               (param_1[1] - param_2[1]) * param_3[1] + (param_1[2] - param_2[2]) * param_3[2];
  return 1;
}

