/* speed.exe 0045ce40 FUN_0045ce40; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c66a0 __allshr
 */

void FUN_0045ce40(void)

{
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  __allshr();
  return;
}

