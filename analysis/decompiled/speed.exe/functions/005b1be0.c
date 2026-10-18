/* speed.exe 005b1be0 FUN_005b1be0; analysis pseudocode, not buildable source.
 * calls 005b1b60 FUN_005b1b60
 * calls 005ae890 FUN_005ae890
 */

void __thiscall FUN_005b1be0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    for (iVar2 = *(int *)(param_1 + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 0x18) == 5) {
        iVar5 = FUN_005ae890(iVar3);
        if ((iVar5 != 0) || (iVar3 == *(int *)(iVar2 + 0x10))) {
          local_18 = 0;
          local_14 = 0;
          cVar4 = FUN_005b1b60(iVar3,iVar2,&local_18);
          if (cVar4 != '\0') {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb0) * 0x10 + 4 + *(int *)(param_1 + 0xac));
            *puVar1 = local_18;
            puVar1[1] = local_14;
            break;
          }
        }
      }
      else if (iVar3 == *(int *)(iVar2 + 0x10)) {
        local_10 = 0;
        local_c = 0;
        cVar4 = FUN_005b1b60(iVar3,iVar2,&local_10);
        if (cVar4 != '\0') {
          puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb0) * 0x10 + 4 + *(int *)(param_1 + 0xac));
          *puVar1 = local_10;
          puVar1[1] = local_c;
          break;
        }
      }
    }
    *(int *)(*(int *)(param_1 + 0xb0) * 0x10 + *(int *)(param_1 + 0xac)) = param_2;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  return;
}

