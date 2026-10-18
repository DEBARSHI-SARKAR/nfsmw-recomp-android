/* speed.exe 0074b420 FUN_0074b420; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0074b420(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  iVar2 = *(int *)(uVar1 + 4);
  uVar5 = uVar1 + 8;
  *param_2 = uVar5;
  while (uVar5 < iVar2 + 8 + uVar1) {
    puVar3 = (undefined4 *)*param_2;
    switch(*puVar3) {
    case 0x3b602:
      *(undefined4 **)(param_1 + 8) = puVar3 + 2;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      break;
    case 0x3b603:
      if ((*(int *)(param_1 + 8) != 0) && (puVar3[1] == *(int *)(*(int *)(param_1 + 8) + 0x20) << 2)
         ) {
        *(undefined4 **)(param_1 + 0xc) = puVar3 + 2;
      }
      break;
    case 0x3b604:
      if ((*(int *)(param_1 + 8) != 0) && (puVar3[1] == *(int *)(*(int *)(param_1 + 8) + 0x20) << 2)
         ) {
        *(undefined4 **)(param_1 + 0x10) = puVar3 + 2;
      }
      break;
    case 0x3b605:
      iVar4 = *(int *)(param_1 + 8);
      if ((((iVar4 != 0) && (*(int *)(param_1 + 0xc) != 0)) && (*(int *)(param_1 + 0x10) != 0)) &&
         (puVar3[1] == *(int *)(iVar4 + 0x1c) * *(int *)(iVar4 + 0x18))) {
        *(undefined4 **)(param_1 + 0x14) = puVar3 + 2;
      }
      break;
    case 0x3b607:
      if ((*(int *)(param_1 + 8) != 0) && (puVar3[1] == *(int *)(*(int *)(param_1 + 8) + 0x14) << 2)
         ) {
        *(undefined4 **)(param_1 + 0x18) = puVar3 + 2;
      }
      break;
    case 0x3b608:
      if ((*(int *)(param_1 + 8) != 0) && (puVar3[1] == *(int *)(*(int *)(param_1 + 8) + 0x14) << 3)
         ) {
        *(undefined4 **)(param_1 + 0x1c) = puVar3 + 2;
      }
    }
    uVar5 = *(int *)(*param_2 + 4) + 8 + *param_2;
    *param_2 = uVar5;
  }
  return;
}

