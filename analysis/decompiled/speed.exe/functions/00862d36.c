/* speed.exe 00862d36 FUN_00862d36; analysis pseudocode, not buildable source.
 * calls 007df530 __vsnprintf
 * calls 00862d74 FUN_00862d74
 */

void FUN_00862d36(char *param_1)

{
  if (param_1 == (char *)0x0) {
    DAT_009c3f78 = 0;
  }
  else {
    __vsnprintf(&DAT_009c3f78,0x800,param_1,&stack0x00000008);
  }
  (*(code *)PTR_FUN_0090d4e0)(&DAT_008941f8,&DAT_009c3f78);
  return;
}

