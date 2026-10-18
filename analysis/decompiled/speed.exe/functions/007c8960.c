/* speed.exe 007c8960 __aligned_malloc_dbg; analysis pseudocode, not buildable source.
 * calls 007c89f0 __aligned_offset_malloc_dbg
 */

/* Library Function - Single Match
    __aligned_malloc_dbg
   
   Library: Visual Studio 2003 Debug */

void __aligned_malloc_dbg
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aligned_offset_malloc_dbg(param_1,param_2,0,param_3,param_4);
  return;
}

