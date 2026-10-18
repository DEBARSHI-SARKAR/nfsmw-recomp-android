/* speed.exe 007661a0 FUN_007661a0; analysis pseudocode, not buildable source.
 */

undefined1 FUN_007661a0(int param_1)

{
  if (*(char *)(param_1 + 10) < '\0') {
    if (*(short *)(param_1 + 6) != -1) {
      return *(undefined1 *)(DAT_009b38c8 + 4 + *(short *)(param_1 + 6) * 8);
    }
  }
  return 0xff;
}

