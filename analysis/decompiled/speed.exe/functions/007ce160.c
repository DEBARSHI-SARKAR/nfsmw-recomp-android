/* speed.exe 007ce160 __shift; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    __shift
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __shift(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FID_conflict__memcpy(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}

