/* speed.exe 005fdae0 FUN_005fdae0; analysis pseudocode, not buildable source.
 * calls 005e5a90 FUN_005e5a90
 * calls 005faa20 FUN_005faa20
 * calls 00503c50 FUN_00503c50
 * calls 00503c30 FUN_00503c30
 */

void __fastcall FUN_005fdae0(int param_1)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  bool local_4;
  
  *(undefined1 *)(param_1 + 0x2ca) = *(undefined1 *)(param_1 + 0x2ce);
  *(undefined1 *)(param_1 + 0x2cb) = *(undefined1 *)(param_1 + 0x2d0);
  *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(param_1 + 0x2ce);
  if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
     (iVar6 = FUN_005faa20(), iVar6 != 5)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0x2cd) = uVar7;
  local_4 = DAT_0091e00a != '\0';
  local_14 = CONCAT22(CONCAT11(local_4,local_4),CONCAT11(local_4,local_4));
  local_10 = local_14;
  local_c = local_14;
  local_8 = local_14;
  if ((!local_4) && (DAT_009885c8 == 0)) {
    uVar1 = *(undefined1 *)(param_1 + 0x2ca);
    local_14 = (uint)CONCAT12(uVar1,CONCAT11(uVar1,uVar1)) << 8;
    local_10 = CONCAT13(uVar1,CONCAT12(uVar1,CONCAT11(uVar1,uVar1)));
    local_c = CONCAT13(*(undefined1 *)(param_1 + 0x2c9),
                       CONCAT12(*(undefined1 *)(param_1 + 0x2cb),
                                CONCAT11(*(undefined1 *)(param_1 + 0x2cb),
                                         *(undefined1 *)(param_1 + 0x2cf))));
    local_8 = CONCAT13(1,CONCAT12(uVar7,CONCAT11(*(undefined1 *)(param_1 + 0x2cc),
                                                 *(undefined1 *)(param_1 + 0x2c8))));
  }
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      puVar2 = *(ushort **)(*(int *)(param_1 + 0x2c4) + uVar9 * 4);
      bVar8 = (byte)puVar2[1];
      bVar5 = bVar8 >> 3 & 1;
      if (((puVar2[1] & 1) == 0) || (*(char *)((int)&local_14 + (uint)*puVar2) == '\0')) {
        if (bVar5 != 0) {
          if (*(int *)(puVar2 + 4) != 0) {
            *(undefined1 *)(*(int *)(puVar2 + 4) + 0x28) = 0;
          }
          if (*(int *)(puVar2 + 6) != 0) {
            FUN_00503c50();
          }
          *(byte *)(puVar2 + 1) = (byte)puVar2[1] & 0xf7;
        }
      }
      else {
        if ((bVar5 == 0) && ((bVar8 >> 2 & 1) != 0)) {
          FUN_005e5a90();
          if (*(int *)(puVar2 + 4) != 0) {
            *(undefined1 *)(*(int *)(puVar2 + 4) + 0x2b) = 1;
            *(undefined1 *)(*(int *)(puVar2 + 4) + 0x28) = 1;
          }
          if (*(int *)(puVar2 + 6) != 0) {
            FUN_00503c30();
          }
          *(byte *)(puVar2 + 1) = (byte)puVar2[1] | 8;
        }
        iVar6 = *(int *)(param_1 + 0x2c4);
        iVar3 = *(int *)(param_1 + 0x2c0);
        uVar4 = *(undefined4 *)(iVar6 + uVar9 * 4);
        *(undefined4 *)(iVar6 + uVar9 * 4) = *(undefined4 *)(iVar6 + iVar3 * 4);
        *(undefined4 *)(iVar6 + iVar3 * 4) = uVar4;
        *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 700));
  }
  return;
}

