/* speed.exe 008356bb FUN_008356bb; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000024 ResumeThread
 * calls 0083549c FUN_0083549c
 * calls 0083563c FUN_0083563c
 * calls 0085d600 __beginthreadex
 * calls 008355b2 FUN_008355b2
 */

undefined4 __thiscall FUN_008356bb(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint _StackSize;
  uintptr_t uVar3;
  undefined4 uVar4;
  int *local_8;
  
  local_8 = param_1;
  if (*param_1 != 0) {
    FUN_0083563c();
  }
  puVar2 = (undefined4 *)FUN_008355b2();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[6] = 0;
  }
  *param_1 = (int)puVar2;
  LOCK();
  puVar2[6] = puVar2[6] + 1;
  UNLOCK();
  LOCK();
  *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + 1;
  UNLOCK();
  *(undefined4 *)(*param_1 + 0xc) = param_2;
  *(undefined4 *)(*param_1 + 0x10) = param_3;
  if (param_4 == 0) {
    _StackSize = 0;
  }
  else {
    _StackSize = *(uint *)(param_4 + 4);
  }
  uVar3 = __beginthreadex((void *)0x0,_StackSize,FUN_00835670,(void *)*param_1,4,(uint *)&local_8);
  *(uintptr_t *)*param_1 = uVar3;
  iVar1 = *(int *)*param_1;
  if (iVar1 == 0) {
    FUN_0083563c();
    FUN_0083563c();
    *param_1 = 0;
    uVar4 = 0;
  }
  else {
    ((int *)*param_1)[5] = iVar1;
    if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0x7f)) {
      FUN_0083549c(*(int *)(param_4 + 8));
    }
    ResumeThread(*(HANDLE *)*param_1);
    uVar4 = *(undefined4 *)*param_1;
  }
  return uVar4;
}

