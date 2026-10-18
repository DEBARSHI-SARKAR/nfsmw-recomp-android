/* speed.exe 008485a0 FUN_008485a0; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 */

void FUN_008485a0(int param_1,char *param_2,char *param_3)

{
  if ((((*param_3 != '\0') && (param_3[1] != '\0')) && (param_3[2] == '\0')) && (*param_2 != '\0'))
  {
    FUN_0083c880(param_1 + 0x2d4,0x100,param_3,param_2);
  }
  return;
}

