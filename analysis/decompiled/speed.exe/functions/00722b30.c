/* speed.exe 00722b30 FUN_00722b30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00722b30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x484)) {
    iVar2 = 0;
    do {
      *(undefined1 *)(iVar2 + 0x10 + *(int *)(param_1 + 0x488)) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 0x484));
  }
  return;
}

