/* speed.exe 004b0120 FUN_004b0120; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b0120(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x1e) == '\0') && (param_1[0x1b] != 0.0)) {
    fVar4 = param_1[0x1c];
    param_2 = param_2 + *param_1;
    *param_1 = param_2;
    if (param_2 <= param_1[(int)fVar4 + 1]) {
      fVar1 = param_1[(int)fVar4 + 0x15];
      if (fVar1 != 1.4013e-45) {
        if (fVar1 == 2.8026e-45) {
          fVar1 = (_DAT_0089096c / param_1[(int)fVar4 + 1]) * param_2 - _DAT_0089096c;
          param_1[0x1d] =
               (param_1[(int)fVar4 + 0xd] - param_1[(int)fVar4 + 7]) *
               (_DAT_0089096c - fVar1 * fVar1) + param_1[(int)fVar4 + 7];
          return;
        }
        fVar2 = param_1[(int)fVar4 + 0xd];
        fVar3 = param_1[(int)fVar4 + 7];
        if (fVar1 != 7.00649e-45) {
          param_1[0x1d] =
               (param_2 / param_1[(int)fVar4 + 1]) * (fVar2 - fVar3) + param_1[(int)fVar4 + 7];
          return;
        }
        iVar5 = FUN_007c4b80();
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        else if (0x7fff < iVar5) {
          iVar5 = 0x7fff;
        }
        iVar5 = FUN_004e42a0(3,iVar5,0);
        param_1[0x1d] =
             (float)iVar5 * _DAT_00896ab8 * (fVar2 - fVar3) + param_1[(int)param_1[0x1c] + 7];
        return;
      }
      param_1[0x1d] =
           (param_1[(int)fVar4 + 0xd] - param_1[(int)fVar4 + 7]) *
           (param_2 / param_1[(int)fVar4 + 1]) * (param_2 / param_1[(int)fVar4 + 1]) +
           param_1[(int)fVar4 + 7];
    }
    else {
      param_1[0x1d] = param_1[(int)fVar4 + 0xd];
      if ((int)param_1[0x1b] + -1 <= (int)fVar4) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
        return;
      }
      fVar1 = param_1[(int)fVar4 + 1];
      param_1[0x1c] = (float)((int)fVar4 + 1);
      *param_1 = param_2 - fVar1;
      if (*(char *)((int)fVar4 + 0x4d + (int)param_1) != '\0') {
        param_1[(int)fVar4 + 8] = param_1[(int)fVar4 + 0xd];
        return;
      }
    }
  }
  return;
}

