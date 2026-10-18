/* speed.exe 0051f6c0 FUN_0051f6c0; analysis pseudocode, not buildable source.
 * calls 005b8390 FUN_005b8390
 * calls 005b2d50 FUN_005b2d50
 */

void __fastcall FUN_0051f6c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    iVar2 = *(int *)(param_1 + 0x38);
    uVar1 = 0xffcccccc;
    if (iVar2 < 3) {
      uVar1 = 0xff0000ff;
    }
    else if ((4 < iVar2) && (iVar2 < 7)) {
      uVar1 = 0xffa00000;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar3 = 0;
      uVar1 = FUN_005b2d50(uVar1);
      FUN_005b8390(uVar1,uVar3);
    }
    iVar2 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar2;
    if (8 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
  }
  return;
}

