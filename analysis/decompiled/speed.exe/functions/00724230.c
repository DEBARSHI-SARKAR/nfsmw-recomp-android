/* speed.exe 00724230 FUN_00724230; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00724230(int param_1,int param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0x9c0);
  iVar2 = 0;
  if (0 < *piVar1) {
    while (*(int *)(param_1 + 0x80) != param_2) {
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0xd0;
      if (*piVar1 <= iVar2) {
        return;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x88);
    if (uVar3 < *(uint *)(param_1 + 0x8c)) {
      do {
        (*param_3)(uVar3);
        uVar3 = uVar3 + 0xc;
      } while (uVar3 < *(uint *)(param_1 + 0x8c));
    }
  }
  return;
}

