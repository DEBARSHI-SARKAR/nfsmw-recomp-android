/* speed.exe 00858540 FUN_00858540; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls EXTERNAL:0000003f CreateThread
 * calls EXTERNAL:00000080 InitializeCriticalSection
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:0000001d SetThreadPriority
 * calls EXTERNAL:0000004d CreateEventA
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_00858540(int param_1,int param_2,int param_3)

{
  undefined4 *lpParameter;
  undefined4 uVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  undefined4 *puVar4;
  int iVar5;
  DWORD local_4;
  
  lpParameter = (undefined4 *)FUN_0078af30(0x1948);
  puVar4 = (undefined4 *)0x0;
  if (lpParameter != (undefined4 *)0x0) {
    puVar4 = lpParameter;
    for (iVar5 = 0x652; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *lpParameter = FUN_00858540;
    lpParameter[1] = FUN_00857b80;
    lpParameter[2] = FUN_00857c50;
    lpParameter[3] = &DAT_00857d90;
    lpParameter[4] = FUN_00858180;
    lpParameter[5] = FUN_008581e0;
    lpParameter[6] = FUN_00858270;
    lpParameter[7] = thunk_FUN_008581e0;
    lpParameter[8] = &DAT_00857c40;
    lpParameter[9] = FUN_008582e0;
    lpParameter[10] = &LAB_00858320;
    lpParameter[0xb] = FUN_00858330;
    lpParameter[0xc] = FUN_00858470;
    lpParameter[0xd] = &LAB_008584f0;
    lpParameter[0x13] = s_SERIAL_008c769c._0_4_;
    *(undefined2 *)(lpParameter + 0x14) = s_SERIAL_008c769c._4_2_;
    *(char *)((int)lpParameter + 0x52) = s_SERIAL_008c769c[6];
    InitializeCriticalSection((LPCRITICAL_SECTION)(lpParameter + 0x649));
    param_1 = param_1 + 0x10;
    lpParameter[0x36] = param_1;
    lpParameter[0x37] = param_1 * param_2;
    uVar1 = FUN_0078af30(param_1 * param_2);
    lpParameter[0x3c] = param_1;
    lpParameter[0x3a] = uVar1;
    lpParameter[0x3d] = param_1 * param_3;
    uVar1 = FUN_0078af30(param_1 * param_3);
    lpParameter[0x41] = uVar1;
    lpParameter[0x243] = 0;
    lpParameter[0x646] = 0;
    lpParameter[0x645] = 0;
    lpParameter[0x644] = 0x800;
    lpParameter[0x34] = 1;
    lpParameter[0x35] = 0;
    DVar2 = GetCurrentThreadId();
    lpParameter[0x33] = DVar2;
    lpParameter[0x20] = 0xffffffff;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    lpParameter[0x25] = pvVar3;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    lpParameter[0x2a] = pvVar3;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    lpParameter[0x2f] = pvVar3;
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00857810,
                          lpParameter,0,&local_4);
    if (pvVar3 == (HANDLE)0x0) {
      return (undefined4 *)0x0;
    }
    SetThreadPriority(pvVar3,2);
    CloseHandle(pvVar3);
    puVar4 = lpParameter;
  }
  return puVar4;
}

