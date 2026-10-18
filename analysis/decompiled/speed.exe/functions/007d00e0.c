/* speed.exe 007d00e0 ExFilterRethrow; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl ExFilterRethrow(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  int iVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if ((((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
      ((pEVar1->ExceptionInformation[0] == 0x19930520 ||
       (pEVar1->ExceptionInformation[0] == 0x19930521)))) && (pEVar1->ExceptionInformation[2] == 0))
  {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

