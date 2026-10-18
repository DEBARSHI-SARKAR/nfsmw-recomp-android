/* speed.exe 007b37a0 FUN_007b37a0; analysis pseudocode, not buildable source.
 * calls 0073a110 FUN_0073a110
 * calls 00652ad0 _malloc
 * calls 00460ca0 FUN_00460ca0
 * calls 00652ac0 _malloc
 */

void __fastcall FUN_007b37a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008831a7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x4c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00460ca0(puVar1 + 2,"CARTYPENAME_ANY",0x40);
    puVar1[0x12] = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x3c);
  puVar5 = (undefined4 *)(param_1 + 0x38);
  *puVar4 = puVar1;
  *(undefined4 **)(param_1 + 0x3c) = puVar1;
  puVar1[1] = puVar4;
  *puVar1 = puVar5;
  local_18 = 0;
  do {
    local_4 = 0xffffffff;
    iVar6 = DAT_009b09d8 + local_18;
    if (iVar6 != 0) {
      puVar1 = _malloc(0x4c);
      local_4 = 1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar6 + 0x50);
        FUN_00460ca0(puVar1 + 2,iVar6,0x40);
        puVar1[0x12] = uVar3;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x3c);
      *puVar4 = puVar1;
      *(undefined4 **)(param_1 + 0x3c) = puVar1;
      puVar1[1] = puVar4;
      *puVar1 = puVar5;
    }
    local_18 = local_18 + 0xd0;
  } while (local_18 < 0x4440);
  *(undefined4 *)(param_1 + 0x40) = *puVar5;
  iVar6 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x44);
  do {
    local_4 = 0xffffffff;
    piVar2 = _malloc(0x4c);
    local_4 = 2;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      uVar3 = FUN_0073a110(iVar6);
      FUN_00460ca0(piVar2 + 2,uVar3,0x40);
      piVar2[0x12] = iVar6;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x48);
    *puVar4 = piVar2;
    iVar6 = iVar6 + 1;
    *(int **)(param_1 + 0x48) = piVar2;
    local_4 = 0xffffffff;
    piVar2[1] = (int)puVar4;
    *piVar2 = (int)puVar1;
  } while (iVar6 < 0x8b);
  for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    if (puVar4[0x12] == DAT_009b9eb8) goto LAB_007b3902;
  }
  puVar4 = (undefined4 *)0x0;
LAB_007b3902:
  *(undefined4 **)(param_1 + 0x4c) = puVar4;
  piVar2 = _malloc(0x4c);
  local_4 = 3;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00460ca0(piVar2 + 2,"CARPARTNAME_ANY",0x40);
    piVar2[0x12] = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0x54) = piVar2;
  *piVar2 = param_1 + 0x50;
  piVar2[1] = (int)puVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = local_c;
  return;
}

