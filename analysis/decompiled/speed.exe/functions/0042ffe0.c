/* speed.exe 0042ffe0 FUN_0042ffe0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0042ffe0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,((*(int *)(param_1 + 0xc) - iVar1) / 0x1c) * 0x1c,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

