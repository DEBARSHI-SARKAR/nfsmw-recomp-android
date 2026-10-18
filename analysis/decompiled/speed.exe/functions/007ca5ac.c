/* speed.exe 007ca5ac _longjmp; analysis pseudocode, not buildable source.
 * calls 007c514a __local_unwind2
 * calls 007c51de FUN_007c51de
 * calls 007c5108 __global_unwind2
 * calls 007dacb0 __rt_probe_read4@4
 */

/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Library: Visual Studio 2003 Debug */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)_Buf[6];
  if (pvVar1 != ExceptionList) {
    __global_unwind2(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    iVar2 = __rt_probe_read4_4(_Buf + 8);
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2(pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_007c51de(0);
                    /* WARNING: Could not recover jumptable at 0x007ca621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}

