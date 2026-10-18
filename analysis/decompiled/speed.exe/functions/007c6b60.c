/* speed.exe 007c6b60 __calloc_dbg; analysis pseudocode, not buildable source.
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 *
__calloc_dbg(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined1 *local_c;
  
  puVar1 = (undefined1 *)__malloc_dbg(param_2 * param_1,param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_c = puVar1; local_c < puVar1 + param_2 * param_1; local_c = local_c + 1) {
      *local_c = 0;
    }
  }
  return puVar1;
}

