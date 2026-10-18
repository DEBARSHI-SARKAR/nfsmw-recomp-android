/* speed.exe 007fdd95 FUN_007fdd95; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c4b80 FUN_007c4b80
 * calls EXTERNAL:000000e9 timeGetTime
 * calls EXTERNAL:00000048 QueryPerformanceFrequency
 * calls 007fdd78 FUN_007fdd78
 */

uint FUN_007fdd95(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  LARGE_INTEGER local_24;
  LARGE_INTEGER local_1c;
  LARGE_INTEGER local_14;
  int local_c;
  undefined4 local_8;
  
  iVar6 = 0;
  BVar1 = QueryPerformanceFrequency(&local_14);
  if (BVar1 != 0) {
    QueryPerformanceCounter(&local_24);
    FUN_007fdd78(&local_c);
    uVar2 = timeGetTime();
    uVar3 = uVar2 + 5;
    while (uVar2 < uVar3) {
      uVar2 = timeGetTime();
    }
    QueryPerformanceCounter(&local_1c);
    FUN_007fdd78(&local_8);
    local_c = local_1c.s.LowPart - local_24._0_4_;
    iVar6 = FUN_007c4b80();
  }
  uVar2 = (((iVar6 * 3 + 100U) / 200) * 200) / 3;
  uVar3 = ((iVar6 + 0x19U) / 0x32) * 0x32;
  uVar4 = (int)(uVar3 - iVar6) >> 0x1f;
  uVar5 = (int)(uVar2 - iVar6) >> 0x1f;
  if (((uVar2 - iVar6 ^ uVar5) - uVar5 <= (uVar3 - iVar6 ^ uVar4) - uVar4) &&
     (uVar3 = uVar2, uVar2 == 0x29a)) {
    uVar3 = 0x29b;
  }
  return uVar3;
}

