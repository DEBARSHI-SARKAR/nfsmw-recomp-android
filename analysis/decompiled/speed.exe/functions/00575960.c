/* speed.exe 00575960 FUN_00575960; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 00515cc0 FUN_00515cc0
 * calls 005af1c0 FUN_005af1c0
 * calls 005251e0 FUN_005251e0
 */

void __thiscall FUN_00575960(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  char local_24 [36];
  
  if ((*param_1 != 0) && (0 < param_1[0xc])) {
    iVar6 = param_2 << 2;
    iVar4 = 0;
    do {
      iVar1 = iVar4 + 1;
      local_28 = 0;
      _sprintf(local_24,(char *)(param_1 + 3),iVar1);
      if (iVar4 + param_2 < param_1[0xd]) {
        uVar2 = *(undefined4 *)(*param_1 + 0x10);
        uVar3 = FUN_005af1c0(local_24);
        iVar4 = FUN_005251e0(uVar2,uVar3);
        puVar5 = *(undefined4 **)(param_1[0xe] + iVar6);
      }
      else {
        uVar2 = *(undefined4 *)(*param_1 + 0x10);
        uVar3 = FUN_005af1c0(local_24);
        iVar4 = FUN_005251e0(uVar2,uVar3);
        puVar5 = &local_28;
      }
      FUN_00515cc0(iVar4,puVar5);
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x2000000;
      iVar6 = iVar6 + 4;
      iVar4 = iVar1;
    } while (iVar1 < param_1[0xc]);
  }
  return;
}

