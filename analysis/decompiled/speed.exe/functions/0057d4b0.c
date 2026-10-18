/* speed.exe 0057d4b0 FUN_0057d4b0; analysis pseudocode, not buildable source.
 * calls 005253b0 FUN_005253b0
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 * calls 0056bb30 FUN_0056bb30
 */

void __fastcall FUN_0057d4b0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float local_ac;
  float local_a8;
  undefined1 local_a4 [4];
  undefined4 local_a0 [39];
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x330) + 0x1c);
  *puVar1 = *puVar1 | 2;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100);
  puVar4 = local_a0;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  *(undefined2 *)puVar4 = 0;
  FUN_0056bb30(local_a0,(iVar3 - *(int *)(param_1 + 0x32c)) + 1,uVar2);
  FUN_005253b0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x330),&DAT_008941f8,
               local_a0);
  FUN_00515520(*(undefined4 *)(param_1 + 0x330),&local_ac,&local_a8);
  local_a8 = local_ac + *(float *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x2c) + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  FUN_00514fd0(uVar2,local_a4,&local_ac);
  FUN_00524cc0(uVar2,local_a8,local_ac);
  return;
}

