/* speed.exe 00860620 __validdrive; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000022 GetDriveTypeA
 */

/* Library Function - Single Match
    __validdrive
   
   Library: Visual Studio 2003 Debug */

int __cdecl __validdrive(uint param_1)

{
  int iVar1;
  UINT UVar2;
  char local_8 [4];
  
  if (param_1 == 0) {
    iVar1 = 1;
  }
  else {
    local_8[0] = (char)param_1 + '@';
    local_8[1] = 0x3a;
    local_8[2] = 0x5c;
    local_8[3] = 0;
    UVar2 = GetDriveTypeA(local_8);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}

