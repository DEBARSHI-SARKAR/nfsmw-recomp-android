/* speed.exe 0049cb10 FUN_0049cb10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049cb10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 0xc))(param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  return;
}

