/* speed.exe 0077d3b0 thunk_FUN_0077c740; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_0077c740(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,((*(int *)(param_1 + 0xc) - iVar1) / 0x30) * 0x30,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

