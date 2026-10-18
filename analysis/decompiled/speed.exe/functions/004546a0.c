/* speed.exe 004546a0 FUN_004546a0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_004546a0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10), iVar1 != 0))
  {
    return *(undefined4 *)(iVar1 + 0x20);
  }
  return 0;
}

