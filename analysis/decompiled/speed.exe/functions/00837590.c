/* speed.exe 00837590 FUN_00837590; analysis pseudocode, not buildable source.
 * calls 0083e3b0 FUN_0083e3b0
 * calls 0083e2f0 FUN_0083e2f0
 */

void FUN_00837590(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xc),param_2);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x4c);
    *piVar1 = *piVar1 + -1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (-1 < param_2) {
    iVar3 = FUN_0083e2f0(*(undefined4 *)(param_1 + 0xc),param_2);
    if (iVar3 != 0) {
      (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar3 + 0x14));
      (**(code **)(iVar2 + 4))(iVar3);
    }
  }
  return;
}

