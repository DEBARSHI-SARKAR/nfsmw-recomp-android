/* speed.exe 007bdae0 FUN_007bdae0; analysis pseudocode, not buildable source.
 * calls 007b7dd0 FUN_007b7dd0
 */

void __thiscall FUN_007bdae0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x6f];
  if (param_2 == -1) {
    iVar2 = iVar1 + -1;
    if (iVar1 + -1 < param_1[0x70]) {
      iVar2 = param_1[0x71];
    }
  }
  else {
    iVar2 = iVar1;
    if ((param_2 == 1) && (iVar2 = iVar1 + 1, param_1[0x71] < iVar2)) {
      iVar2 = param_1[0x70];
    }
  }
  if (iVar2 != iVar1) {
    param_1[0x6f] = iVar2;
    if (param_1[0xe] != 0) {
      uVar3 = (**(code **)(param_1[0xb] + 0x24))(param_1[0xe]);
      FUN_007b7dd0(uVar3);
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    FUN_007b7dd0(0);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

