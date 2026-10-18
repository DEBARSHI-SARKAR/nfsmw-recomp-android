/* speed.exe 007dc0c0 __tzset_lk; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls EXTERNAL:0000005a GetTimeZoneInformation
 * calls 007dc344 FUN_007dc344
 * calls 007dc34f FUN_007dc34f
 * calls 007d0fd0 __lock
 * calls 007e5ac0 __getenv_lk
 * calls 007c514a __local_unwind2
 * calls 007d1120 _strcmp
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    __tzset_lk
   
   Library: Visual Studio 2003 Debug */

void __tzset_lk(void)

{
  char *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int local_24;
  UINT local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd7c8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  __lock(7);
  local_8 = 0;
  local_20 = DAT_009badb0;
  DAT_009bae64 = 0;
  DAT_00907154 = 0xffffffff;
  DAT_00907148 = 0xffffffff;
  _Str1 = (char *)__getenv_lk(&DAT_008bd7c4);
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_009bae68 != (char *)0x0) {
      __free_dbg(DAT_009bae68,2);
      DAT_009bae68 = (char *)0x0;
    }
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_009badb8);
    if (DVar1 != 0xffffffff) {
      DAT_009bae64 = 1;
      DAT_009070b0 = DAT_009badb8 * 0x3c;
      if (DAT_009badfe != 0) {
        DAT_009070b0 = DAT_009bae0c * 0x3c + DAT_009070b0;
      }
      if ((DAT_009bae52 == 0) || (DAT_009bae60 == 0)) {
        DAT_009070b4 = 0;
        DAT_009070b8 = 0;
      }
      else {
        DAT_009070b4 = 1;
        DAT_009070b8 = (DAT_009bae60 - DAT_009bae0c) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(local_20,0,(LPCWSTR)&DAT_009badbc,-1,PTR_DAT_00907140,0x3f,
                                  (LPCSTR)0x0,&local_24);
      if ((iVar2 == 0) || (local_24 != 0)) {
        *PTR_DAT_00907140 = 0;
      }
      else {
        PTR_DAT_00907140[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(local_20,0,(LPCWSTR)&DAT_009bae10,-1,PTR_DAT_00907144,0x3f,
                                  (LPCSTR)0x0,&local_24);
      if ((iVar2 == 0) || (local_24 != 0)) {
        *PTR_DAT_00907144 = 0;
      }
      else {
        PTR_DAT_00907144[0x3f] = 0;
      }
    }
    __local_unwind2(&local_14,0xffffffff);
  }
  else {
    if ((DAT_009bae68 != (char *)0x0) && (iVar2 = _strcmp(_Str1,DAT_009bae68), iVar2 == 0)) {
      __local_unwind2(&local_14,0xffffffff);
      ExceptionList = local_14;
      return;
    }
    if (DAT_009bae68 != (char *)0x0) {
      __free_dbg(DAT_009bae68,2);
    }
    uVar6 = 0x113;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen(_Str1);
    DAT_009bae68 = (char *)__malloc_dbg(sVar3 + 1,uVar4,pcVar5,uVar6);
    if (DAT_009bae68 != (char *)0x0) {
      FUN_007d0bd0(DAT_009bae68,_Str1);
      local_8 = 0xffffffff;
      FUN_007dc344();
      FUN_007dc34f();
      return;
    }
    __local_unwind2(&local_14,0xffffffff);
  }
  ExceptionList = local_14;
  return;
}

