/* speed.exe 004b0320 FUN_004b0320; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b0320(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 6) == '\0') {
    param_2 = param_2 + *param_1;
    *param_1 = param_2;
    if (param_1[1] < param_2) {
      param_1[5] = param_1[3];
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
    fVar3 = param_1[4];
    if (fVar3 != 1.4013e-45) {
      if (fVar3 == 2.8026e-45) {
        fVar3 = (_DAT_0089096c / param_1[1]) * param_2 - _DAT_0089096c;
        param_1[5] = (param_1[3] - param_1[2]) * (_DAT_0089096c - fVar3 * fVar3) + param_1[2];
        return;
      }
      fVar1 = param_1[3];
      fVar2 = param_1[2];
      if (fVar3 != 7.00649e-45) {
        param_1[5] = (param_2 / param_1[1]) * (fVar1 - fVar2) + param_1[2];
        return;
      }
      iVar4 = FUN_007c4b80();
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      iVar4 = FUN_004e42a0(3,iVar4,0);
      param_1[5] = (float)iVar4 * _DAT_00896ab8 * (fVar1 - fVar2) + param_1[2];
      return;
    }
    param_1[5] = (param_1[3] - param_1[2]) * (param_2 / param_1[1]) * (param_2 / param_1[1]) +
                 param_1[2];
  }
  return;
}

