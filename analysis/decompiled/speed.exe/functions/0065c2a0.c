/* speed.exe 0065c2a0 FUN_0065c2a0; analysis pseudocode, not buildable source.
 * calls 006466b0 FUN_006466b0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0065c2a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar1,0x28c,0);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

