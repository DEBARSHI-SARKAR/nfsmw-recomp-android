/* speed.exe 0054b500 FUN_0054b500; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00460c70 FUN_00460c70
 * calls 0056bc10 FUN_0056bc10
 * calls 00516af0 FUN_00516af0
 * calls 0053c8a0 FUN_0053c8a0
 */

void __fastcall FUN_0054b500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0xc);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x108);
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x104);
    if (*(char *)(DAT_0091cf90 + 0x141) != '\0') {
      *(undefined4 *)(param_1 + 0x114) = 3;
    }
  }
  else if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x10c);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0x14);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0xceb82625);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) && (*(int *)(iVar1 + 0x24) != iVar3)) {
        *(int *)(iVar1 + 0x24) = iVar3;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
      }
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x50) + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -4;
  }
  uVar2 = FUN_0056bc10(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x10));
  FUN_00460c70(iVar3 + 0xc,uVar2);
  FUN_0053c8a0();
  return;
}

