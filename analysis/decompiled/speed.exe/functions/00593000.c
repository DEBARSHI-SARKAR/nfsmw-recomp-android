/* speed.exe 00593000 FUN_00593000; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00593000(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + -4;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) + -4;
    }
    if (*(int *)(param_1 + 0xc) != iVar1) {
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      FUN_00514cc0(uVar2);
      FUN_00514d10(uVar2,0x1ca7c0,1);
      uVar2 = *(undefined4 *)(param_1 + 0x80);
      FUN_00514cc0(uVar2);
      FUN_00514d10(uVar2,0x1ca7c0,1);
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x80);
  }
  FUN_00514c70(uVar2);
  FUN_00514d10(uVar2,0x16a259,1);
  return;
}

