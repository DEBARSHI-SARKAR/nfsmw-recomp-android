/* speed.exe 007f5fe3 FUN_007f5fe3; analysis pseudocode, not buildable source.
 */

int FUN_007f5fe3(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (short *)0x0) {
    for (; *param_1 != 0; param_1 = param_1 + 1) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

