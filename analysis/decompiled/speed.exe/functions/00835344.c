/* speed.exe 00835344 FUN_00835344; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000006 CloseHandle
 */

void __fastcall FUN_00835344(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}

