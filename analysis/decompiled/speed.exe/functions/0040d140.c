/* speed.exe 0040d140 FUN_0040d140; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0040d140(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

