/* speed.exe 007df860 __Gettnames; analysis pseudocode, not buildable source.
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    __Gettnames
   
   Library: Visual Studio 2003 Debug */

void * __cdecl __Gettnames(void)

{
  int iVar1;
  undefined *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  void *_Dst;
  char *pcVar8;
  int local_18;
  int local_14;
  uint local_c;
  
  puVar2 = PTR_PTR_0090729c;
  local_14 = 0;
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    sVar3 = _strlen(*(char **)(puVar2 + local_c * 4));
    sVar4 = _strlen(*(char **)(puVar2 + local_c * 4 + 0x1c));
    local_14 = sVar4 + local_14 + 2 + sVar3;
  }
  for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
    sVar3 = _strlen(*(char **)(puVar2 + local_c * 4 + 0x38));
    sVar4 = _strlen(*(char **)(puVar2 + local_c * 4 + 0x68));
    local_14 = sVar4 + local_14 + 2 + sVar3;
  }
  sVar3 = _strlen(*(char **)(puVar2 + 0x98));
  sVar4 = _strlen(*(char **)(puVar2 + 0x9c));
  sVar5 = _strlen(*(char **)(puVar2 + 0xa0));
  sVar6 = _strlen(*(char **)(puVar2 + 0xa4));
  sVar7 = _strlen(*(char **)(puVar2 + 0xa8));
  _Dst = (void *)__malloc_dbg(sVar4 + local_14 + sVar3 + sVar5 + sVar6 + sVar7 + 0xbd,2,"strftime.c"
                              ,0xb3);
  if (_Dst != (void *)0x0) {
    local_18 = (int)_Dst + 0xb8;
    FID_conflict__memcpy(_Dst,PTR_PTR_0090729c,0xb8);
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      *(int *)((int)_Dst + local_c * 4) = local_18;
      pcVar8 = (char *)FUN_007d0bd0(local_18,*(undefined4 *)(puVar2 + local_c * 4));
      sVar3 = _strlen(pcVar8);
      iVar1 = local_18 + 1 + sVar3;
      *(int *)((int)_Dst + local_c * 4 + 0x1c) = iVar1;
      pcVar8 = (char *)FUN_007d0bd0(iVar1,*(undefined4 *)(puVar2 + local_c * 4 + 0x1c));
      sVar3 = _strlen(pcVar8);
      local_18 = iVar1 + 1 + sVar3;
    }
    for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
      *(int *)((int)_Dst + local_c * 4 + 0x38) = local_18;
      pcVar8 = (char *)FUN_007d0bd0(local_18,*(undefined4 *)(puVar2 + local_c * 4 + 0x38));
      sVar3 = _strlen(pcVar8);
      iVar1 = local_18 + 1 + sVar3;
      *(int *)((int)_Dst + local_c * 4 + 0x68) = iVar1;
      pcVar8 = (char *)FUN_007d0bd0(iVar1,*(undefined4 *)(puVar2 + local_c * 4 + 0x68));
      sVar3 = _strlen(pcVar8);
      local_18 = iVar1 + 1 + sVar3;
    }
    *(int *)((int)_Dst + 0x98) = local_18;
    pcVar8 = (char *)FUN_007d0bd0(local_18,*(undefined4 *)(puVar2 + 0x98));
    sVar3 = _strlen(pcVar8);
    iVar1 = local_18 + 1 + sVar3;
    *(int *)((int)_Dst + 0x9c) = iVar1;
    pcVar8 = (char *)FUN_007d0bd0(iVar1,*(undefined4 *)(puVar2 + 0x9c));
    sVar3 = _strlen(pcVar8);
    iVar1 = iVar1 + 1 + sVar3;
    *(int *)((int)_Dst + 0xa0) = iVar1;
    pcVar8 = (char *)FUN_007d0bd0(iVar1,*(undefined4 *)(puVar2 + 0xa0));
    sVar3 = _strlen(pcVar8);
    iVar1 = iVar1 + 1 + sVar3;
    *(int *)((int)_Dst + 0xa4) = iVar1;
    pcVar8 = (char *)FUN_007d0bd0(iVar1,*(undefined4 *)(puVar2 + 0xa4));
    sVar3 = _strlen(pcVar8);
    iVar1 = iVar1 + 1 + sVar3;
    *(int *)((int)_Dst + 0xa8) = iVar1;
    FUN_007d0bd0(iVar1,*(undefined4 *)(puVar2 + 0xa8));
  }
  return _Dst;
}

