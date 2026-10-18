/* speed.exe 005eba50 FUN_005eba50; analysis pseudocode, not buildable source.
 * calls 005eb9e0 FUN_005eb9e0
 */

void __fastcall FUN_005eba50(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool local_a;
  int *local_8;
  undefined1 local_4 [4];
  
  bVar3 = *(int *)(DAT_0091e000 + 0x1960) != 0;
  local_8 = (int *)0x0;
  FUN_005eb9e0(&local_8,local_4);
  local_a = local_8 == (int *)0x0;
  if (local_a) {
    bVar4 = false;
  }
  else {
    iVar2 = (**(code **)(*local_8 + 0x114))();
    bVar4 = iVar2 == 2;
  }
  local_a = !local_a;
  if ((bVar3) || (local_a)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x2d0) = uVar1;
  if ((bVar3) || (local_a)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x2ce) = uVar1;
  if ((!bVar3) && ((!local_a || (bVar4)))) {
    *(undefined1 *)(param_1 + 0x2cf) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x2cf) = 0;
  return;
}

