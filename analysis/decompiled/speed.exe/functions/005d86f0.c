/* speed.exe 005d86f0 FUN_005d86f0; analysis pseudocode, not buildable source.
 * calls 0045cd20 __break
 * calls 005d83e0 FUN_005d83e0
 * calls 005d0450 FUN_005d0450
 * calls 00652ad0 _malloc
 * calls 00464780 FUN_00464780
 */

void __thiscall FUN_005d86f0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874b1f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = param_2 - 1;
  puVar2 = _malloc(param_2 << 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (-1 < (int)(param_2 - 1)) {
    puVar3 = puVar2 + 3;
    uVar5 = param_2;
    do {
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = &DAT_00890978;
      puVar3 = puVar3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_1 = puVar2;
  for (iVar4 = (param_2 & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = DAT_00925b30;
  if ((DAT_00925b30 == (undefined4 *)0x0) &&
     (cVar1 = FUN_005d0450(0), puVar2 = DAT_00925b30, cVar1 == '\0')) {
    FUN_00464780("Out of Fastmem memory\n");
                    /* WARNING: Subroutine does not return */
    __break();
  }
  DAT_00925b30 = (undefined4 *)*puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  param_1[4] = puVar2;
  FUN_005d83e0(9);
  ExceptionList = local_c;
  return;
}

