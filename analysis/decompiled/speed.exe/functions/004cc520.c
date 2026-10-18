/* speed.exe 004cc520 FUN_004cc520; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004cc520(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar2, iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + -4 + iVar2 * 4);
    iVar2 = iVar2 + -1;
    if (iVar1 != 0) {
      FUN_005d0370(iVar1,0x10,0);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),*(int *)(param_1 + 8) << 2,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

