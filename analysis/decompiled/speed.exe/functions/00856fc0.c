/* speed.exe 00856fc0 thunk_FUN_0084b650; analysis pseudocode, not buildable source.
 */

undefined4 * thunk_FUN_0084b650(byte *param_1,DWORD param_2)

{
  byte bVar1;
  undefined4 *lpParameter;
  HANDLE hObject;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((int)param_2 < 0) {
    return (undefined4 *)0x0;
  }
  lpParameter = (undefined4 *)FUN_0078af30(0x5c);
  puVar5 = lpParameter;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  lpParameter[2] = &LAB_0084b5c0;
  lpParameter[3] = FUN_0084b5d0;
  bVar1 = *param_1;
  pbVar3 = param_1;
  if (bVar1 == 0) {
LAB_0084b6a6:
    if (*pbVar3 != 0) {
      puVar5 = lpParameter + 4;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)((int)lpParameter + 0x4f) = 0;
      hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0084b5f0,lpParameter,0,&param_2);
      if (hObject != (HANDLE)0x0) {
        CloseHandle(hObject);
      }
      return lpParameter;
    }
  }
  else {
    do {
      if ((bVar1 != 0x2e) && (((char)bVar1 < '0' || ('9' < (char)bVar1)))) goto LAB_0084b6a6;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  iVar2 = 0;
  while( true ) {
    uVar4 = 0;
    bVar1 = *param_1;
    while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
      param_1 = param_1 + 1;
      uVar4 = (bVar1 & 0xf) + uVar4 * 10;
      bVar1 = *param_1;
    }
    if (((int)(char)*param_1 != ((2 < iVar2) - 1 & 0x2e)) || (0xff < (int)uVar4)) break;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    lpParameter[1] = lpParameter[1] << 8 | uVar4;
    *lpParameter = 1;
    if (3 < iVar2) {
      lpParameter[0x15] = 1;
      return lpParameter;
    }
  }
  *lpParameter = 0xfffffffe;
  lpParameter[1] = 0;
  lpParameter[0x15] = 1;
  return lpParameter;
}

