/* speed.exe 006ca3d0 FUN_006ca3d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004c OutputDebugStringA
 * calls EXTERNAL:000000b7 wvsprintfA
 */

void FUN_006ca3d0(LPCSTR param_1)

{
  CHAR local_100 [256];
  
  wvsprintfA(local_100,param_1,&stack0x00000008);
  OutputDebugStringA(local_100);
  OutputDebugStringA("\r\n");
  return;
}

