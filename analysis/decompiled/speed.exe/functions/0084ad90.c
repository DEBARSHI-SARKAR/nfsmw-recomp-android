/* speed.exe 0084ad90 FUN_0084ad90; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003f CreateThread
 * calls 007d6cb0 __security_check_cookie
 * calls 00862158 Ordinal_115
 * calls 0084be20 FUN_0084be20
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:0000001d SetThreadPriority
 * calls 0084c010 FUN_0084c010
 * calls EXTERNAL:0000004d CreateEventA
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084ad90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uStack_1a8;
  undefined4 local_1a0 [101];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  FUN_0084c010(param_1);
  FUN_0084be20(FUN_0084aa40,&DAT_009c36fc);
  puVar2 = local_1a0;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_009c3704 = 0;
  _DAT_009c3708 = 0;
  Ordinal_115(2,local_1a0);
  DAT_009c36f8 = (uint)CONCAT11((char)uStack_1a8,(char)((ushort)uStack_1a8 >> 8));
  DAT_009c3710 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  DAT_009c370c = (HANDLE)0x1;
  DAT_009c370c = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0084ac10,(LPVOID)0x0,0,
                              (LPDWORD)&stack0xfffffe54);
  if (DAT_009c370c != (HANDLE)0x0) {
    SetThreadPriority(DAT_009c370c,param_1);
    CloseHandle(DAT_009c370c);
  }
  return;
}

