/* speed.exe 00821a5d FUN_00821a5d; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003e CreateMutexA
 */

void FUN_00821a5d(void)

{
  DAT_009c230c = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return;
}

