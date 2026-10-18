/* speed.exe 0046e410 FUN_0046e410; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0046e410(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[0xc];
  switch(param_1[0x11]) {
  case 0:
    uVar2 = ((int)uVar1 < 1) - 1 & uVar1;
    if ((int)(param_1[5] - 1U) < (int)uVar2) {
      uVar2 = param_1[5] - 1U;
    }
    if (uVar1 == uVar2) {
      return *param_1 + uVar1 * 0x14;
    }
    break;
  case 1:
    uVar2 = ((int)uVar1 < 1) - 1 & uVar1;
    if ((int)(param_1[6] - 1U) < (int)uVar2) {
      uVar2 = param_1[6] - 1U;
    }
    if (uVar1 == uVar2) {
      return param_1[1] + uVar1 * 0x14;
    }
    break;
  case 2:
    uVar2 = ((int)uVar1 < 1) - 1 & uVar1;
    if ((int)(param_1[7] - 1U) < (int)uVar2) {
      uVar2 = param_1[7] - 1U;
    }
    if (uVar1 == uVar2) {
      return param_1[2] + uVar1 * 0x14;
    }
    break;
  case 3:
    uVar2 = ((int)uVar1 < 1) - 1 & uVar1;
    if ((int)(param_1[8] - 1U) < (int)uVar2) {
      uVar2 = param_1[8] - 1U;
    }
    if (uVar1 == uVar2) {
      return param_1[3] + uVar1 * 0x14;
    }
  }
  return 0;
}

