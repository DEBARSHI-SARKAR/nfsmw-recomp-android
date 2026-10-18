/* speed.exe 00862d24 FUN_00862d24; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000012 IsDebuggerPresent
 */

void FUN_00862d24(void)

{
  code *pcVar1;
  BOOL BVar2;
  
  BVar2 = IsDebuggerPresent();
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00862d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}

