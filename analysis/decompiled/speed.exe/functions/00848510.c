/* speed.exe 00848510 FUN_00848510; analysis pseudocode, not buildable source.
 */

char * FUN_00848510(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((param_2 < 0x14) && (pcVar1 = (char *)(param_2 * 0x27 + 0x9d0 + param_1), *pcVar1 != '\0')) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

