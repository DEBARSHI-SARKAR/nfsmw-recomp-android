/* speed.exe 00596190 FUN_00596190; analysis pseudocode, not buildable source.
 * calls 00595f80 FUN_00595f80
 * calls 004ae8f0 FUN_004ae8f0
 */

void __fastcall FUN_00596190(int param_1)

{
  *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) ^ 1;
  if (*(int *)(param_1 + 0x328) == 0) {
    FUN_004ae8f0(0x2e);
    FUN_00595f80();
    return;
  }
  *(undefined1 *)(param_1 + 0x3b) = 0;
  FUN_00595f80();
  return;
}

