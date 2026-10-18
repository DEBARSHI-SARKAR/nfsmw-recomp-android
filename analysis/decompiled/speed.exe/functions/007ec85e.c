/* speed.exe 007ec85e FUN_007ec85e; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000048 QueryPerformanceFrequency
 */

undefined8 FUN_007ec85e(void)

{
  LARGE_INTEGER local_c;
  
  QueryPerformanceFrequency(&local_c);
  return CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
}

