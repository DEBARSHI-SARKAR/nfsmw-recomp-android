/* speed.exe 007fde8f FUN_007fde8f; analysis pseudocode, not buildable source.
 * calls 008066bb FUN_008066bb
 */

void FUN_007fde8f(void)

{
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  FUN_008066bb(&local_c,local_10,&local_8);
  if (local_8 != 0) {
    DAT_009c6a74 = FUN_00806a31;
    return;
  }
  DAT_009c6a74 = FUN_00806a02;
  if (local_c == 0) {
    DAT_009c6a74 = FUN_007fd03b;
  }
  return;
}

