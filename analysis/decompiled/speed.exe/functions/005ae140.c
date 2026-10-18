/* speed.exe 005ae140 FUN_005ae140; analysis pseudocode, not buildable source.
 * calls 005adc30 FUN_005adc30
 */

undefined4 __thiscall
FUN_005ae140(int param_1,int param_2,uint *param_3,uint *param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x68);
  if ((uVar3 & 8) != 0) {
    iVar2 = *param_3 + param_2;
    if (iVar2 < 0) {
      if (param_5 < 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_5 - -iVar2 % param_5;
      }
    }
    else {
      uVar3 = iVar2 % param_5;
    }
    *param_3 = uVar3;
    param_2 = *param_4 + param_2;
    if (-1 < param_2) {
      *param_4 = param_2 % param_5;
      return 1;
    }
    if (1 < param_5) {
      *param_4 = param_5 - -param_2 % param_5;
      return 1;
    }
    *param_4 = 0;
    return 1;
  }
  if (((uVar3 & 4) == 0) || ((uVar3 & 2) == 0)) {
    uVar3 = *param_4;
    iVar2 = uVar3 + param_2;
    if (iVar2 < 0) {
      if (param_5 < 2) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_5 - -iVar2 % param_5;
      }
    }
    else {
      uVar4 = iVar2 % param_5;
    }
    *param_4 = uVar4;
    if (param_2 < 0) {
      if (*param_3 == uVar3) {
        *param_3 = uVar4;
        return 1;
      }
    }
    else {
      uVar1 = *param_3;
      if (uVar1 != uVar3) {
        if (uVar1 < uVar4) {
          uVar4 = uVar4 - uVar1;
        }
        else {
          uVar4 = (uVar4 - uVar1) + param_5;
        }
        if (param_6 <= uVar4) {
          uVar3 = FUN_005adc30(uVar1 + param_2,param_5);
          *param_3 = uVar3;
          return 1;
        }
      }
    }
    return 0;
  }
  param_2 = *param_3 + param_2;
  if (-1 < param_2) {
    *param_3 = param_2 % param_5;
    *param_4 = param_2 % param_5;
    return 1;
  }
  if (1 < param_5) {
    uVar3 = param_5 - -param_2 % param_5;
    *param_3 = uVar3;
    *param_4 = uVar3;
    return 1;
  }
  *param_3 = 0;
  *param_4 = 0;
  return 1;
}

