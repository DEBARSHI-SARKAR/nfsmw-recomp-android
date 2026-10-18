/* speed.exe 00518840 FUN_00518840; analysis pseudocode, not buildable source.
 * calls 0064c9b0 FUN_0064c9b0
 * calls 007f3c74 FUN_007f3c74
 */

void __fastcall FUN_00518840(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined2 *)(param_1 + 0x48) = 0;
  iVar1 = FUN_0064c9b0();
  if (iVar1 == 0) {
    FUN_007f3c74(0xffffffff);
  }
  return;
}

