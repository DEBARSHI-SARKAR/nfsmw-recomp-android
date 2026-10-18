/* speed.exe 007e7aa0 copy_environ; analysis pseudocode, not buildable source.
 * calls 007c4240 __amsg_exit
 * calls 007c6700 __malloc_dbg
 * calls 007d0cd0 _strlen
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Debug */

int * __cdecl copy_environ(int *param_1)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *local_14;
  int *local_10;
  int local_8;
  
  local_8 = 0;
  local_10 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (iVar3 = *local_10, local_10 = local_10 + 1, iVar3 != 0) {
      local_8 = local_8 + 1;
    }
    piVar1 = (int *)__malloc_dbg(local_8 * 4 + 4,2,"setenv.c",0x19f);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_14 = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      uVar6 = 0x1a8;
      pcVar5 = "setenv.c";
      uVar4 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar3 = __malloc_dbg(sVar2 + 1,uVar4,pcVar5,uVar6);
      *local_14 = iVar3;
      if (*local_14 != 0) {
        FUN_007d0bd0(*local_14,*local_10);
      }
      local_14 = local_14 + 1;
    }
    *local_14 = 0;
  }
  return piVar1;
}

