/* speed.exe 006d8510 FUN_006d8510; analysis pseudocode, not buildable source.
 * calls 006ca5f0 FUN_006ca5f0
 */

undefined4 __thiscall FUN_006d8510(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 1;
    break;
  case 4:
    uVar2 = 0;
    break;
  case 5:
    uVar2 = 1;
    break;
  case 6:
    uVar2 = 2;
    break;
  case 7:
    uVar2 = 2;
    break;
  case 8:
    uVar2 = 3;
    break;
  case 9:
    if (*(int *)(param_1 + 0x2220 + param_2 * 4) == 1) {
      return 1;
    }
    return 0;
  default:
    goto switchD_006d851d_default;
  }
  iVar1 = FUN_006ca5f0(param_2,uVar2);
  if (iVar1 != 0) {
    return 1;
  }
switchD_006d851d_default:
  return 0;
}

