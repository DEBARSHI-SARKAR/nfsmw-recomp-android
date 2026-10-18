/* speed.exe 00573d10 FUN_00573d10; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 00573140 FUN_00573140
 * calls 00460ed0 FUN_00460ed0
 * calls 005251a0 FUN_005251a0
 */

void __thiscall FUN_00573d10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  FUN_00460ed0(local_40,param_2,&DAT_0089d764);
  FUN_00515e20(local_20,0x20,local_40,*(undefined4 *)(param_1 + 0x104));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0(local_20);
  iVar3 = FUN_005251a0(uVar1,uVar2);
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_00573140(&DAT_008a0bb8,param_2);
    FUN_005251a0(uVar1,uVar2);
  }
  return;
}

