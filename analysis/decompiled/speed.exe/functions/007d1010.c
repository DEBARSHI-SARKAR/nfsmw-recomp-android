/* speed.exe 007d1010 FUN_007d1010; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 */

void FUN_007d1010(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00906990 + param_1 * 8));
  return;
}

