/* speed.exe 007c5108 __global_unwind2; analysis pseudocode, not buildable source.
 * calls 0085d380 RtlUnwind
 */

/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x7c5120,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

