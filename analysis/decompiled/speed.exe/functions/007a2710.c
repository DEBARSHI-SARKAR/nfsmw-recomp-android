/* speed.exe 007a2710 FUN_007a2710; analysis pseudocode, not buildable source.
 * calls 0075bad0 FUN_0075bad0
 */

void __fastcall FUN_007a2710(int param_1)

{
  if ((*(char *)(param_1 + 0x620) != '\0') && (*(int *)(param_1 + 0x624) != 0)) {
    FUN_0075bad0(*(int *)(param_1 + 0x624));
  }
  if ((*(char *)(param_1 + 0x621) != '\0') && (*(int *)(param_1 + 0x628) != 0)) {
    FUN_0075bad0(*(int *)(param_1 + 0x628));
  }
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined1 *)(param_1 + 0x620) = 0;
  *(undefined1 *)(param_1 + 0x621) = 0;
  return;
}

