/* speed.exe 007e88f0 FUN_007e88f0; analysis pseudocode, not buildable source.
 */

int FUN_007e88f0(ushort param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = (uint)param_1;
    iVar1 = (param_3 >> 1) * param_4;
    uVar3 = (uint)*(ushort *)(iVar1 + param_2);
    iVar1 = iVar1 + param_2;
    if (uVar2 == uVar3) break;
    if (uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) {
      param_2 = iVar1 + param_4;
      param_3 = param_3 - 1;
    }
    param_3 = param_3 >> 1;
  }
  return iVar1;
}

