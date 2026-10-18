/* speed.exe 007cda10 __ms_p5_mp_test_fdiv; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls EXTERNAL:0000000d GetProcAddress
 * calls 007cd9c0 __ms_p5_test_fdiv
 */

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent"), pFVar1 != (FARPROC)0x0)) {
    (*pFVar1)(0);
    return;
  }
  __ms_p5_test_fdiv();
  return;
}

