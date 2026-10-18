/* speed.exe 00846010 FUN_00846010; analysis pseudocode, not buildable source.
 * calls 007df530 __vsnprintf
 */

void FUN_00846010(char *param_1,size_t param_2,char *param_3)

{
  *param_1 = '\0';
  __vsnprintf(param_1,param_2,param_3,&stack0x00000010);
  param_1[param_2 - 1] = '\0';
  return;
}

