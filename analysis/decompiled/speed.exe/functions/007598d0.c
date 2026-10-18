/* speed.exe 007598d0 FUN_007598d0; analysis pseudocode, not buildable source.
 * calls 007594a0 FUN_007594a0
 * calls 00748130 FUN_00748130
 * calls 005af1c0 FUN_005af1c0
 * calls 00739a70 FUN_00739a70
 * calls 00756e90 FUN_00756e90
 * calls 00747c40 FUN_00747c40
 */

void __thiscall FUN_007598d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = FUN_00748130(param_2);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 7) = 1;
    iVar2 = FUN_005af1c0(iVar1 + 8);
    iVar4 = 0;
    piVar5 = (int *)(DAT_009b09d8 + 0x50);
    do {
      if (*piVar5 == iVar2) {
        iVar2 = iVar4 * 0xd0 + DAT_009b09d8;
        goto LAB_0075991a;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x34;
    } while (iVar4 < 0x54);
    iVar2 = 0;
LAB_0075991a:
    iVar2 = *(int *)(iVar2 + 0x90);
    if (iVar2 != *param_1) {
      FUN_00739a70(iVar2,0,0,0);
      FUN_007594a0();
    }
    iVar4 = 0;
    piVar5 = (int *)(iVar1 + 0x60);
    do {
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        uVar3 = 0;
LAB_00759970:
        FUN_00756e90(iVar4,uVar3,1);
      }
      else if (iVar1 != 1) {
        uVar3 = FUN_00747c40(iVar2,iVar4,iVar1,0,0xffffffff);
        goto LAB_00759970;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 0x8b);
  }
  return;
}

