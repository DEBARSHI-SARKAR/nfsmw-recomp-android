/* speed.exe 00473a40 FUN_00473a40; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 */

void __thiscall FUN_00473a40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 == 0) {
    if (iVar1 != 0) goto LAB_00473a66;
  }
  else if ((iVar1 == 0) || (*(int *)(param_2 + 4) != *(int *)(iVar1 + 4))) goto LAB_00473a66;
  *(undefined4 *)(param_1 + 0x20) = 0;
LAB_00473a66:
  iVar1 = *(int *)(param_1 + 0x28);
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
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_007869c0(0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x94) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

