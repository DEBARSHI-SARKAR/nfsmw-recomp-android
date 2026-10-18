/* speed.exe 007c66d0 _malloc; analysis pseudocode, not buildable source.
 * calls 007c6750 FUN_007c6750
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_007c6750(_Size,DAT_009bad8c,1,0,0);
  return pvVar1;
}

