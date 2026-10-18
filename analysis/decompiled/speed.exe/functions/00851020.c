/* speed.exe 00851020 FUN_00851020; analysis pseudocode, not buildable source.
 * calls 0084fda0 FUN_0084fda0
 * calls 0084af40 FUN_0084af40
 */

undefined4 FUN_00851020(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 3) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0084fda0();
    FUN_0084af40(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 1;
  return 0;
}

