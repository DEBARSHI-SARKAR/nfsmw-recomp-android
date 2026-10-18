/* speed.exe 007c3a50 FUN_007c3a50; analysis pseudocode, not buildable source.
 * calls 0056f2f0 FUN_0056f2f0
 * calls 00759800 FUN_00759800
 * calls 007594a0 FUN_007594a0
 * calls 0056ecc0 FUN_0056ecc0
 * calls 005816b0 FUN_005816b0
 * calls 00739a70 FUN_00739a70
 * calls 007c3690 FUN_007c3690
 * calls 007aeb10 FUN_007aeb10
 */

void __fastcall FUN_007c3a50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_310 [784];
  
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    if (*(char *)(iVar1 + 0x10) == -1) {
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x194);
      FUN_00739a70(0xffffffff,0,0,0);
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = FUN_005816b0(0,0,0);
      FUN_00739a70(uVar2,uVar3,uVar4,uVar5);
      FUN_00759800();
      FUN_007594a0();
      FUN_0056f2f0(local_310);
    }
    else {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    FUN_007aeb10();
    FUN_007c3690(1,iVar1);
  }
  return;
}

