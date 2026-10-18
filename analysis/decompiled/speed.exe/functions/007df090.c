/* speed.exe 007df090 ___wctomb_mt; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls 007cb270 FUN_007cb270
 */

/* Library Function - Single Match
    ___wctomb_mt
   
   Library: Visual Studio 2003 Debug */

int ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3)

{
  int iVar1;
  undefined4 *puVar2;
  BOOL local_8;
  
  if (param_2 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x14) == 0) {
    if ((ushort)param_3 < 0x100) {
      *param_2 = (CHAR)param_3;
      iVar1 = 1;
    }
    else {
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0x2a;
      iVar1 = -1;
    }
  }
  else {
    local_8 = 0;
    iVar1 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,&param_3,1,param_2,*(int *)(param_1 + 0x28)
                                ,(LPCSTR)0x0,&local_8);
    if ((iVar1 == 0) || (local_8 != 0)) {
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0x2a;
      iVar1 = -1;
    }
  }
  return iVar1;
}

