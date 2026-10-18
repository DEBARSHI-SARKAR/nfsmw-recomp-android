/* speed.exe 007ec44f FUN_007ec44f; analysis pseudocode, not buildable source.
 * calls 0085d600 __beginthreadex
 * calls EXTERNAL:00000024 ResumeThread
 * calls EXTERNAL:00000099 SleepEx
 * calls 007ec377 FUN_007ec377
 * calls EXTERNAL:00000006 CloseHandle
 */

undefined4
FUN_007ec44f(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6)

{
  uintptr_t uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_1c [12];
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    puVar3 = local_1c;
  }
  local_c = param_2;
  local_8 = param_3;
  local_10 = 0;
  uVar1 = __beginthreadex((void *)0x0,param_5,FUN_007ec1d3,&local_10,4,(uint *)(puVar3 + 8));
  *(uintptr_t *)(puVar3 + 4) = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_007ec377(puVar3,param_6);
    ResumeThread(*(HANDLE *)(puVar3 + 4));
    while (local_10 == 0) {
      SleepEx(1,1);
    }
    if (param_1 == (undefined1 *)0x0) {
      CloseHandle(*(HANDLE *)(puVar3 + 4));
    }
    uVar2 = 1;
  }
  return uVar2;
}

