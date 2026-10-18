/* speed.exe 004b68c0 FUN_004b68c0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_004b68c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
}

