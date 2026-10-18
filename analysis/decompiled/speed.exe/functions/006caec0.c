/* speed.exe 006caec0 FUN_006caec0; analysis pseudocode, not buildable source.
 * calls 005176d0 FUN_005176d0
 */

void FUN_006caec0(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  if (DAT_00982d18 != 0) {
    puVar4 = local_8;
    (**(code **)(*DAT_00983e58 + 0x4c))(DAT_00983e58,0,puVar4,0,0);
    FUN_005176d0(local_8[0],DAT_00982d18,DAT_008faf18);
    if (*(int *)(DAT_00982d18 + 8) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(DAT_00982d18 + 8) + DAT_00982d18);
    }
    uVar2 = *(uint *)(unaff_ESI + 0x40);
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    (**(code **)(*DAT_00983e58 + 0x50))(DAT_00983e58,0);
  }
  return;
}

