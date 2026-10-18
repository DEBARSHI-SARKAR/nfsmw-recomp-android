/* speed.exe 0084bcc0 FUN_0084bcc0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000080 InitializeCriticalSection
 */

void FUN_0084bcc0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_009c3718;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}

