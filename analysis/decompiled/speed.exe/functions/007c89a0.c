/* speed.exe 007c89a0 __aligned_realloc_dbg; analysis pseudocode, not buildable source.
 * calls 007c8b60 __aligned_offset_realloc_dbg
 */

/* Library Function - Single Match
    __aligned_realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void __aligned_realloc_dbg
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  __aligned_offset_realloc_dbg(param_1,param_2,param_3,0,param_4,param_5);
  return;
}

