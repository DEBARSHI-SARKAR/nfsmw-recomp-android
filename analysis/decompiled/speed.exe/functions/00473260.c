/* speed.exe 00473260 FUN_00473260; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 */

void __thiscall FUN_00473260(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (param_2 == 0) {
    if (iVar1 != 0) goto LAB_00473286;
  }
  else if ((iVar1 == 0) || (*(int *)(param_2 + 4) != *(int *)(iVar1 + 4))) goto LAB_00473286;
  *(undefined4 *)(param_1 + 0x24) = 0;
LAB_00473286:
  iVar1 = *(int *)(param_1 + 0x2c);
  if (param_2 == 0) {
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_2 + 4) != *(int *)(iVar1 + 4)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_007869c0(0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x94) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

