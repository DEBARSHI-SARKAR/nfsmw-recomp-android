/* speed.exe 00652fb0 FUN_00652fb0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00652fb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10) + iVar2;
      if (*(char *)(iVar1 + 0x31) == '\0') {
        *(undefined1 *)(iVar1 + 0x30) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x34;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  return;
}

