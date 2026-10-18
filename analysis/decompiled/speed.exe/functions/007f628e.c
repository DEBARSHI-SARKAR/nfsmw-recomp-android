/* speed.exe 007f628e FUN_007f628e; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f628e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if ((iVar1 != 0x100) && (iVar1 != 2)) {
    *(int *)(param_1 + 0x108) = 0;
  }
  return;
}

