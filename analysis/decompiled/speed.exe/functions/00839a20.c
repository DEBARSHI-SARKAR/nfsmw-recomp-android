/* speed.exe 00839a20 FUN_00839a20; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00838e70 FUN_00838e70
 * calls 0083e2f0 FUN_0083e2f0
 * calls 008368f0 FUN_008368f0
 */

void FUN_00839a20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xcc) != 0)) {
    iVar1 = FUN_0083e390(*(int *)(param_1 + 0xcc));
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xcc),iVar1);
      if (iVar2 != 0) {
        uVar3 = 1;
        do {
          if (((*(uint *)(iVar2 + 0x24) & uVar3) != 0) && (*(int *)(param_1 + 0xc) != 5)) {
            FUN_00838e70(param_1,iVar2,0x100000,uVar3,0,0);
          }
          uVar3 = uVar3 * 2;
        } while (uVar3 < 0x80);
        FUN_0083e2f0(*(undefined4 *)(param_1 + 0xcc),iVar1);
        (**(code **)(param_1 + 4))(iVar2);
      }
    }
    FUN_008368f0(param_1);
  }
  return;
}

