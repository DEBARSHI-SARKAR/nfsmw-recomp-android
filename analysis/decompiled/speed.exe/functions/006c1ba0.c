/* speed.exe 006c1ba0 FUN_006c1ba0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000da RegQueryValueExA
 */

void FUN_006c1ba0(undefined4 *param_1,LPCSTR param_2,LPBYTE param_3)

{
  DWORD local_8 [2];
  
  local_8[1] = 4;
  local_8[0] = 4;
  RegQueryValueExA((HKEY)*param_1,param_2,(LPDWORD)0x0,local_8 + 1,param_3,local_8);
  return;
}

