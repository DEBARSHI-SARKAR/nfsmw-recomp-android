/* speed.exe 0076c780 FUN_0076c780; analysis pseudocode, not buildable source.
 * calls 0045d760 FUN_0045d760
 * calls 005d20f0 FUN_005d20f0
 * calls 007639b0 FUN_007639b0
 * calls 005ced30 FUN_005ced30
 */

void __fastcall FUN_0076c780(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_1[5] + 8) & 1) == 0) {
    FUN_0045d760();
  }
  puVar1 = (undefined4 *)param_1[5];
  *param_1 = puVar1[1];
  local_8 = puVar1 + 4;
  local_4 = *puVar1;
  iVar3 = 0;
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    iVar3 = (int)puVar1 - puVar1[3];
  }
  if (puVar1 != (undefined4 *)puVar1[3]) {
    FUN_005d20f0(1,&local_4,&local_8,iVar3);
  }
  uVar2 = FUN_005ced30(0x41727469);
  FUN_007639b0(uVar2,0);
  *(undefined4 *)(param_1[5] + 0xc) = param_1[5];
  *(uint *)(param_1[5] + 8) = *(uint *)(param_1[5] + 8) | 1;
  return;
}

