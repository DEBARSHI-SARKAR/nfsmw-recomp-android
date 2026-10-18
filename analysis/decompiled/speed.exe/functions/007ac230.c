/* speed.exe 007ac230 FUN_007ac230; analysis pseudocode, not buildable source.
 * calls 00515c00 FUN_00515c00
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007ac230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0056dbe0(0xb);
  if (*(char *)(iVar1 + 0xb) == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = 0x70dfe5c2;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = 0x417b2604;
  }
  FUN_00515c00(uVar2,uVar3);
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0x8b8e913a);
  return;
}

