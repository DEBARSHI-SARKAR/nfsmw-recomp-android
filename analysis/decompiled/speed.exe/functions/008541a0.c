/* speed.exe 008541a0 FUN_008541a0; analysis pseudocode, not buildable source.
 * calls 008534b0 FUN_008534b0
 */

void FUN_008541a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_0090d3e8;
  if (DAT_0090d3e8 != 0) {
    while (iVar2 != param_3) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      iVar2 = (&DAT_0090d3f0)[iVar1];
      if ((&DAT_0090d3f0)[iVar1] == 0) {
        return;
      }
    }
    (**(code **)(iVar3 * 8 + 0x90d3ec))(param_1,param_2,param_4);
  }
  return;
}

