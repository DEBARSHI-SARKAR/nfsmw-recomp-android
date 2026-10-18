/* speed.exe 00834de4 FUN_00834de4; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000006 CloseHandle
 */

void __fastcall FUN_00834de4(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}

