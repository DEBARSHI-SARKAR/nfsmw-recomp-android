/* speed.exe 00723940 FUN_00723940; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00723940(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    piVar2 = (int *)(param_1 + 0x2c4);
    do {
      *(undefined1 *)(*piVar2 + 0xb) = 0;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x2c0));
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  uVar3 = *(int *)(param_1 + 0x848) >> 3;
  puVar5 = *(undefined4 **)(param_1 + 0x84c);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}

