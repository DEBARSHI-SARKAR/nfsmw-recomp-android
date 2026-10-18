/* speed.exe 007f8267 FUN_007f8267; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000e9 timeGetTime
 */

DWORD * __fastcall FUN_007f8267(DWORD *param_1)

{
  DWORD DVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  DVar1 = timeGetTime();
  *param_1 = DVar1;
  param_1[4] = 0x1000;
  return param_1;
}

