/* speed.exe 00862d74 FUN_00862d74; analysis pseudocode, not buildable source.
 * calls 007df530 __vsnprintf
 * calls 00862dcb FUN_00862dcb
 * calls 00862d24 FUN_00862d24
 */

void FUN_00862d74(char *param_1)

{
  if (param_1 == (char *)0x0) {
    DAT_009c4778 = 0;
  }
  else {
    __vsnprintf(&DAT_009c4778,0x800,param_1,&stack0x00000008);
  }
  FUN_00862dcb(2,"ERROR: %s",&DAT_009c4778);
  FUN_00862d24();
  return;
}

