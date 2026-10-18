/* speed.exe 008461b0 FUN_008461b0; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 */

char * FUN_008461b0(char *param_1,char *param_2,size_t param_3)

{
  _strncpy(param_1,param_2,param_3);
  param_1[param_3 - 1] = '\0';
  return param_1;
}

