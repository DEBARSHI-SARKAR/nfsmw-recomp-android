/* speed.exe 006068d0 FUN_006068d0; analysis pseudocode, not buildable source.
 */

undefined * __fastcall FUN_006068d0(int param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX + -0xfa;
  if ((-1 < iVar1) && (*(int *)(*(int *)(param_1 + 8) + iVar1 * 8) == 4)) {
    return (undefined *)(*(int *)(*(int *)(param_1 + 8) + iVar1 * 8 + 4) + 0x10);
  }
  return &DAT_008a3ed4;
}

