/* speed.exe 007e20f0 ___init_ctype; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d6cb0 __security_check_cookie
 * calls 007d6d30 FID_conflict:_memcpy
 * calls EXTERNAL:00000079 GetCPInfo
 * calls 007e63d0 ___getlocaleinfo
 * calls 007e2560 ___crtGetStringTypeA
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  int iVar1;
  BOOL BVar2;
  void *in_stack_ffffffd0;
  undefined4 *local_2c;
  _cpinfo local_28;
  undefined4 local_14;
  BYTE *local_10;
  uint local_c;
  BYTE *local_8;
  
  local_14 = DAT_00906980;
  local_10 = (BYTE *)0x0;
  if (DAT_009bada0 == 0) {
    PTR_DAT_00907294 = &DAT_008bd9e0;
    DAT_009c5090 = (undefined4 *)0x0;
    DAT_009c508c = 0;
    iVar1 = 0;
  }
  else {
    if ((DAT_009badb0 != 0) ||
       (iVar1 = ___getlocaleinfo((_locale_t)0x0,(uint)DAT_009baf0c,(LPCWSTR)0x1004,0x9badb0,
                                 in_stack_ffffffd0), iVar1 == 0)) {
      local_2c = (undefined4 *)__malloc_dbg(4,2,"initctyp.c",0x66);
      in_stack_ffffffd0 = (void *)__malloc_dbg(0x300,2,"initctyp.c",0x6b);
      local_10 = (BYTE *)__malloc_dbg(0x101,2,"initctyp.c",0x6d);
      if ((local_2c != (undefined4 *)0x0) &&
         ((in_stack_ffffffd0 != (void *)0x0 && (local_10 != (BYTE *)0x0)))) {
        *local_2c = 0;
        local_8 = local_10;
        for (local_c = 0; (int)local_c < 0x100; local_c = local_c + 1) {
          *local_8 = (byte)local_c;
          local_8 = local_8 + 1;
        }
        BVar2 = GetCPInfo(DAT_009badb0,&local_28);
        if ((BVar2 != 0) && (local_28.MaxCharSize < 6)) {
          DAT_00907258 = local_28.MaxCharSize & 0xffff;
          if (1 < DAT_00907258) {
            for (local_8 = local_28.LeadByte; (*local_8 != 0 && (local_8[1] != 0));
                local_8 = local_8 + 2) {
              for (local_c = (uint)*local_8; (int)local_c <= (int)(uint)local_8[1];
                  local_c = local_c + 1) {
                local_10[local_c] = 0;
              }
            }
          }
          BVar2 = ___crtGetStringTypeA
                            ((_locale_t)0x1,(DWORD)local_10,(LPCSTR)0x100,
                             (int)in_stack_ffffffd0 + 0x100,(LPWORD)0x0,0,0);
          if (BVar2 != 0) {
            *(undefined2 *)((int)in_stack_ffffffd0 + 0xfe) = 0;
            if (1 < (int)DAT_00907258) {
              for (local_8 = local_28.LeadByte; (*local_8 != 0 && (local_8[1] != 0));
                  local_8 = local_8 + 2) {
                for (local_c = (uint)*local_8; (int)local_c <= (int)(uint)local_8[1];
                    local_c = local_c + 1) {
                  *(undefined2 *)((int)in_stack_ffffffd0 + local_c * 2 + 0x100) = 0x8000;
                }
              }
            }
            FID_conflict__memcpy(in_stack_ffffffd0,(void *)((int)in_stack_ffffffd0 + 0x200),0xfe);
            PTR_DAT_00907294 = (undefined *)((int)in_stack_ffffffd0 + 0x100);
            DAT_009c508c = (int)in_stack_ffffffd0 + 0xfe;
            DAT_009c5090 = local_2c;
            __free_dbg(local_10,2);
            return 0;
          }
        }
      }
    }
    __free_dbg(local_2c,2);
    __free_dbg(in_stack_ffffffd0,2);
    __free_dbg(local_10,2);
    iVar1 = 1;
  }
  return iVar1;
}

