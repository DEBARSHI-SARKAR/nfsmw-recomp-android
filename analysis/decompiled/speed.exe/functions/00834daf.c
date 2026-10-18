/* speed.exe 00834daf FUN_00834daf; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 */

undefined4 * __thiscall
FUN_00834daf(undefined4 *param_1,undefined4 param_2,undefined1 param_3,char *param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  if (param_4 == (char *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  else {
    _strncpy((char *)((int)param_1 + 5),param_4,0xf);
  }
  return param_1;
}

