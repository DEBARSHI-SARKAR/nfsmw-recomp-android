/* speed.exe 0084bba0 FUN_0084bba0; analysis pseudocode, not buildable source.
 */

int FUN_0084bba0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  if (param_3 < 0) {
    bVar1 = *param_1;
    while( true ) {
      if (bVar1 == 0) {
        return 0;
      }
      if (bVar1 != *param_2) break;
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return (uint)*param_1 - (uint)*param_2;
  }
  if (0 < param_3) {
    iVar2 = (int)param_2 - (int)param_1;
    do {
      if ((uint)*param_1 - (uint)param_1[iVar2] != 0) {
        return (uint)*param_1 - (uint)param_1[iVar2];
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return 0;
}

