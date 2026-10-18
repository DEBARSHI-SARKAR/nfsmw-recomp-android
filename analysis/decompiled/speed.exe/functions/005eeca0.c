/* speed.exe 005eeca0 FUN_005eeca0; analysis pseudocode, not buildable source.
 * calls 005ee0f0 FUN_005ee0f0
 */

undefined4 __fastcall FUN_005eeca0(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_005ee0f0();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return 0;
}

