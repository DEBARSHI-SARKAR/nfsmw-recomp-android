/* speed.exe 007e0f30 __get_lc_time; analysis pseudocode, not buildable source.
 * calls 007e63d0 ___getlocaleinfo
 */

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2003 Debug */

uint __get_lc_time(LCTYPE param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint _Lc_type;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = (uint)DAT_009baf1e;
  _Lc_type = (uint)DAT_009baf20;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x31,param_1 + 4,(void *)0x0);
    pvVar3 = (void *)(uVar2 | uVar4);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x32,param_1 + 8,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x33,param_1 + 0xc,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x34,param_1 + 0x10,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x35,param_1 + 0x14,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x36,param_1 + 0x18,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x37,param_1,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2a,param_1 + 0x20,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2b,param_1 + 0x24,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2c,param_1 + 0x28,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2d,param_1 + 0x2c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2e,param_1 + 0x30,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2f,param_1 + 0x34,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x30,param_1 + 0x1c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x44,param_1 + 0x38,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x45,param_1 + 0x3c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x46,param_1 + 0x40,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x47,param_1 + 0x44,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)&DAT_00000048,param_1 + 0x48,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x49,param_1 + 0x4c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4a,param_1 + 0x50,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4b,param_1 + 0x54,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)&DAT_0000004c,param_1 + 0x58,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4d,param_1 + 0x5c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4e,param_1 + 0x60,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4f,param_1 + 100,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x38,param_1 + 0x68,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x39,param_1 + 0x6c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3a,param_1 + 0x70,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3b,param_1 + 0x74,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3c,param_1 + 0x78,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3d,param_1 + 0x7c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3e,param_1 + 0x80,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3f,param_1 + 0x84,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x40,param_1 + 0x88,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x41,param_1 + 0x8c,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x42,param_1 + 0x90,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x43,param_1 + 0x94,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x28,param_1 + 0x98,pvVar3);
    pvVar3 = (void *)(uVar4 | (uint)pvVar3);
    uVar1 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x29,param_1 + 0x9c,pvVar3);
    pvVar3 = (void *)(uVar1 | (uint)pvVar3);
    uVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x1f,param_1 + 0xa0,pvVar3);
    pvVar3 = (void *)(uVar1 | (uint)pvVar3);
    uVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x20,param_1 + 0xa4,pvVar3);
    pvVar3 = (void *)(uVar1 | (uint)pvVar3);
    uVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x1003,param_1 + 0xa8,pvVar3);
    pvVar3 = (void *)(uVar1 | (uint)pvVar3);
    uVar1 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x1009,param_1 + 0xb0,pvVar3);
    uVar1 = uVar1 | (uint)pvVar3;
    *(uint *)(param_1 + 0xac) = _Lc_type;
  }
  return uVar1;
}

