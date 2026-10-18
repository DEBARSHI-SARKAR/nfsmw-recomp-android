/* speed.exe 0053f850 FUN_0053f850; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 0053f560 FUN_0053f560
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 00513b50 FUN_00513b50
 */

void __thiscall FUN_0053f850(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_88;
  undefined4 local_87;
  
  FUN_0053f560(0);
  local_88 = 0;
  puVar3 = &local_87;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  if (param_3 == 0) {
    uVar1 = FUN_0056bc10(0xa4b092ee,&DAT_0091c39c);
    FUN_00515e20(&local_88,0x80,uVar1);
    FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,
                 &local_88);
    DAT_0091ca90 = 1;
    return;
  }
  if ((*(char *)(param_1 + 0xf6) == '\0') || (param_3 != -0x6c)) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
  }
  return;
}

