/* speed.exe 007e1b90 ___init_monetary; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007e1f90 ___free_lconv_mon
 * calls 007c6b60 __calloc_dbg
 * calls 007e63d0 ___getlocaleinfo
 * calls 007e1f10 fix_grouping
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint _Lc_type;
  undefined **ppuVar18;
  void *unaff_EDI;
  undefined4 *puVar19;
  
  if ((DAT_009bada4 == 0) && (DAT_009bada8 == 0)) {
    DAT_009c5094 = (undefined4 *)0x0;
    DAT_009c5098 = (undefined4 *)0x0;
    PTR_PTR_0090738c = (undefined *)&PTR_DAT_0090735c;
    DAT_009baef8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x60);
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    puVar2 = (undefined4 *)__malloc_dbg(4,2,"initmon.c",0x67);
    if (puVar2 == (undefined4 *)0x0) {
      __free_dbg(puVar1,2);
      return 1;
    }
    *puVar2 = 0;
    if (DAT_009bada4 == 0) {
      ppuVar18 = &PTR_DAT_0090735c;
      puVar19 = puVar1;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar19 = *ppuVar18;
        ppuVar18 = ppuVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      DAT_009c5094 = (undefined4 *)0x0;
    }
    else {
      DAT_009c5094 = (undefined4 *)__malloc_dbg(4,2,"initmon.c",0x75);
      if (DAT_009c5094 == (undefined4 *)0x0) {
        __free_dbg(puVar1,2);
        __free_dbg(puVar2,2);
        return 1;
      }
      *DAT_009c5094 = 0;
      _Lc_type = (uint)DAT_009baf14;
      iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x15,(LCTYPE)(puVar1 + 3),unaff_EDI)
      ;
      iVar4 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x14,(LCTYPE)(puVar1 + 4),unaff_EDI)
      ;
      iVar5 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x16,(LCTYPE)(puVar1 + 5),unaff_EDI)
      ;
      iVar6 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x17,(LCTYPE)(puVar1 + 6),unaff_EDI)
      ;
      iVar7 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x18,(LCTYPE)(puVar1 + 7),unaff_EDI)
      ;
      iVar8 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x50,(LCTYPE)(puVar1 + 8),unaff_EDI)
      ;
      iVar9 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x51,(LCTYPE)(puVar1 + 9),unaff_EDI)
      ;
      iVar10 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x1a,(LCTYPE)(puVar1 + 10),
                                unaff_EDI);
      iVar11 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x19,(int)puVar1 + 0x29,unaff_EDI);
      iVar12 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x54,(int)puVar1 + 0x2a,unaff_EDI);
      iVar13 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x55,(int)puVar1 + 0x2b,unaff_EDI);
      iVar14 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x56,(LCTYPE)(puVar1 + 0xb),
                                unaff_EDI);
      iVar15 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x57,(int)puVar1 + 0x2d,unaff_EDI);
      iVar16 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x52,(int)puVar1 + 0x2e,unaff_EDI);
      iVar17 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x53,(int)puVar1 + 0x2f,unaff_EDI);
      if (iVar17 != 0 ||
          (iVar16 != 0 ||
          (iVar15 != 0 ||
          (iVar14 != 0 ||
          (iVar13 != 0 ||
          (iVar12 != 0 ||
          (iVar11 != 0 ||
          (iVar10 != 0 ||
          (iVar9 != 0 ||
          (iVar8 != 0 || (iVar7 != 0 || (iVar6 != 0 || (iVar5 != 0 || (iVar4 != 0 || iVar3 != 0)))))
          ))))))))) {
        ___free_lconv_mon(puVar1);
        __free_dbg(puVar1,2);
        __free_dbg(puVar2,2);
        return 1;
      }
      fix_grouping(puVar1[7]);
    }
    *puVar1 = *(undefined4 *)PTR_PTR_0090738c;
    puVar1[1] = *(undefined4 *)(PTR_PTR_0090738c + 4);
    puVar1[2] = *(undefined4 *)(PTR_PTR_0090738c + 8);
    PTR_PTR_0090738c = (undefined *)puVar1;
    DAT_009baef8 = puVar1;
    DAT_009c5098 = puVar2;
  }
  return 0;
}

