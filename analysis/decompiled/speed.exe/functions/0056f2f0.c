/* speed.exe 0056f2f0 FUN_0056f2f0; analysis pseudocode, not buildable source.
 * calls 00747bb0 FUN_00747bb0
 * calls 00739c70 FUN_00739c70
 */

void __fastcall FUN_0056f2f0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_00739c70(iVar3);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + iVar3 * 2) = 0xffff;
    }
    else {
      FUN_00747bb0(iVar2);
      uVar1 = FUN_00747bb0(iVar2);
      *(undefined2 *)(param_1 + iVar3 * 2) = uVar1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x8b);
  return;
}

