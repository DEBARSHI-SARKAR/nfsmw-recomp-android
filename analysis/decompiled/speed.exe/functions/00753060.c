/* speed.exe 00753060 FUN_00753060; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 * calls 00500b50 FUN_00500b50
 * calls 00500b00 FUN_00500b00
 */

int __thiscall FUN_00753060(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  if ((param_6 != 0) && (local_8 = FUN_00500b00(param_6), local_8 == 0)) {
    return 0;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(param_2 + iVar5 * 4);
      if ((iVar1 != 0) && ((local_8 == 0 || (iVar3 = FUN_00500b50(iVar1), iVar3 == local_8)))) {
        for (puVar4 = *(undefined4 **)(param_1 + 0x38); puVar4 != (undefined4 *)(param_1 + 0x38);
            puVar4 = (undefined4 *)*puVar4) {
          if (puVar4[2] == iVar1) goto LAB_00753113;
        }
        puVar4 = (undefined4 *)FUN_00466340(DAT_009b0a08);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[2] = iVar1;
          *(undefined2 *)(puVar4 + 3) = 0;
          *(undefined1 *)((int)puVar4 + 0xe) = 0;
          *(undefined1 *)((int)puVar4 + 0xf) = 0;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x3c);
        *puVar2 = puVar4;
        *(undefined4 **)(param_1 + 0x3c) = puVar4;
        puVar4[1] = puVar2;
        *puVar4 = (undefined4 *)(param_1 + 0x38);
LAB_00753113:
        *(short *)(puVar4 + 3) = *(short *)(puVar4 + 3) + 1;
        *(undefined4 **)(param_4 + iVar6 * 4) = puVar4;
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  if (iVar6 < param_5) {
    puVar4 = (undefined4 *)(param_4 + iVar6 * 4);
    for (param_5 = param_5 - iVar6; param_5 != 0; param_5 = param_5 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return iVar6;
}

