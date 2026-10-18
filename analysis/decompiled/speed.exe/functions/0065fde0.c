/* speed.exe 0065fde0 FUN_0065fde0; analysis pseudocode, not buildable source.
 * calls 0065f640 FUN_0065f640
 * calls 0065ad80 FUN_0065ad80
 * calls 00463ca0 FUN_00463ca0
 * calls 0065f680 FUN_0065f680
 * calls 0065e760 FUN_0065e760
 */

void __thiscall FUN_0065fde0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[4] - param_2;
  *param_1 = param_2;
  if (iVar2 < 0x4001) {
    if (iVar2 < 1) {
      return;
    }
  }
  else {
    iVar2 = 0x4000;
  }
  iVar1 = FUN_0065f680(param_1 + 5,1,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) = *param_1, -1 < *(int *)(iVar1 + 0xc))) {
    FUN_0065e760(param_1 + 0x46,iVar2,0,0);
  }
  FUN_0065f640(iVar1);
  if (iVar1 != 0) {
    if (0 < *(int *)(iVar1 + 0x20)) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      param_1[3] = *param_1;
      param_1[2] = *param_1 + iVar2;
      return;
    }
    FUN_0065ad80();
    FUN_00463ca0(DAT_00925914,iVar1);
  }
  param_1[3] = *param_1;
  param_1[2] = *param_1 + iVar2;
  return;
}

