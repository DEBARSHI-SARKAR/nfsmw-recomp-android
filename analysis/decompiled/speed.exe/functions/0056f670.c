/* speed.exe 0056f670 FUN_0056f670; analysis pseudocode, not buildable source.
 */

undefined1 __fastcall FUN_0056f670(int param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    if (*(char *)(param_1 + 3) != '\0') {
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + -1;
    }
    if ((*(char *)(param_1 + 3) == '\0') && (*(char *)(param_1 + 2) != '\x04')) {
      *(undefined1 *)(param_1 + 2) = 4;
      return 1;
    }
  }
  return 0;
}

