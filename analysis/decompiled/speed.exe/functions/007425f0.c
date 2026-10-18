/* speed.exe 007425f0 FUN_007425f0; analysis pseudocode, not buildable source.
 * calls 004fd5e0 FUN_004fd5e0
 */

void __fastcall FUN_007425f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = FUN_004fd5e0(*(undefined4 *)(param_1 + 0x1284));
  *(undefined4 *)(param_1 + 0x1284) = uVar2;
  uVar2 = FUN_004fd5e0(*(undefined4 *)(param_1 + 0x1288));
  *(undefined4 *)(param_1 + 0x1288) = uVar2;
  uVar2 = FUN_004fd5e0(*(undefined4 *)(param_1 + 0x128c));
  *(undefined4 *)(param_1 + 0x128c) = uVar2;
  puVar4 = (undefined4 *)(param_1 + 0x15c);
  iVar3 = 0x1c;
  do {
    for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar4; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[4] != 0) {
        uVar2 = FUN_004fd5e0(puVar1[4]);
        puVar1[4] = uVar2;
      }
    }
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

