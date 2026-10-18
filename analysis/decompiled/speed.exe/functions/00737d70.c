/* speed.exe 00737d70 FUN_00737d70; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

void __fastcall FUN_00737d70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x23c);
  puVar3 = (undefined4 *)(param_1 + 0x5a8);
  for (iVar1 = 0xdb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_00460bf0("CARBONFIBRE");
  if (iVar1 != *(int *)(param_1 + 0x5ac)) {
    *(int *)(param_1 + 0x5ac) = iVar1;
    *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0x5b8)) {
    *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x5bc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0x5c4)) {
    *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x5c8) = 0xffffffff;
  }
  iVar1 = FUN_00460bf0("CARBONFIBRE");
  if (iVar1 != *(int *)(param_1 + 0x5d0)) {
    *(int *)(param_1 + 0x5d0) = iVar1;
    *(undefined4 *)(param_1 + 0x5d4) = 0xffffffff;
  }
  iVar1 = FUN_00460bf0("CARBONFIBRE");
  if (iVar1 != *(int *)(param_1 + 0x5dc)) {
    *(int *)(param_1 + 0x5dc) = iVar1;
    *(undefined4 *)(param_1 + 0x5e0) = 0xffffffff;
  }
  return;
}

