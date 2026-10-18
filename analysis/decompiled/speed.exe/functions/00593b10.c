/* speed.exe 00593b10 FUN_00593b10; analysis pseudocode, not buildable source.
 * calls 00588d60 FUN_00588d60
 * calls 00573140 FUN_00573140
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00593b10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == 0) {
      FUN_00514d10(iVar1,0x16a259,1);
      return;
    }
    iVar2 = FUN_00588d60(*(undefined4 *)(param_1 + 0x38));
    iVar3 = FUN_00588d60(iVar3);
    uVar5 = (1 - iVar2) + iVar3;
    if ((uVar5 == 0) || (*(uint *)(param_1 + 0x10c) < uVar5)) {
      FUN_00514d10(iVar1,0x16a259,1);
      return;
    }
    uVar4 = FUN_00573140("POS%d",uVar5,1);
    FUN_00514d10(*(undefined4 *)(param_1 + 0x50),uVar4);
  }
  return;
}

