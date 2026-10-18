/* speed.exe 007e63d0 ___getlocaleinfo; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007e7090 ___crtGetLocaleInfoW
 * calls EXTERNAL:0000004a GetLastError
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 007e7270 ___crtGetLocaleInfoA
 * calls 007ca7e0 _isdigit
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2003 Debug */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  DWORD DVar3;
  LPSTR _LpLCData;
  int iVar4;
  int local_a4;
  size_t local_98;
  char local_94 [132];
  undefined4 local_10;
  int *local_c;
  char *local_8;
  
  local_10 = DAT_00906980;
  if (_Locale != (_locale_t)0x1) {
    if (_Locale != (_locale_t)0x0) {
      return -1;
    }
    iVar4 = ___crtGetLocaleInfoW(_Lc_type,_LocaleName,&DAT_009baf50,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)_FieldType = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        bVar1 = (&DAT_009baf50)[local_a4 * 2];
        iVar4 = _isdigit((uint)bVar1);
        if (iVar4 == 0) break;
        *(byte *)_FieldType = *(char *)_FieldType * '\n' + -0x30 + bVar1;
        local_a4 = local_a4 + 1;
      }
      return 0;
    }
    return -1;
  }
  local_c = (int *)_FieldType;
  local_8 = local_94;
  bVar2 = false;
  local_98 = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)local_8,(LPSTR)0x80,0);
  if (local_98 == 0) {
    DVar3 = GetLastError();
    if (((DVar3 != 0x7a) ||
        (_LpLCData = (LPSTR)___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,0,(LPSTR)0x0,0),
        _LpLCData == (LPSTR)0x0)) ||
       (local_8 = (char *)__malloc_dbg(_LpLCData,2,"inithelp.c",0x58), local_8 == (char *)0x0))
    goto LAB_007e6534;
    bVar2 = true;
    local_98 = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)local_8,_LpLCData,0);
    if (local_98 == 0) goto LAB_007e6534;
  }
  iVar4 = __malloc_dbg(local_98,2,"inithelp.c",99);
  *local_c = iVar4;
  if (*local_c != 0) {
    _strncpy((char *)*local_c,local_8,local_98);
    if (bVar2) {
      __free_dbg(local_8,2);
    }
    return 0;
  }
LAB_007e6534:
  if (bVar2) {
    __free_dbg(local_8,2);
  }
  return -1;
}

