/* speed.exe 00835600 FUN_00835600; analysis pseudocode, not buildable source.
 * calls 008358c4 FUN_008358c4
 */

void FUN_00835600(undefined4 *param_1)

{
  if (((undefined4 *)0x9c3217 < param_1) && (param_1 < &DAT_009c3598)) {
    LOCK();
    (&DAT_009c3598)[(int)(param_1 + -0x270c86) / 0x1c] = 0;
    UNLOCK();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_008358c4(1);
  }
  return;
}

