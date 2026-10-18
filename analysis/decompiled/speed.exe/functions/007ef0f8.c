/* speed.exe 007ef0f8 FUN_007ef0f8; analysis pseudocode, not buildable source.
 * calls 0085d840 _bsearch
 */

undefined1 __fastcall FUN_007ef0f8(char *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if ((((DAT_009bb173 != '\0') && (cVar1 = *param_1, cVar1 != '\\')) && (cVar1 != '/')) &&
     (param_1[1] != ':')) {
    if (DAT_009bb174 != 0) {
      if (cVar1 == '.') {
        param_1 = param_1 + 2;
      }
      pvVar2 = _bsearch(param_1,(void *)(DAT_009bb174 + 0x128),*(size_t *)(DAT_009bb174 + 0xc),0x105
                        ,FUN_007ef0ef);
      if (pvVar2 != (void *)0x0) {
        uVar3 = *(undefined1 *)((int)pvVar2 + 0x104);
      }
    }
    return uVar3;
  }
  return 0;
}

