/* speed.exe 0084bcf0 FUN_0084bcf0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000067 DeleteCriticalSection
 */

void FUN_0084bcf0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_009c3718;
  }
  param_1[2] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}

