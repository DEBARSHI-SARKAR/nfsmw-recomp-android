/* speed.exe 00835920 FUN_00835920; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083c140 FUN_0083c140
 */

void FUN_00835920(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar3 = 0;
  iVar4 = param_1;
  do {
    uVar8 = 0x2c;
    puVar6 = &DAT_00890978;
    uVar5 = 0x20;
    iVar2 = iVar4;
    iVar7 = iVar3;
    uVar1 = FUN_0083a670();
    iVar2 = FUN_0083c140(uVar1,iVar2,uVar5,puVar6,iVar7,uVar8);
    if (iVar2 < 1) {
      *(int *)(param_1 + 0x80) = iVar3;
      return;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x20;
  } while (iVar3 < 4);
  *(int *)(param_1 + 0x80) = iVar3;
  return;
}

