/* speed.exe 006df9c0 FUN_006df9c0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000020 GetVersionExA
 * calls 006d2100 FUN_006d2100
 * calls 006df8f0 FUN_006df8f0
 * calls 006c1f10 FUN_006c1f10
 */

void FUN_006df9c0(void)

{
  uint uVar1;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  DAT_00982c40 = local_94.dwMajorVersion != 4;
  if (DAT_00982bfc != 0) {
    DAT_00982bfc = 1;
    return;
  }
  (**(code **)(*DAT_00982bdc + 0x1c))(DAT_00982bdc,&DAT_0093d918);
  FUN_006d2100();
  if (DAT_00901820 == 1) {
    FUN_006df8f0();
    FUN_006c1f10();
  }
  if (DAT_0093d9b8 != 0xffffffff) {
    uVar1 = 0;
    if (DAT_0093d9b8 != 0) {
      do {
        (**(code **)(*DAT_00982bdc + 0xd4))(DAT_00982bdc,uVar1,0);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_0093d9b8);
    }
    DAT_00982bfc = 1;
    return;
  }
  DAT_00982bfc = 1;
  return;
}

