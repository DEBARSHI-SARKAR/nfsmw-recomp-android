/* speed.exe 005d29d0 FUN_005d29d0; analysis pseudocode, not buildable source.
 * calls 0045cd20 __break
 * calls 005d0450 FUN_005d0450
 * calls 00464780 FUN_00464780
 * calls 00465a70 FUN_00465a70
 */

undefined4 * __thiscall FUN_005d29d0(int param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 < 0x401) {
    uVar3 = param_2 - 1 >> 4;
    if (*(int *)(param_1 + uVar3 * 4) == 0) {
      cVar1 = FUN_005d0450(uVar3);
      if (cVar1 == '\0') {
        FUN_00464780("Out of Fastmem memory\n");
                    /* WARNING: Subroutine does not return */
        __break();
      }
    }
    puVar2 = *(undefined4 **)(param_1 + uVar3 * 4);
    *(undefined4 *)(param_1 + uVar3 * 4) = *puVar2;
  }
  else {
    puVar2 = (undefined4 *)FUN_00465a70(param_2,0);
  }
  puVar4 = puVar2;
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return puVar2;
}

