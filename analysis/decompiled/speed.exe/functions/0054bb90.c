/* speed.exe 0054bb90 FUN_0054bb90; analysis pseudocode, not buildable source.
 * calls 007a30c0 FUN_007a30c0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005fb710 FUN_005fb710
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_0054bb90(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar1 = (int *)(param_1 + 0xfc);
  piVar6 = *(int **)(param_1 + 0xfc);
  while (piVar6 != piVar1) {
    iVar5 = *piVar6;
    piVar2 = (int *)piVar6[1];
    *piVar2 = iVar5;
    *(int **)(iVar5 + 4) = piVar2;
    thunk_FUN_007c7250(piVar6);
    piVar6 = (int *)*piVar1;
  }
  iVar5 = FUN_005fb710(*(undefined4 *)(DAT_0091cf90 + 0x18c));
  piVar6 = _malloc(0x14);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6[2] = iVar5;
    *(undefined1 *)(piVar6 + 3) = 1;
    piVar6[4] = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x100);
  *puVar3 = piVar6;
  *(int **)(param_1 + 0x100) = piVar6;
  piVar6[1] = (int)puVar3;
  *piVar6 = (int)piVar1;
  *(int *)(param_1 + 0x104) = *piVar1;
  uVar4 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  FUN_007a30c0(uVar4);
  return;
}

