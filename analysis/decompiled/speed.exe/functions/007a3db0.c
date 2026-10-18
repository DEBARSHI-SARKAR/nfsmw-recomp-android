/* speed.exe 007a3db0 FUN_007a3db0; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 */

void __fastcall FUN_007a3db0(int param_1)

{
  if ((-1 < *(int *)(param_1 + 0x1a8)) && (*(int *)(param_1 + 0x1a8) < 2)) {
    FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    return;
  }
  FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  return;
}

