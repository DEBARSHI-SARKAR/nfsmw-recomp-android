/* speed.exe 00860970 ___mbtowc_mt; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls 007cb270 FUN_007cb270
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    ___mbtowc_mt
   
   Library: Visual Studio 2003 Debug */

undefined4 ___mbtowc_mt(int param_1,LPWSTR param_2,byte *param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (((*(int *)(param_1 + 0x28) != 1) && (*(int *)(param_1 + 0x28) != 2)) &&
     (iVar2 = __CrtDbgReport(2,"mbtowc.c",0x46,0,
                             "ptloci->mb_cur_max == 1 || ptloci->mb_cur_max == 2"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_3 == (byte *)0x0) || (param_4 == 0)) {
    return 0;
  }
  if (*param_3 == 0) {
    if (param_2 != (LPWSTR)0x0) {
      *param_2 = L'\0';
    }
    return 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    if ((*(ushort *)(*(int *)(param_1 + 0x48) + (uint)*param_3 * 2) & 0x8000) == 0) {
      iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCSTR)param_3,1,param_2,
                                  (uint)(param_2 != (LPWSTR)0x0));
      if (iVar2 == 0) {
        puVar4 = (undefined4 *)FUN_007cb270();
        *puVar4 = 0x2a;
        return 0xffffffff;
      }
      return 1;
    }
    if ((((*(int *)(param_1 + 0x28) < 2) || ((int)param_4 < *(int *)(param_1 + 0x28))) ||
        (iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCSTR)param_3,
                                     *(int *)(param_1 + 0x28),param_2,(uint)(param_2 != (LPWSTR)0x0)
                                    ), iVar2 == 0)) &&
       ((param_4 < *(uint *)(param_1 + 0x28) || (param_3[1] == 0)))) {
      puVar4 = (undefined4 *)FUN_007cb270();
      *puVar4 = 0x2a;
      return 0xffffffff;
    }
    return *(undefined4 *)(param_1 + 0x28);
  }
  if (param_2 != (LPWSTR)0x0) {
    *param_2 = (ushort)*param_3;
  }
  return 1;
}

