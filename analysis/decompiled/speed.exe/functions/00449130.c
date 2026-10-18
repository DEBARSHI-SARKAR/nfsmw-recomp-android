/* speed.exe 00449130 FUN_00449130; analysis pseudocode, not buildable source.
 * calls 00448e50 FUN_00448e50
 * calls 004662e0 FUN_004662e0
 * calls 00466340 FUN_00466340
 * calls 00448db0 FUN_00448db0
 */

undefined4 FUN_00449130(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*param_1 == 0xe34010) {
    uVar4 = (int)param_1 + 0x17U & 0xfffffff0;
    if (0 < (int)((param_1[1] - uVar4) + 8 + (int)param_1)) {
      if (DAT_0090d9b4 == '\0') {
        DAT_0090d9b0 = FUN_004662e0(0x3c,0x51,"Anim_CNFSAnimBank_SlotPool",0);
        DAT_0090d9b4 = '\x01';
      }
      iVar2 = FUN_00466340(DAT_0090d9b0);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00448e50(param_1);
      }
      FUN_00448db0(uVar4,(param_1[1] - uVar4) + 8 + (int)param_1);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(iVar2 + 4);
      }
      *DAT_0090db28 = puVar3;
      puVar1 = puVar3;
      puVar3[1] = DAT_0090db28;
      DAT_0090db28 = puVar1;
      *puVar3 = &DAT_0090db24;
    }
    return 1;
  }
  return 0;
}

