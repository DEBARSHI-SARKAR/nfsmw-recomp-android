/* speed.exe 004cfe20 FUN_004cfe20; analysis pseudocode, not buildable source.
 * calls 004cd570 FUN_004cd570
 * calls 007c4b80 FUN_007c4b80
 * calls 004cf520 FUN_004cf520
 * calls 00465fd0 FUN_00465fd0
 */

void __thiscall FUN_004cfe20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  piVar4 = (int *)(param_1 + 8);
  local_4 = 2;
  do {
    if (*piVar4 != 0) {
      FUN_004cd570(param_2);
      puVar3 = (undefined4 *)*piVar4;
      if (*(char *)(puVar3 + 8) == '\0') {
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        *piVar4 = 0;
      }
    }
    piVar4 = piVar4 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  sVar2 = FUN_007c4b80();
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + sVar2;
  if (*(short *)(param_1 + 0x12) < 0) {
    *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x10);
    iVar5 = -1;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar5 = 1;
    }
    else if (iVar5 == -1) {
      return;
    }
    puVar3 = (undefined4 *)FUN_00465fd0(1,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 4);
      *puVar3 = &PTR_FUN_00896ad0;
      puVar3[2] = 0x7fff;
      puVar3[3] = 0x1000;
      puVar3[1] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = uVar1;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
    }
    *(undefined4 **)(param_1 + 8 + iVar5 * 4) = puVar3;
    puVar3[4] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_004cf520(puVar3 + 1);
  }
  return;
}

