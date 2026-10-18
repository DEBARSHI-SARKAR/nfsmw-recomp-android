/* speed.exe 007ec7f9 FUN_007ec7f9; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 */

undefined8 FUN_007ec7f9(void)

{
  LARGE_INTEGER local_c;
  
  local_c.s.LowPart = 0;
  QueryPerformanceCounter(&local_c);
  return CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
}

