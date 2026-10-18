/* speed.exe 00723e40 FUN_00723e40; analysis pseudocode, not buildable source.
 */

int FUN_00723e40(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    while (*(short *)(param_1 + iVar1 * 2) != param_4) {
      iVar1 = iVar1 + 1;
      if (param_2 <= iVar1) {
        *(short *)(param_1 + (param_2 % param_3) * 2) = (short)param_4;
        return param_2 + 1;
      }
    }
    if (-1 < iVar1) {
      *(undefined2 *)(param_1 + iVar1 * 2) = 0xffff;
      return param_2;
    }
  }
  *(short *)(param_1 + (param_2 % param_3) * 2) = (short)param_4;
  return param_2 + 1;
}

