/* speed.exe 0084d4e0 FUN_0084d4e0; analysis pseudocode, not buildable source.
 * calls 008620f2 lineMakeCall
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084d4e0(HLINE param_1,LPHCALL param_2,DWORD param_3)

{
  char cVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  char *unaff_ESI;
  linecallparams_tag *plVar5;
  linecallparams_tag local_480 [6];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  plVar5 = local_480;
  for (iVar4 = 0x11c; iVar4 != 0; iVar4 = iVar4 + -1) {
    plVar5->dwTotalSize = 0;
    plVar5 = (linecallparams_tag *)&plVar5->dwBearerMode;
  }
  local_480[0].dwBearerMode = 1;
  local_480[0].dwAddressMode = 1;
  local_480[0].dwTotalSize = 0x470;
  local_480[0].dwMediaMode = 0x10;
  local_480[0].dwCallParamFlags = 2;
  local_480[0].dwAddressID = 0;
  local_480[0].dwDisplayableAddressOffset = 0x70;
  iVar4 = 0x70 - (int)unaff_ESI;
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI[(int)local_480 + iVar4] = cVar1;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  pDVar3 = &local_480[0].dwPredictiveAutoTransferStates;
  do {
    DVar2 = *pDVar3;
    pDVar3 = (DWORD *)((int)pDVar3 + 1);
  } while ((char)DVar2 != '\0');
  local_480[0].dwDisplayableAddressSize =
       (int)pDVar3 - (int)((int)&local_480[0].dwPredictiveAutoTransferStates + 1);
  lineMakeCall(param_1,param_2,(LPCSTR)&local_480[0].dwPredictiveAutoTransferStates,param_3,
               local_480);
  return;
}

