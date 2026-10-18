/* speed.exe 00492070 FUN_00492070; analysis pseudocode, not buildable source.
 * calls 007c9140 _vfprintf
 */

void FUN_00492070(char *param_1)

{
  if (DAT_009117e8 != (code *)0x0) {
    (*DAT_009117e8)(param_1,&stack0x00000008);
    return;
  }
  _vfprintf((FILE *)&DAT_00906350,param_1,&stack0x00000008);
  return;
}

