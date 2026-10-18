/* speed.exe 00865020 FUN_00865020; analysis pseudocode, not buildable source.
 */

void FUN_00865020(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*(uint *)(param_1 + 0x1c) != param_2) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar4 = 0;
      do {
        uVar2 = 1 << ((byte)iVar3 & 0x1f);
        if ((uVar2 & (*(uint *)(param_1 + 0x1c) ^ param_2)) != 0) {
          iVar1 = *(int *)(param_1 + 0x14) + iVar4;
          bVar5 = (param_2 & uVar2) != 0;
          if ((*(int *)(iVar1 + 0x28) == 0) && (bVar5)) {
            param_2 = param_2 & ~uVar2;
          }
          else {
            (**(code **)(param_1 + 8))(iVar1 + 0x10,*(undefined4 *)(param_1 + 0xc),bVar5);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x45c;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  return;
}

