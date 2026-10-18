/* speed.exe 006500f0 FUN_006500f0; analysis pseudocode, not buildable source.
 * calls 0064dca0 FUN_0064dca0
 */

int FUN_006500f0(int *param_1,undefined4 param_2)

{
  if ((*param_1 == 0x46465548) && ((char)param_1[1] == '\x01')) {
    FUN_0064dca0(param_2);
    return param_1[2];
  }
  return 0;
}

