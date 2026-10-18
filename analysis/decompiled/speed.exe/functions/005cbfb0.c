/* speed.exe 005cbfb0 FUN_005cbfb0; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 */

undefined * __fastcall FUN_005cbfb0(undefined4 *param_1)

{
  _strncpy(&DAT_0091de38,(char *)*param_1,param_1[1]);
  (&DAT_0091de38)[param_1[1]] = 0;
  return &DAT_0091de38;
}

