/* speed.exe 0056f120 FUN_0056f120; analysis pseudocode, not buildable source.
 */

char * __thiscall FUN_0056f120(int param_1,byte param_2)

{
  char *pcVar1;
  
  if ((0x19 < param_2) ||
     (pcVar1 = (char *)((uint)param_2 * 0x38 + 0x8728 + param_1), *pcVar1 == -1)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

