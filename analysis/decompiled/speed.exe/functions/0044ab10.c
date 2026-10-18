/* speed.exe 0044ab10 FUN_0044ab10; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 0049ff90 FUN_0049ff90
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00491360 FUN_00491360
 * calls 00652ad0 _malloc
 */

undefined4 __thiscall FUN_0044ab10(int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  if (param_1[1] != 0) {
    thunk_FUN_007c7250(param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  if (param_1[3] != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1[3],0x40);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  *param_1 = param_2;
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 8);
  iVar3 = iVar2 * 0xc;
  param_1[2] = iVar3;
  pvVar1 = _malloc(iVar2 * 0x30);
  param_1[1] = (int)pvVar1;
  iVar2 = 0;
  if (3 < iVar3) {
    do {
      *(undefined4 *)(param_1[1] + iVar2 * 4) = 0;
      *(undefined4 *)(param_1[1] + 4 + iVar2 * 4) = 0;
      *(undefined4 *)(param_1[1] + 8 + iVar2 * 4) = 0;
      *(undefined4 *)(param_1[1] + 0xc + iVar2 * 4) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar2 < iVar3 + -3);
  }
  for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
    *(undefined4 *)(param_1[1] + iVar2 * 4) = 0;
  }
  if (param_1[1] != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 8);
    param_1[4] = iVar2;
    iVar2 = (*(code *)PTR_FUN_008ee4d0)(iVar2 << 6,0);
    param_1[3] = iVar2;
    if (iVar2 != 0) {
      FUN_0049ff90(param_1[1],0);
      return 1;
    }
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
    thunk_FUN_007c7250(param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  if (param_1[3] != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1[3],0x40);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  return 0;
}

