/* speed.exe 007dd470 getSystemCP; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000007e GetACP
 * calls EXTERNAL:0000007f GetOEMCP
 */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_009bae84 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_009bae84 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_009bae84 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_009bae84 = 1;
    param_1 = DAT_009badb0;
  }
  return param_1;
}

