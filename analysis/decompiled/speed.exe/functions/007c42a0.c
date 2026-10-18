/* speed.exe 007c42a0 check_managed_app; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000b GetModuleHandleA
 */

/* Library Function - Single Match
    _check_managed_app
   
   Library: Visual Studio 2003 Debug */

bool __cdecl check_managed_app(void)

{
  HMODULE pHVar1;
  int *piVar2;
  bool bVar3;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if ((short)pHVar1->unused == 0x5a4d) {
    piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused);
    if (*piVar2 == 0x4550) {
      if ((short)piVar2[6] == 0x10b) {
        if ((uint)piVar2[0x1d] < 0xf) {
          bVar3 = false;
        }
        else {
          bVar3 = piVar2[0x3a] != 0;
        }
      }
      else if ((short)piVar2[6] == 0x20b) {
        if ((uint)piVar2[0x21] < 0xf) {
          bVar3 = false;
        }
        else {
          bVar3 = piVar2[0x3e] != 0;
        }
      }
      else {
        bVar3 = false;
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

