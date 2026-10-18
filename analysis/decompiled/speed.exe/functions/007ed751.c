/* speed.exe 007ed751 FUN_007ed751; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls EXTERNAL:00000046 ResetEvent
 * calls EXTERNAL:0000004d CreateEventA
 * calls 007ecc4a FUN_007ecc4a
 * calls 007ec1a7 FUN_007ec1a7
 * calls 007ec44f FUN_007ec44f
 */

void FUN_007ed751(void)

{
  HANDLE pvVar1;
  int unaff_ESI;
  
  FUN_007ec1bd();
  FUN_007ec1a7();
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  FUN_007ecc4a(unaff_ESI + 0x44);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(unaff_ESI + 0x78) = pvVar1;
  FUN_007ec1a7();
  *(undefined4 *)(unaff_ESI + 0x7c) = 0xff;
  (**(code **)(**(int **)(unaff_ESI + 0x80) + 4))();
  FUN_007ec44f(unaff_ESI + 0x68,FUN_007ed55e);
  WaitForSingleObject(*(HANDLE *)(unaff_ESI + 0x78),0xffffffff);
  ResetEvent(*(HANDLE *)(unaff_ESI + 0x78));
  FUN_007ec1c8();
  return;
}

