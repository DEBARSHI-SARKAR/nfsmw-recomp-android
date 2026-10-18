/* speed.exe 006c2760 FUN_006c2760; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000020 GetVersionExA
 */

undefined4 FUN_006c2760(void)

{
  BOOL BVar1;
  int iVar2;
  _OSVERSIONINFOA *p_Var3;
  _OSVERSIONINFOA local_a8;
  
  p_Var3 = &local_a8;
  for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOA *)&p_Var3->dwMajorVersion;
  }
  local_a8.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_a8);
  if (BVar1 == 0) {
    local_a8.dwOSVersionInfoSize = 0x94;
    BVar1 = GetVersionExA(&local_a8);
    if (BVar1 == 0) {
      return 0;
    }
  }
  if (local_a8.dwPlatformId != 1) {
    return 0;
  }
  return 1;
}

