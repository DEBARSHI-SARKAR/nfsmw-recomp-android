/* speed.exe 006cc1f0 FUN_006cc1f0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_006cc1f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

