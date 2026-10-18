/* speed.exe 0044b2c0 FUN_0044b2c0; analysis pseudocode, not buildable source.
 * calls 0044b1f0 FUN_0044b1f0
 * calls 004662e0 FUN_004662e0
 * calls 00466340 FUN_00466340
 * calls 0044b1c0 FUN_0044b1c0
 */

undefined4 FUN_0044b2c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*param_1 == 0xe34009) {
    if (DAT_0090da84 == '\0') {
      DAT_0090da80 = FUN_004662e0(0x28,8,"Anim_CAnimSkeleton_SlotPool",0);
      DAT_0090da84 = '\x01';
    }
    iVar2 = FUN_00466340(DAT_0090da80);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_0044b1c0();
    }
    uVar4 = (int)param_1 + 0x17U & 0xfffffff0;
    FUN_0044b1f0(uVar4,(param_1[1] - uVar4) + 8 + (int)param_1);
    puVar3[3] = param_1;
    *DAT_0090db04 = puVar3;
    puVar1 = puVar3;
    puVar3[1] = DAT_0090db04;
    DAT_0090db04 = puVar1;
    *puVar3 = &DAT_0090db00;
    return 1;
  }
  return 0;
}

