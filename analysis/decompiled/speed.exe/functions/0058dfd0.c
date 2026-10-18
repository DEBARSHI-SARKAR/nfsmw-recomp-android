/* speed.exe 0058dfd0 FUN_0058dfd0; analysis pseudocode, not buildable source.
 * calls 0058de40 FUN_0058de40
 * calls 00460c50 FUN_00460c50
 */

void __fastcall FUN_0058dfd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
    **(undefined1 **)(param_1 + 0x318) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = FUN_00460c50(*(undefined4 *)(param_1 + 0x318));
  if ((0 < iVar1) && (0 < *(int *)(param_1 + 0x30))) {
    for (iVar2 = *(int *)(param_1 + 0x30) + -1; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      *(undefined1 *)(*(int *)(param_1 + 0x318) + iVar2) =
           *(undefined1 *)(*(int *)(param_1 + 0x318) + 1 + iVar2);
    }
    *(undefined1 *)(iVar1 + -1 + *(int *)(param_1 + 0x318)) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  FUN_0058de40();
  return;
}

