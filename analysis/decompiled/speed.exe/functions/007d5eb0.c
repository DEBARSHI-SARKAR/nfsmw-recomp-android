/* speed.exe 007d5eb0 ___sbh_alloc_new_group; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000078 VirtualAlloc
 */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

int ___sbh_alloc_new_group(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID lpAddress;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_30 = *(int *)(param_1 + 8);
  local_2c = 0;
  for (; -1 < local_30; local_30 = local_30 << 1) {
    local_2c = local_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + local_2c * 0x204;
  for (local_18 = 0; local_18 < 0x3f; local_18 = local_18 + 1) {
    iVar1 = iVar2 + local_18 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  lpAddress = (LPVOID)(local_2c * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    local_2c = -1;
  }
  else {
    for (local_14 = lpAddress; local_14 <= (LPVOID)((int)lpAddress + 0x7000);
        local_14 = (LPVOID)((int)local_14 + 0x1000)) {
      *(undefined4 *)((int)local_14 + 8) = 0xffffffff;
      *(undefined4 *)((int)local_14 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)local_14 + 0xc) = 0xff0;
      *(int *)((int)local_14 + 0x10) = (int)local_14 + 0x100c;
      *(int *)((int)local_14 + 0x14) = (int)local_14 + -0xff4;
      *(undefined4 *)((int)local_14 + 0xff8) = 0xff0;
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + local_2c * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + local_2c * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = ~(0x80000000U >> ((byte)local_2c & 0x1f)) & *(uint *)(param_1 + 8);
  }
  return local_2c;
}

