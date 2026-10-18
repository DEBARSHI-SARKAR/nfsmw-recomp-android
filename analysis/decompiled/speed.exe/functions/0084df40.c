/* speed.exe 0084df40 FUN_0084df40; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000001f Sleep
 * calls EXTERNAL:0000003f CreateThread
 * calls 00858540 FUN_00858540
 * calls EXTERNAL:00000076 HeapAlloc
 * calls EXTERNAL:00000070 HeapFree
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:00000038 GetProcessHeap
 */

undefined4 * FUN_0084df40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *lpParameter;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  
  dwBytes = 0x1a0;
  DVar5 = 0;
  pvVar1 = GetProcessHeap();
  lpParameter = HeapAlloc(pvVar1,DVar5,dwBytes);
  puVar3 = (undefined4 *)0x0;
  if (lpParameter != (undefined4 *)0x0) {
    puVar3 = lpParameter;
    for (iVar4 = 0x68; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *lpParameter = FUN_0084df40;
    lpParameter[1] = &LAB_0084da30;
    lpParameter[2] = FUN_0084dab0;
    lpParameter[3] = &DAT_0084dcc0;
    lpParameter[4] = FUN_0084dcd0;
    lpParameter[5] = &DAT_0084dd90;
    lpParameter[6] = FUN_0084dda0;
    lpParameter[7] = FUN_0084de50;
    lpParameter[8] = &DAT_0084daa0;
    lpParameter[9] = &LAB_0084dea0;
    lpParameter[10] = &LAB_0084df00;
    lpParameter[0xb] = &DAT_0084df10;
    lpParameter[0xc] = &DAT_0084df20;
    lpParameter[0xd] = &DAT_0084df30;
    lpParameter[0x13] = DAT_008c705c;
    *(undefined1 *)(lpParameter + 0x14) = DAT_008c7060;
    lpParameter[0x25] = 0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0084d980,lpParameter,0,lpParameter + 0x67
                         );
    CloseHandle(pvVar1);
    iVar4 = lpParameter[0x25];
    while (iVar4 == 0) {
      Sleep(0);
      iVar4 = lpParameter[0x25];
    }
    if (lpParameter[0x25] == 1) {
      DVar5 = 0;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,DVar5,lpParameter);
      return (undefined4 *)0x0;
    }
    uVar2 = FUN_00858540(param_1,param_2,param_3);
    lpParameter[0x1f] = uVar2;
    lpParameter[0x23] = 0xffffffff;
    lpParameter[0x24] = 0xffffffff;
    lpParameter[0x25] = 2;
    puVar3 = lpParameter;
  }
  return puVar3;
}

