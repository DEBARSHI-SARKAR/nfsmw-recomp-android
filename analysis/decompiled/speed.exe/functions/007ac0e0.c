/* speed.exe 007ac0e0 FUN_007ac0e0; analysis pseudocode, not buildable source.
 * calls 0056dbe0 FUN_0056dbe0
 */

void __thiscall FUN_007ac0e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0056dbe0(0xb);
  uVar2 = (uint)*(byte *)(iVar1 + 8);
  if (param_3 == -0x6edfbf62) {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
      uVar2 = 2;
    }
  }
  else if ((param_3 == -0x4a68e40f) && (uVar2 = uVar2 + 1, 2 < uVar2)) {
    uVar2 = 0;
  }
  iVar1 = FUN_0056dbe0(0xb);
  *(char *)(iVar1 + 8) = (char)uVar2;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

