/* speed.exe 005dc970 FUN_005dc970; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005dc970(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(1);
  }
  uVar1 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x10);
  do {
    if ((int *)*puVar3 == param_2) {
      if (uVar1 < *(int *)(param_1 + 4) - 1U) {
        *(undefined4 *)(param_1 + 0x10 + uVar1 * 4) =
             *(undefined4 *)(param_1 + 0xc + *(int *)(param_1 + 4) * 4);
      }
      iVar2 = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 4) = iVar2;
      *(undefined4 *)(param_1 + 0x10 + iVar2 * 4) = 0;
      return;
    }
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar1 < 4);
  return;
}

