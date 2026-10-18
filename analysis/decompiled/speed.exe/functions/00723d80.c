/* speed.exe 00723d80 FUN_00723d80; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00723d80(int param_1)

{
  if (*(int *)(&DAT_009a3bb0 + param_1 * 4) != 0) {
    return *(undefined4 *)(*(int *)(&DAT_009a3bb0 + param_1 * 4) + 4);
  }
  return 0;
}

