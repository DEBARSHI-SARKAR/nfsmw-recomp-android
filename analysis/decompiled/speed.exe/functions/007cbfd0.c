/* speed.exe 007cbfd0 ___CppXcptFilter; analysis pseudocode, not buildable source.
 * calls 007cc000 __XcptFilter
 */

/* Library Function - Single Match
    ___CppXcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = __XcptFilter(0xe06d7363,_ExceptionPtr);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

