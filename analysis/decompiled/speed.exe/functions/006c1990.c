/* speed.exe 006c1990 FUN_006c1990; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000023 GlobalMemoryStatusEx
 * calls 006cb190 FUN_006cb190
 */

void FUN_006c1990(void)

{
  bool bVar1;
  _MEMORYSTATUSEX local_40;
  
  DAT_0090181c = 0;
  DAT_009017bc = 0;
  DAT_009017c0 = 1;
  DAT_009017d0 = 1;
  DAT_009017f8 = 0;
  DAT_00901810 = 1;
  DAT_009017dc = 1;
  DAT_009017e0 = 1;
  DAT_009017fc = 0;
  DAT_00901804 = 0;
  DAT_00901808 = 0;
  DAT_00901824 = 0;
  DAT_00901828 = 0;
  DAT_00901830 = 0;
  bVar1 = 1 < DAT_00982c00;
  if (bVar1) {
    DAT_009017c0 = 2;
  }
  DAT_009017f4 = (uint)bVar1;
  DAT_009017c4 = (uint)bVar1;
  bVar1 = 2 < DAT_00982c00;
  if (bVar1) {
    DAT_009017f4 = 2;
  }
  DAT_00901818 = (uint)bVar1;
  DAT_0090180c = 1;
  DAT_009017f0 = (uint)bVar1;
  DAT_009017ec = 1;
  DAT_009017e4 = 1;
  DAT_009017d8 = (uint)bVar1;
  DAT_009017d4 = (uint)bVar1;
  DAT_009017b8 = (uint)bVar1;
  bVar1 = 3 < DAT_00982c00;
  if (bVar1) {
    DAT_00901810 = 1;
    DAT_00901800 = 1;
    DAT_009017bc = 1;
    FUN_006cb190(DAT_0093d898,DAT_0093d89c);
  }
  DAT_00901830 = (uint)bVar1;
  DAT_00901828 = (uint)bVar1;
  DAT_0090181c = (uint)bVar1;
  DAT_00901808 = (uint)bVar1;
  DAT_009017fc = (uint)bVar1;
  DAT_009017e0 = 1;
  DAT_009017dc = 1;
  if (3 < DAT_00982c00) {
    DAT_009017bc = 2;
    DAT_009017d4 = 2;
    DAT_009017f8 = 1;
  }
  if (DAT_009018b0 != 0) {
    DAT_00901828 = 1;
  }
  DAT_00901800 = 0;
  DAT_009017f0 = 0;
  DAT_00901804 = 0;
  local_40.dwLength = 0x40;
  GlobalMemoryStatusEx(&local_40);
  if ((local_40.ullTotalPhys._4_4_ == 0) && (local_40.ullTotalPhys._0_4_ < 0x19000000)) {
    DAT_009017f4 = 0;
    DAT_009017f8 = 0;
  }
  return;
}

