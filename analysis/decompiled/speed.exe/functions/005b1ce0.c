/* speed.exe 005b1ce0 FUN_005b1ce0; analysis pseudocode, not buildable source.
 * calls 005b1b60 FUN_005b1b60
 * calls 005ae890 FUN_005ae890
 */

void __thiscall FUN_005b1ce0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar5 != 0) {
      do {
        if (*(int *)(iVar5 + 0x18) == 5) {
          iVar4 = FUN_005ae890(iVar2);
          if ((iVar4 != 0) || (iVar2 == *(int *)(iVar5 + 0x10))) {
            local_18 = 0;
            local_14 = 0;
            cVar3 = FUN_005b1b60(iVar2,iVar5,&local_18);
            if (cVar3 != '\0') {
              puVar1 = (undefined4 *)
                       (*(int *)(param_1 + 0xb4) * 0x10 + 4 + *(int *)(param_1 + 0xac));
              *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
              *puVar1 = local_18;
              puVar1[1] = local_14;
              return;
            }
          }
        }
        else if (iVar2 == *(int *)(iVar5 + 0x10)) {
          local_10 = 0;
          local_c = 0;
          cVar3 = FUN_005b1b60(iVar2,iVar5,&local_10);
          if (cVar3 != '\0') {
            iVar5 = *(int *)(param_1 + 0xb4);
            *(int *)(param_1 + 0xb4) = iVar5 + 1;
            puVar1 = (undefined4 *)(iVar5 * 0x10 + 4 + *(int *)(param_1 + 0xac));
            *puVar1 = local_10;
            puVar1[1] = local_c;
            return;
          }
        }
        iVar5 = *(int *)(iVar5 + 4);
      } while (iVar5 != 0);
      return;
    }
  }
  return;
}

