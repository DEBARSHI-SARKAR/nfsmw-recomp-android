/* speed.exe 007e4310 __set_osfhnd; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000092 SetStdHandle
 * calls 007cb270 FUN_007cb270
 * calls 007cb280 FUN_007cb280
 */

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((uint)param_1 < DAT_009c5320) &&
     (*(int *)((param_1 & 0x1fU) * 0x24 + (&DAT_009c5340)[param_1 >> 5]) == -1)) {
    if (DAT_00906230 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
      }
    }
    *(intptr_t *)((param_1 & 0x1fU) * 0x24 + (&DAT_009c5340)[param_1 >> 5]) = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_007cb270();
    *puVar2 = 9;
    puVar2 = (undefined4 *)FUN_007cb280();
    *puVar2 = 0;
    iVar1 = -1;
  }
  return iVar1;
}

