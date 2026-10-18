/* speed.exe 0084de50 FUN_0084de50; analysis pseudocode, not buildable source.
 * calls 008620e6 lineClose
 * calls 008582d0 thunk_FUN_008581e0
 */

undefined4 FUN_0084de50(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x94) == 5) || (*(int *)(param_1 + 0x94) == 8)) {
    thunk_FUN_008581e0(*(undefined4 *)(param_1 + 0x7c));
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 8)) {
    lineClose(*(HLINE *)(param_1 + 0x8c));
  }
  return 0;
}

