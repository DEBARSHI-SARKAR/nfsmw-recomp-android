/* speed.exe 0057e6f0 FUN_0057e6f0; analysis pseudocode, not buildable source.
 * calls 0056b950 FUN_0056b950
 * calls 0056da30 FUN_0056da30
 * calls 0056b7b0 FUN_0056b7b0
 * calls 00663f00 FUN_00663f00
 * calls 0045edd0 FUN_0045edd0
 * calls 00503360 FUN_00503360
 * calls 00518260 FUN_00518260
 * calls 0057e6b0 FUN_0057e6b0
 */

void FUN_0057e6f0(int param_1)

{
  undefined3 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uStack_7;
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  if (param_1 == DAT_008f41c0) {
    return;
  }
  if (DAT_008f41c0 != -1) {
    iVar3 = 0;
    piVar2 = &DAT_008f40f8;
    do {
      if (*piVar2 == DAT_008f41c0) {
        puVar4 = &DAT_008f40f8 + iVar3 * 5;
        goto LAB_0057e735;
      }
      piVar2 = piVar2 + 5;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x8f41c0);
    puVar4 = (undefined4 *)0x0;
LAB_0057e735:
    FUN_00663f00(DAT_0091cf74);
    DAT_0091cf74 = 0;
    if (*(int *)(puVar4[3] + 0x60) != 0) {
      FUN_00503360(puVar4[3],8);
      *(undefined4 *)(puVar4[3] + 0x60) = 0;
    }
    if (*(int *)(puVar4[3] + 0x68) != 0) {
      FUN_00503360(puVar4[3] + 0x40,8);
      *(undefined4 *)(puVar4[3] + 0x68) = 0;
    }
    if (*(int *)(puVar4[3] + 100) != 0) {
      FUN_00503360(puVar4[3] + 0x20,8);
      *(undefined4 *)(puVar4[3] + 100) = 0;
    }
  }
  DAT_008f41c0 = param_1;
  if (param_1 != -1) {
    FUN_0056b950(1,DAT_00925e90 == 3,DAT_00925e90 == 6,1);
    iVar3 = FUN_0056b7b0(DAT_008f41c0);
    if (iVar3 != 0) {
      puVar1 = *(undefined3 **)(iVar3 + 0x10);
      uStack_7 = (undefined1)((ushort)*(undefined2 *)puVar1 >> 8);
      FUN_0045edd0(CONCAT13(uStack_5,*puVar1),
                   CONCAT13(uStack_4,CONCAT12(uStack_5,CONCAT11(*(undefined1 *)((int)puVar1 + 2),
                                                                uStack_7))),
                   CONCAT13(uStack_3,CONCAT12(uStack_4,CONCAT11(uStack_5,*(undefined1 *)
                                                                          ((int)puVar1 + 2)))));
    }
    FUN_0057e6b0(DAT_008f41c0);
  }
  if ((DAT_0091cf90 != 0) && (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x20) == '\0')) {
    FUN_0056da30(0,1);
  }
  FUN_00518260();
  return;
}

