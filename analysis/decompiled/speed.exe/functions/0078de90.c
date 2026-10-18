/* speed.exe 0078de90 FUN_0078de90; analysis pseudocode, not buildable source.
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_0078de90(int param_1)

{
  if (*(int *)(param_1 + 0x73c) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x73c));
    *(undefined4 *)(param_1 + 0x73c) = 0;
  }
  return;
}

