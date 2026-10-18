/* speed.exe 005a61e0 FUN_005a61e0; analysis pseudocode, not buildable source.
 * calls 005251e0 FUN_005251e0
 * calls 00516c90 FUN_00516c90
 * calls 005af1c0 FUN_005af1c0
 * calls 005a5fe0 FUN_005a5fe0
 * calls 00652ac0 _malloc
 * calls 00585b50 FUN_00585b50
 * calls 00460ca0 FUN_00460ca0
 */

void __fastcall FUN_005a61e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x34);
  FUN_00516c90(0x89d332a9,*(undefined4 *)(param_1 + 0x10),0);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
  if (*(int *)(param_1 + 0x124) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_005af1c0("HELP_TEXT_LINE1");
    iVar4 = FUN_005251e0(uVar2,uVar3);
    piVar5 = _malloc(0x54);
    piVar7 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[0xd] = 0;
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      piVar5[0x12] = 0;
      piVar5[0x13] = -0x6ee3f5b5;
      piVar5[0x14] = 0x72619778;
      piVar7 = piVar5;
    }
    *(int **)(param_1 + 0x124) = piVar7;
    iVar6 = FUN_00585b50(*(undefined4 *)(iVar4 + 0x24));
    iVar4 = *(int *)(iVar4 + 0x74);
    *piVar7 = param_1;
    piVar7[0xc] = 7;
    piVar7[0xb] = iVar4;
    FUN_00460ca0(piVar7 + 3,"HELP_TEXT_LINE%d",0x1f);
    piVar7[1] = iVar6;
    *(undefined4 *)(*(int *)(param_1 + 0x124) + 8) = *(undefined4 *)(param_1 + 0x128);
    FUN_005a5fe0(*(undefined4 *)(iVar1 + 0xdc));
  }
  *(undefined1 *)(param_1 + 0x2cc) = 1;
  return;
}

