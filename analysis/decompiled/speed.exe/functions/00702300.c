/* speed.exe 00702300 FUN_00702300; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00702300(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

