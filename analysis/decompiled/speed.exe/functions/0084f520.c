/* speed.exe 0084f520 FUN_0084f520; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 */

undefined4 FUN_0084f520(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0084af40(*(int *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  return 0;
}

