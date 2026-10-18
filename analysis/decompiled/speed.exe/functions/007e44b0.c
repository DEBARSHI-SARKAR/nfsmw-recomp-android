/* speed.exe 007e44b0 __get_osfhandle; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 * calls 007cb280 FUN_007cb280
 */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2003 Debug */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  undefined4 *puVar1;
  intptr_t iVar2;
  
  if (((uint)_FileHandle < DAT_009c5320) &&
     ((*(byte *)((&DAT_009c5340)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    iVar2 = *(intptr_t *)((_FileHandle & 0x1fU) * 0x24 + (&DAT_009c5340)[_FileHandle >> 5]);
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

