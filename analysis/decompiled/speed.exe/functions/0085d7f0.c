/* speed.exe 0085d7f0 __endthreadex; analysis pseudocode, not buildable source.
 * calls 007c4240 __amsg_exit
 * calls 007cd100 __getptd
 * calls 007cd420 __freeptd
 * calls 007c4390 FUN_007c4390
 * calls EXTERNAL:00000019 ExitThread
 */

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2003 Debug */

void __cdecl __endthreadex(uint _Retval)

{
  _ptiddata _Ptd;
  
  if (PTR_FUN_00906244 != (undefined *)0x0) {
    (*(code *)PTR_FUN_00906244)();
  }
  _Ptd = __getptd();
  if (_Ptd == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  __freeptd(_Ptd);
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}

