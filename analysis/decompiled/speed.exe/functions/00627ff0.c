/* speed.exe 00627ff0 FUN_00627ff0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000cb MapVirtualKeyA
 * calls 00460ca0 FUN_00460ca0
 * calls 00627ce0 FUN_00627ce0
 * calls EXTERNAL:000000cc ToUnicode
 * calls 0057e8a0 FUN_0057e8a0
 * calls 0056bc30 FUN_0056bc30
 */

void FUN_00627ff0(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  BYTE *lpKeyState;
  UINT UVar2;
  int iVar3;
  WCHAR *pWVar4;
  UINT wScanCode;
  UINT wFlags;
  WCHAR local_210 [262];
  
  FUN_00460ca0(param_1,&DAT_00890978,param_2);
  if (param_3 == 1) {
    UVar2 = *(UINT *)(param_4 + 4);
    pWVar4 = local_210;
    for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar4[0] = L'\0';
      pWVar4[1] = L'\0';
      pWVar4 = pWVar4 + 2;
    }
    MapVirtualKeyA(UVar2,3);
    wFlags = 0;
    iVar3 = 0x104;
    pWVar4 = local_210;
    lpKeyState = (BYTE *)(**(code **)(*DAT_0091f1d8 + 4))();
    wScanCode = 0;
    UVar2 = MapVirtualKeyA(*(UINT *)(param_4 + 4),3);
    iVar3 = ToUnicode(UVar2,wScanCode,lpKeyState,pWVar4,iVar3,wFlags);
    if (iVar3 != 0) {
      FUN_0057e8a0(param_1,param_2,local_210);
    }
    cVar1 = *param_1;
    if ((((cVar1 != ' ') && (cVar1 != '\b')) && (cVar1 != '\t')) &&
       ((cVar1 != '\r' && (iVar3 != 0)))) {
      return;
    }
  }
  iVar3 = FUN_00627ce0(param_4);
  if (iVar3 != 0) {
    FUN_0056bc30(param_1,param_2,iVar3);
  }
  return;
}

