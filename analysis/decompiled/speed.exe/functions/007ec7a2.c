/* speed.exe 007ec7a2 FUN_007ec7a2; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000da RegQueryValueExA
 * calls EXTERNAL:000000db RegOpenKeyA
 * calls EXTERNAL:000000d8 RegCloseKey
 */

undefined4 FUN_007ec7a2(void)

{
  LSTATUS LVar1;
  DWORD local_14 [2];
  undefined4 local_c;
  HKEY local_8;
  
  local_c = 0;
  local_14[0] = 4;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",&local_8
                     );
  if (LVar1 == 0) {
    local_14[1] = 4;
    RegQueryValueExA(local_8,"~MHz",(LPDWORD)0x0,local_14,(LPBYTE)&local_c,local_14 + 1);
    RegCloseKey(local_8);
  }
  return local_c;
}

