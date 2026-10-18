/* speed.exe 004d5a10 FUN_004d5a10; analysis pseudocode, not buildable source.
 */

uint FUN_004d5a10(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  param_2 = 4 - param_2;
  if (param_2 < 1) {
    param_2 = 0;
  }
  else if (4 < param_2) {
    param_2 = 4;
  }
  if (param_1 < 1) {
    param_1 = 0;
  }
  else if (4 < param_1) {
    param_1 = 4;
  }
  uVar2 = 0;
  if (param_2 < 3) {
    if (param_2 < 1) {
      param_2 = param_2 + param_1;
      if (2 < param_2) {
        uVar2 = 2;
        goto LAB_004d5a72;
      }
      bVar3 = SBORROW4(param_2,1);
      param_2 = param_2 + -1;
    }
    else {
      bVar3 = SBORROW4(param_1 + param_2,3);
      param_2 = param_1 + param_2 + -3;
    }
    if (bVar3 == param_2 < 0) {
      uVar2 = 1;
    }
  }
LAB_004d5a72:
  uVar2 = uVar2 & (uVar2 == 0) - 1;
  uVar1 = param_3 - 1U;
  if ((int)uVar2 <= (int)(param_3 - 1U)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

