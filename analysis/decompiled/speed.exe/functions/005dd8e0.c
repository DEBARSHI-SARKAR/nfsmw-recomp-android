/* speed.exe 005dd8e0 FUN_005dd8e0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 */

void __fastcall FUN_005dd8e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_00452430();
  uVar2 = uVar2 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  iVar1 = *(int *)(param_1 + 0x78);
  uVar4 = 0;
  uVar3 = uVar2;
  do {
    uVar3 = *(uint *)(param_1 + 0x70) & uVar3;
    if (*(uint *)(iVar1 + uVar3 * 8) == uVar2) {
      *(undefined4 *)(iVar1 + uVar3 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + uVar3 * 8) = 0;
      return;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 <= *(uint *)(param_1 + 0x74));
  return;
}

