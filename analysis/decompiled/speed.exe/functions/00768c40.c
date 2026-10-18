/* speed.exe 00768c40 FUN_00768c40; analysis pseudocode, not buildable source.
 */

char * FUN_00768c40(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 1) {
    return "_Sunset";
  }
  pcVar1 = "";
  if (param_1 != 0) {
    pcVar1 = "THIS_IS_NOT_A_TIME_OF_DAY_SUFFIX";
  }
  return pcVar1;
}

