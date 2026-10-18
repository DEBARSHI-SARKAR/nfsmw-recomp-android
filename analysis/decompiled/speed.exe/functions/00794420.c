/* speed.exe 00794420 FUN_00794420; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0078a310 FUN_0078a310
 */

void FUN_00794420(undefined1 *param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_ff [62];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  param_1[0x408] = 1;
  piVar2 = (int *)*param_2;
  while (piVar2 != param_2) {
    uVar1 = *(ushort *)((int)piVar2 + 10);
    local_100 = 0;
    puVar6 = local_ff;
    for (iVar5 = 0x3c; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    uVar7 = (uVar1 & 0x7f8) >> 3;
    iVar5 = 0;
    if (uVar7 != 0) {
      do {
        local_104 = 0;
        FUN_0078a3a0(&local_104,8);
        *(undefined1 *)((int)local_ff + iVar5 + -1) = (undefined1)local_104;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar7);
    }
    iVar5 = 0;
    if (uVar7 != 0) {
      do {
        FUN_0078a310(*(undefined1 *)((int)local_ff + iVar5 + -1),8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar7);
    }
    if (((char)piVar2[2] == *(char *)((int)piVar2 + 9)) &&
       (cVar4 = *(char *)((int)piVar2 + 10) + (char)(uVar1 >> 3) * -8, cVar4 != '\0')) {
      local_104 = 0;
      FUN_0078a3a0(&local_104,cVar4);
      FUN_0078a310(local_104,cVar4);
    }
    iVar5 = *(int *)*param_2;
    piVar3 = (int *)((int *)*param_2)[1];
    *piVar3 = iVar5;
    *(int **)(iVar5 + 4) = piVar3;
    thunk_FUN_007c7250(piVar2);
    piVar2 = (int *)*param_2;
  }
  return;
}

