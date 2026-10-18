/* speed.exe 00654b80 FUN_00654b80; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00654b80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}

