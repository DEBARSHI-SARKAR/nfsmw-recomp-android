/* speed.exe 007d4710 ___isctype_mt; analysis pseudocode, not buildable source.
 * calls 007e2560 ___crtGetStringTypeA
 */

/* Library Function - Single Match
    ___isctype_mt
   
   Library: Visual Studio 2003 Debug */

ushort ___isctype_mt(int param_1,int param_2,ushort param_3)

{
  BOOL BVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  LPCSTR local_c;
  ushort local_8 [2];
  
  if (param_2 + 1U < 0x101) {
    param_3 = *(ushort *)(*(int *)(param_1 + 0x48) + param_2 * 2) & param_3;
  }
  else {
    if ((*(ushort *)(*(int *)(param_1 + 0x48) + (param_2 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_10 = (undefined1)param_2;
      local_f = 0;
      local_c = (LPCSTR)0x1;
    }
    else {
      local_10 = (undefined1)((uint)param_2 >> 8);
      local_f = (undefined1)param_2;
      local_e = 0;
      local_c = (LPCSTR)0x2;
    }
    BVar1 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_10,local_c,(int)local_8,*(LPWORD *)(param_1 + 4)
                       ,*(int *)(param_1 + 0x14),1);
    if (BVar1 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = local_8[0] & param_3;
    }
  }
  return param_3;
}

