/* speed.exe 008375e0 FUN_008375e0; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e3b0 FUN_0083e3b0
 * calls 0083e2f0 FUN_0083e2f0
 */

void FUN_008375e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar2 = FUN_0083e390(*(int *)(param_1 + 0xc));
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar3 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xc),iVar2);
      if ((iVar3 != 0) && ((param_2 == 0 || ((*(byte *)(iVar3 + 0x10) & 1) != 0)))) {
        iVar3 = *(int *)(param_1 + 0x10);
        if ((-1 < iVar2) && (iVar4 = FUN_0083e2f0(*(undefined4 *)(param_1 + 0xc),iVar2), iVar4 != 0)
           ) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar4 + 0x14));
          (**(code **)(iVar3 + 4))(iVar4);
        }
        piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x4c);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return;
}

