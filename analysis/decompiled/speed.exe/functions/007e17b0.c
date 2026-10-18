/* speed.exe 007e17b0 ___init_numeric; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007e1af0 ___free_lconv_num
 * calls 007c6b60 __calloc_dbg
 * calls 007e63d0 ___getlocaleinfo
 * calls 007e1a70 fix_grouping
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  undefined4 *_FieldType;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint _Lc_type;
  void *unaff_EDI;
  undefined4 *puVar5;
  
  if ((DAT_009bada8 == 0) && (DAT_009bada4 == 0)) {
    if (((DAT_009c5098 != (int *)0x0) && (*DAT_009c5098 == 0)) &&
       (DAT_009c5098 != *(int **)(PTR_DAT_00906b3c + 0x2c))) {
      __free_dbg(DAT_009c5098,2);
      __free_dbg(DAT_009baef8,2);
    }
    DAT_009c509c = (undefined4 *)0x0;
    DAT_009c5098 = (undefined4 *)0x0;
    PTR_PTR_0090738c = (undefined *)&PTR_DAT_0090735c;
    DAT_009baef8 = (undefined4 *)0x0;
    _FieldType = (undefined4 *)PTR_PTR_0090738c;
    puVar5 = DAT_009baef8;
    puVar1 = DAT_009c5098;
  }
  else {
    _FieldType = (undefined4 *)__calloc_dbg(1,0x30,2,"initnum.c",0x6d);
    if (_FieldType == (undefined4 *)0x0) {
      return 1;
    }
    puVar1 = (undefined4 *)PTR_PTR_0090738c;
    puVar5 = _FieldType;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = (undefined4 *)__malloc_dbg(4,2,"initnum.c",0x7a);
    if (puVar1 == (undefined4 *)0x0) {
      __free_dbg(_FieldType,2);
      return 1;
    }
    *puVar1 = 0;
    if (DAT_009bada8 == 0) {
      DAT_009c509c = (undefined4 *)0x0;
      *_FieldType = PTR_DAT_0090735c;
      _FieldType[1] = PTR_DAT_00907360;
      _FieldType[2] = PTR_DAT_00907364;
    }
    else {
      DAT_009c509c = (undefined4 *)__malloc_dbg(4,2,"initnum.c",0x88);
      if (DAT_009c509c == (undefined4 *)0x0) {
        __free_dbg(_FieldType,2);
        __free_dbg(puVar1,2);
        return 1;
      }
      *DAT_009c509c = 0;
      _Lc_type = (uint)DAT_009baf1a;
      iVar4 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,(LCTYPE)_FieldType,unaff_EDI);
      iVar2 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)&DAT_0000000f,
                               (LCTYPE)(_FieldType + 1),unaff_EDI);
      iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)&DAT_00000010,
                               (LCTYPE)(_FieldType + 2),unaff_EDI);
      if (iVar3 != 0 || (iVar2 != 0 || iVar4 != 0)) {
        ___free_lconv_num(_FieldType);
        __free_dbg(_FieldType,2);
        __free_dbg(puVar1,2);
        return -1;
      }
      fix_grouping(_FieldType[2]);
    }
    puVar5 = _FieldType;
    if (((DAT_009c5098 != (int *)0x0) && (*DAT_009c5098 == 0)) &&
       (DAT_009c5098 != *(int **)(PTR_DAT_00906b3c + 0x2c))) {
      __free_dbg(DAT_009c5098,2);
      __free_dbg(DAT_009baef8,2);
    }
  }
  DAT_009c5098 = puVar1;
  DAT_009baef8 = puVar5;
  PTR_PTR_0090738c = (undefined *)_FieldType;
  _DAT_00907260 = 1;
  DAT_0090725c = **(undefined1 **)PTR_PTR_0090738c;
  return 0;
}

