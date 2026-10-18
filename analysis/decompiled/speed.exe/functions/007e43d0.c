/* speed.exe 007e43d0 __free_osfhnd; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000092 SetStdHandle
 * calls 007cb270 FUN_007cb270
 * calls 007cb280 FUN_007cb280
 */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __free_osfhnd(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((uint)param_1 < DAT_009c5320) &&
      (iVar2 = param_1 >> 5,
      (*(byte *)((&DAT_009c5340)[iVar2] + 4 + (param_1 & 0x1fU) * 0x24) & 1) != 0)) &&
     (*(int *)((param_1 & 0x1fU) * 0x24 + (&DAT_009c5340)[iVar2]) != -1)) {
    if (DAT_00906230 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((param_1 & 0x1fU) * 0x24 + (&DAT_009c5340)[iVar2]) = 0xffffffff;
    iVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 9;
    puVar1 = (undefined4 *)FUN_007cb280();
    *puVar1 = 0;
    iVar2 = -1;
  }
  return iVar2;
}

