/* speed.exe 00727990 FUN_00727990; analysis pseudocode, not buildable source.
 * calls 004624a0 FUN_004624a0
 */

void __thiscall FUN_00727990(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_c;
  int local_8;
  int local_4;
  
  piVar6 = *(int **)(param_1 + 0x28);
  piVar1 = (int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0xd) = 1;
  if (piVar6 != piVar1) {
    while (piVar6[2] != param_2) {
      piVar6 = (int *)*piVar6;
      if (piVar6 == piVar1) {
        return;
      }
    }
    piVar2 = (int *)piVar6[1];
    local_4 = piVar6[3];
    *(undefined1 *)(piVar6 + 4) = 0;
    *(undefined1 *)((int)piVar6 + 0x11) = 0;
    if ((piVar2 != piVar1) && ((char)piVar2[4] == '\0')) {
      piVar6[2] = piVar6[2] - piVar2[3];
      piVar6[3] = piVar2[3] + local_4;
      iVar3 = *piVar2;
      piVar4 = (int *)piVar2[1];
      *piVar4 = iVar3;
      *(int **)(iVar3 + 4) = piVar4;
      puVar5 = *(undefined4 **)(param_1 + 0x24);
      *puVar5 = piVar2;
      *(int **)(param_1 + 0x24) = piVar2;
      piVar2[1] = (int)puVar5;
      *piVar2 = param_1 + 0x20;
    }
    piVar2 = (int *)*piVar6;
    if ((piVar2 != piVar1) && ((char)piVar2[4] == '\0')) {
      piVar6[3] = piVar6[3] + piVar2[3];
      iVar3 = *piVar2;
      piVar1 = (int *)piVar2[1];
      *piVar1 = iVar3;
      *(int **)(iVar3 + 4) = piVar1;
      puVar5 = *(undefined4 **)(param_1 + 0x24);
      *puVar5 = piVar2;
      *(int **)(param_1 + 0x24) = piVar2;
      piVar2[1] = (int)puVar5;
      *piVar2 = param_1 + 0x20;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_4;
    if (*(int *)(param_1 + 0x18) < piVar6[3]) {
      *(int *)(param_1 + 0x18) = piVar6[3];
    }
    if ((*(char *)(param_1 + 0xc) != '\0') && (DAT_0090e674 != 0)) {
      local_8 = param_2;
      local_c = param_1;
      FUN_004624a0("CODEINE",0x1b,&local_c,0xc);
    }
  }
  return;
}

