/* speed.exe 006530b0 FUN_006530b0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006530b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (uVar2 = 0, *(int *)(param_1 + 0x14) != 0)) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x28 + iVar1) == param_2) {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1 + 0x30) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x34;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  return;
}

