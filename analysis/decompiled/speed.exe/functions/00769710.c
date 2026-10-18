/* speed.exe 00769710 FUN_00769710; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00769710(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
}

