/* speed.exe 0078cb70 FUN_0078cb70; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 * calls 00515e20 FUN_00515e20
 */

void FUN_0078cb70(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_88;
  undefined4 local_87;
  
  local_88 = 0;
  puVar3 = &local_87;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  uVar1 = FUN_0056bc10(0xade22a0e,param_1);
  FUN_00515e20(&local_88,0x80,uVar1);
  FUN_00598970(&DAT_00890978,&DAT_00890978,4,0x417b2601,0x99c73215,0x99c73215,&local_88);
  return;
}

