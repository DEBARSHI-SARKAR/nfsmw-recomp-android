/* speed.exe 0048f700 FUN_0048f700; analysis pseudocode, not buildable source.
 * calls 0048f320 FUN_0048f320
 */

int __fastcall FUN_0048f700(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0048f320();
  }
  uVar2 = (uint)*(ushort *)(iVar1 + 8);
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + uVar2 * 4) + 0x38))();
  } while (iVar1 == 0);
  return iVar1;
}

