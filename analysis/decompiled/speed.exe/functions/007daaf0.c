/* speed.exe 007daaf0 __set_errno; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 */

/* Library Function - Single Match
    __set_errno
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl __set_errno(int _Value)

{
  if (_Value == 1) {
    _Value = FUN_007cb270();
    *(undefined4 *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    _Value = FUN_007cb270();
    *(undefined4 *)_Value = 0x22;
  }
  return _Value;
}

