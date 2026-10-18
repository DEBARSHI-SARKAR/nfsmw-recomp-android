/* speed.exe 007f38c1 FUN_007f38c1; analysis pseudocode, not buildable source.
 * calls 0085da70 __vsnwprintf
 * calls 007f3af8 FUN_007f3af8
 * calls 007f3ae4 FUN_007f3ae4
 * calls 007c94b0 __chkstk
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_007f38c1(int param_1,wchar_t *param_2,va_list param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  wchar_t local_1804;
  wchar_t local_1802 [2047];
  undefined1 local_804 [2044];
  undefined4 uStack_8;
  
  uStack_8 = 0x7f38ce;
  if ((&DAT_00907fe4)[param_1 * 8] != '\0') {
    __vsnwprintf(&local_1804,0x800,param_2,param_3);
    iVar2 = 0;
    if (local_1804 != L'\0') {
      pwVar1 = &local_1804;
      do {
        local_804[iVar2] = (char)*pwVar1;
        iVar2 = iVar2 + 1;
        pwVar1 = pwVar1 + 1;
      } while (*pwVar1 != L'\0');
    }
    local_804[iVar2] = 0;
    puVar3 = &DAT_009081e4;
    do {
      if ((*(char *)(puVar3 + 1) != '\0') && ((code *)*puVar3 != (code *)0x0)) {
        (*(code *)*puVar3)(param_1,local_804);
      }
      puVar3 = puVar3 + 3;
    } while ((int)puVar3 < 0x908244);
  }
  return;
}

