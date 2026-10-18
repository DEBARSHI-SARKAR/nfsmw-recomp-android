/* speed.exe 00837410 FUN_00837410; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e3b0 FUN_0083e3b0
 */

int FUN_00837410(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0083e390(*(undefined4 *)(param_1 + 0xc));
  while( true ) {
    if (iVar1 <= param_2) {
      return 0;
    }
    iVar2 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xc),param_2);
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x10) & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
  if (param_3 == 0) {
    return iVar2;
  }
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 1;
  return iVar2;
}

