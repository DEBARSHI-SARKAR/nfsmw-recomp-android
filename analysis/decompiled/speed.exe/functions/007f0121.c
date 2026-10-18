/* speed.exe 007f0121 FUN_007f0121; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000042 GetDiskFreeSpaceExA
 */

ULARGE_INTEGER __fastcall FUN_007f0121(int param_1)

{
  BOOL BVar1;
  ULARGE_INTEGER local_14;
  ULARGE_INTEGER local_c;
  
  BVar1 = GetDiskFreeSpaceExA((LPCSTR)(param_1 + 4),&local_c,&local_14,(PULARGE_INTEGER)0x0);
  if (BVar1 != 0) {
    return (ULARGE_INTEGER)local_c.QuadPart;
  }
  return (ULARGE_INTEGER)0;
}

