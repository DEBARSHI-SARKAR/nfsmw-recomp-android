/* speed.exe 005af460 FUN_005af460; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005af460(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x88)) * 0x30;
  iVar1 = *(int *)(iVar2 + 0x18 + *(int *)(param_1 + 0x90));
  iVar2 = iVar2 + *(int *)(param_1 + 0x90);
  if (iVar1 != param_2) {
    if ((iVar1 == 2) && (*(int *)(iVar2 + 0x20) != 0)) {
      thunk_FUN_007c7250(*(int *)(iVar2 + 0x20));
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    *(int *)(iVar2 + 0x18) = param_2;
  }
  return;
}

