/* speed.exe 00694e60 FUN_00694e60; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00694e60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}

