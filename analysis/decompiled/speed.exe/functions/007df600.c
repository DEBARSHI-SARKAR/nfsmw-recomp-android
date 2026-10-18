/* speed.exe 007df600 __Getdays; analysis pseudocode, not buildable source.
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    __Getdays
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __Getdays(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_18;
  int local_14;
  uint local_c;
  
  puVar1 = PTR_PTR_0090729c;
  local_14 = 0;
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_c * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_c * 4 + 0x1c));
    local_14 = sVar3 + local_14 + 2 + sVar2;
  }
  pcVar4 = (char *)__malloc_dbg(local_14 + 1,2,"strftime.c",0x75);
  if (pcVar4 != (char *)0x0) {
    local_18 = pcVar4;
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      *local_18 = ':';
      local_18 = local_18 + 1;
      pcVar5 = (char *)FUN_007d0bd0(local_18,*(undefined4 *)(puVar1 + local_c * 4));
      sVar2 = _strlen(pcVar5);
      local_18 = local_18 + sVar2;
      *local_18 = ':';
      pcVar5 = (char *)FUN_007d0bd0(local_18 + 1,*(undefined4 *)(puVar1 + local_c * 4 + 0x1c));
      sVar2 = _strlen(pcVar5);
      local_18 = local_18 + 1 + sVar2;
    }
    *local_18 = '\0';
  }
  return pcVar4;
}

