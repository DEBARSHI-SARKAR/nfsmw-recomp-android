/* speed.exe 004b6d40 FUN_004b6d40; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_004b6d40(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}

