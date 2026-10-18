/* speed.exe 00860280 ___toupper_mt; analysis pseudocode, not buildable source.
 * calls 007d4710 ___isctype_mt
 * calls 007d4690 __chvalidator_mt
 * calls 007d4090 ___crtLCMapStringA
 */

/* Library Function - Single Match
    ___toupper_mt
   
   Library: Visual Studio 2003 Debug */

uint ___toupper_mt(int param_1,uint param_2)

{
  int iVar1;
  int in_stack_ffffffe8;
  LPCSTR local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  byte local_8;
  undefined1 local_7;
  
  if ((*(int *)(param_1 + 0x14) == 0) || ((*(int *)(param_1 + 0x24) != 0 && (param_2 < 0x80)))) {
    if ((0x60 < (int)param_2) && ((int)param_2 < 0x7b)) {
      param_2 = param_2 - 0x20;
    }
  }
  else {
    if (param_2 < 0x100) {
      if (*(int *)(param_1 + 0x28) < 2) {
        in_stack_ffffffe8 = __chvalidator_mt(param_1,param_2,2);
      }
      else {
        in_stack_ffffffe8 = ___isctype_mt(param_1,param_2,2);
      }
      if (in_stack_ffffffe8 == 0) {
        return param_2;
      }
    }
    if ((*(ushort *)(*(int *)(param_1 + 0x48) + ((int)param_2 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_c = (undefined1)param_2;
      local_b = 0;
      local_10 = (LPCSTR)0x1;
    }
    else {
      local_c = (undefined1)(param_2 >> 8);
      local_b = (undefined1)param_2;
      local_a = 0;
      local_10 = (LPCSTR)0x2;
    }
    iVar1 = ___crtLCMapStringA(*(_locale_t *)(param_1 + 0x14),(LPCWSTR)0x200,(DWORD)&local_c,
                               local_10,(int)&local_8,(LPSTR)0x3,*(int *)(param_1 + 4),1,
                               in_stack_ffffffe8);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        param_2 = (uint)local_8;
      }
      else {
        param_2 = (uint)CONCAT11(local_8,local_7);
      }
    }
  }
  return param_2;
}

