/* speed.exe 0045d490 FUN_0045d490; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0045d490(int *param_1,code *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == param_1) {
    return;
  }
  piVar1[1] = param_1[1];
  *(int **)param_1[1] = piVar1;
  local_14 = 1;
  while( true ) {
    local_8 = (undefined4 *)0x0;
    local_10 = (undefined4 *)0x0;
    local_c = 0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = piVar1;
    if (piVar1 != (undefined4 *)0x0) break;
LAB_0045d5b3:
    *puVar7 = local_8;
    local_8[1] = puVar7;
    if (local_c < 2) {
      local_8[1] = param_1;
      *param_1 = (int)local_8;
      param_1[1] = (int)puVar7;
      *puVar7 = param_1;
      return;
    }
    local_14 = local_14 * 2;
    piVar1 = local_8;
  }
LAB_0045d4d8:
  local_c = local_c + 1;
  iVar4 = 0;
  iVar2 = 0;
  puVar5 = puVar6;
  local_18 = local_14;
  if (0 < local_14) {
    while( true ) {
      puVar5 = (undefined4 *)*puVar5;
      iVar4 = iVar4 + 1;
      if (puVar5 == piVar1) break;
      if ((puVar5 == (undefined4 *)0x0) || (iVar2 = iVar2 + 1, local_14 <= iVar2))
      goto LAB_0045d510;
    }
    puVar5 = (undefined4 *)0x0;
  }
LAB_0045d510:
  do {
    puVar3 = puVar5;
    puVar7 = puVar6;
    if (iVar4 < 1) {
      if ((local_18 < 1) || (puVar5 == (undefined4 *)0x0)) break;
      if (iVar4 != 0) goto LAB_0045d535;
      local_18 = local_18 + -1;
      puVar6 = (undefined4 *)*puVar5;
      if ((undefined4 *)*puVar5 == piVar1) {
        puVar6 = (undefined4 *)0x0;
      }
    }
    else {
LAB_0045d535:
      if (((local_18 == 0) || (puVar5 == (undefined4 *)0x0)) ||
         (iVar2 = (*param_2)(puVar6,puVar5), 0 < iVar2)) {
        puVar7 = (undefined4 *)*puVar6;
        iVar4 = iVar4 + -1;
        puVar3 = puVar6;
        puVar6 = puVar5;
        if (puVar7 == piVar1) {
          puVar7 = (undefined4 *)0x0;
        }
      }
      else {
        local_18 = local_18 + -1;
        puVar6 = (undefined4 *)*puVar5;
        if ((undefined4 *)*puVar5 == piVar1) {
          puVar6 = (undefined4 *)0x0;
        }
      }
    }
    puVar5 = puVar6;
    puVar6 = puVar7;
    if (local_10 == (undefined4 *)0x0) {
      puVar3[1] = 0;
      local_10 = puVar3;
      local_8 = puVar3;
    }
    else {
      *local_10 = puVar3;
      puVar3[1] = local_10;
      local_10 = puVar3;
    }
  } while( true );
  puVar7 = local_10;
  puVar6 = puVar5;
  if (puVar5 == (undefined4 *)0x0) goto LAB_0045d5b3;
  goto LAB_0045d4d8;
}

