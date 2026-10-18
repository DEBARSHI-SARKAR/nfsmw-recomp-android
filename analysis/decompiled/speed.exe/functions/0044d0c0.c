/* speed.exe 0044d0c0 FUN_0044d0c0; analysis pseudocode, not buildable source.
 * calls 004498b0 FUN_004498b0
 * calls 0044c090 FUN_0044c090
 */

void __fastcall FUN_0044d0c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar4; puVar1 = (undefined4 *)*puVar1) {
    uVar2 = puVar1[3];
    piVar5 = (int *)FUN_004498b0(puVar1[2]);
    cVar3 = (**(code **)(*piVar5 + 4))(uVar2,*(undefined4 *)(param_1 + 0x110));
    if (cVar3 == '\0') {
      (**(code **)(*piVar5 + 8))();
      (**(code **)*piVar5)(1);
    }
    else {
      FUN_0044c090(piVar5);
    }
  }
  return;
}

