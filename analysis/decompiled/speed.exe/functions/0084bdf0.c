/* speed.exe 0084bdf0 FUN_0084bdf0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 */

void FUN_0084bdf0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_009c3718;
  }
  if (1 < (uint)param_1[1]) {
    param_1[1] = param_1[1] - 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}

