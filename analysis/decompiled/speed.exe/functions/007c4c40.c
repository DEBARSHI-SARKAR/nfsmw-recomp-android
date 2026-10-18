/* speed.exe 007c4c40 _CallMemberFunction0; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x007c4c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}

