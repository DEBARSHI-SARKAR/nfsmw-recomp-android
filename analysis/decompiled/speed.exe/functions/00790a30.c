/* speed.exe 00790a30 FUN_00790a30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00790a30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x35; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(0,0,*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

