/* speed.exe 007a2200 FUN_007a2200; analysis pseudocode, not buildable source.
 * calls 00405ed0 FUN_00405ed0
 * calls 00466f20 FUN_00466f20
 * calls 00516e10 FUN_00516e10
 * calls 007a2160 FUN_007a2160
 * calls 0050d320 FUN_0050d320
 * calls 006bdd20 FUN_006bdd20
 * calls 007c4b80 FUN_007c4b80
 * calls 00516e20 FUN_00516e20
 * calls 007a1ef0 FUN_007a1ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007a2200(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  iVar3 = FUN_00405ed0(1);
  if (iVar3 != 0) {
    FUN_00466f20(iVar3);
    FUN_007a2160();
    iVar4 = FUN_007c4b80();
    FUN_006bdd20(iVar3,iVar3,iVar4 / 0x168);
    FUN_00516e10();
    FUN_00516e20();
    *(undefined4 *)(iVar3 + 0x30) = 0;
    FUN_00516e10();
    iVar4 = FUN_00516e20();
    uVar2 = _DAT_00890968;
    if (((iVar4 != 2) && (iVar4 != 3)) && (iVar4 == 5)) {
      uVar2 = _DAT_008b71e8;
    }
    *(undefined4 *)(iVar3 + 0x34) = uVar2;
    FUN_00516e10();
    FUN_00516e20();
    *(undefined4 *)(iVar3 + 0x38) = 0;
    FUN_007a1ef0(&DAT_009195e0 + iVar1 * 0x1c,iVar3,param_2);
  }
  FUN_0050d320();
  return;
}

