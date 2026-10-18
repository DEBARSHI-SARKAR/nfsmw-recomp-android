/* speed.exe 0056f340 FUN_0056f340; analysis pseudocode, not buildable source.
 * calls 007398d0 FUN_007398d0
 * calls 00460bc0 FUN_00460bc0
 * calls 00460bf0 FUN_00460bf0
 * calls 00747c40 FUN_00747c40
 * calls 00747bb0 FUN_00747bb0
 */

void __thiscall FUN_0056f340(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  puVar7 = param_1;
  for (iVar5 = 0x45; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0xffff;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4d] = 0;
  puVar7 = param_1 + 0x4e;
  for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  param_1[99] = 0;
  param_1[100] = 0;
  uVar3 = FUN_00460bf0(param_2 + 8);
  uVar3 = FUN_007398d0(uVar3);
  iVar5 = 0;
  piVar6 = (int *)(param_2 + 0x60);
  do {
    iVar1 = *piVar6;
    if ((iVar1 != 1) && (iVar1 != 0)) {
      uVar4 = FUN_00747c40(uVar3,iVar5,iVar1,0,0xffffffff);
      uVar2 = FUN_00747bb0(uVar4);
      *(undefined2 *)((int)param_1 + iVar5 * 2) = uVar2;
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 0x8b);
  uVar3 = FUN_00460bc0(param_2 + 0x28);
  param_1[100] = uVar3;
  return;
}

