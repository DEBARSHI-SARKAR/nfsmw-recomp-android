/* speed.exe 00463c70 FUN_00463c70; analysis pseudocode, not buildable source.
 */

void FUN_00463c70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18) + 1;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    *(int *)(param_1 + 0x18) = iVar2;
  }
  return;
}

