/* speed.exe 007d07a0 ___CxxDetectRethrow; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___CxxDetectRethrow
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl ___CxxDetectRethrow(void *exception)

{
  int *piVar1;
  int iVar2;
  
  if (exception == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    piVar1 = *(int **)exception;
    if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
        ((piVar1[5] == 0x19930520 || (piVar1[5] == 0x19930521)))) && (piVar1[7] == 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

