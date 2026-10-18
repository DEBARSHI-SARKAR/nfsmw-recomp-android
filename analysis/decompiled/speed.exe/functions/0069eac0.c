/* speed.exe 0069eac0 FUN_0069eac0; analysis pseudocode, not buildable source.
 * calls 0046f7c0 FUN_0046f7c0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0069eac0(int *param_1,float param_2,float param_3,float param_4,uint param_5,float param_6)

{
  float fVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    if ((param_3 < _DAT_008f8d18) && (_DAT_008933d4 < param_4)) {
      FUN_0046f7c0(&param_4,param_4);
      fVar1 = param_4 * _DAT_008ab698;
      param_4 = (float)(param_5 & 1);
      param_1[2] = (int)fVar1;
      iVar2 = FUN_007c4b80();
      *param_1 = iVar2;
      param_1[1] = DAT_008f8d1c;
      param_1[3] = 0;
    }
  }
  else {
    if (_DAT_008aac18 < param_3) {
      param_6 = param_6 * _DAT_008aabd8;
      if (param_6 < _DAT_00890968) {
        param_6 = -param_6;
      }
      if (_DAT_008f8d10 < param_6) goto LAB_0069eb33;
    }
    if (_DAT_008f8d0c <= param_4) {
      fVar1 = (float)param_1[1];
      param_1[3] = 0;
      param_1[1] = (int)(fVar1 - param_2);
      if (fVar1 - param_2 < _DAT_00890968) {
        *param_1 = *param_1 + -1;
        param_1[1] = DAT_008f8d1c;
        return;
      }
    }
    else {
      fVar1 = (float)param_1[3];
      param_1[3] = (int)(param_2 + fVar1);
      if (_DAT_008f8d14 < param_2 + fVar1) {
LAB_0069eb33:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        param_1[2] = 0x3f800000;
        return;
      }
    }
  }
  return;
}

