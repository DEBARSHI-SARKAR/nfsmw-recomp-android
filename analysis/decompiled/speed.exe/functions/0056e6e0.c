/* speed.exe 0056e6e0 FUN_0056e6e0; analysis pseudocode, not buildable source.
 * calls 0056e640 FUN_0056e640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056e6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  bool bVar1;
  undefined1 uVar2;
  float fVar3;
  undefined2 *puVar4;
  uint uVar5;
  int extraout_ECX;
  
  puVar4 = (undefined2 *)FUN_0056e640(param_2,param_3,param_4);
  uVar2 = 0;
  if (puVar4 == (undefined2 *)0x0) {
    uVar5 = 0;
    while (*(short *)(extraout_ECX + uVar5 * 8) != 0) {
      uVar5 = uVar5 + 1;
      if (0x13f < (int)uVar5) {
        return uVar5 & 0xffffff00;
      }
    }
    puVar4 = (undefined2 *)(extraout_ECX + uVar5 * 8);
    if (puVar4 == (undefined2 *)0x0) goto LAB_0056e797;
    uVar5 = *(uint *)(param_5 + 0x10);
    if ((uVar5 == 0) || (uVar5 == 0x7fffffff)) goto LAB_0056e797;
    fVar3 = (float)*(int *)(param_5 + 0x10) * _DAT_00890984;
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                     (ushort)(_DAT_00890968 < fVar3) << 8 |
                     (ushort)(NAN(_DAT_00890968) || NAN(fVar3)) << 10 |
                     (ushort)(_DAT_00890968 == fVar3) << 0xe);
    if (_DAT_00890968 == fVar3) goto LAB_0056e797;
    *puVar4 = (short)param_2;
    *(undefined1 *)((int)puVar4 + 3) = (undefined1)param_3;
    *(char *)(puVar4 + 1) = (char)param_4;
  }
  else {
    uVar5 = *(uint *)(param_5 + 0x10);
    if (((uVar5 == 0) || (uVar5 == 0x7fffffff)) ||
       (bVar1 = (int)uVar5 < *(int *)(puVar4 + 2), uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1),
       !bVar1)) goto LAB_0056e797;
  }
  uVar5 = *(uint *)(param_5 + 0x10);
  uVar2 = 1;
  if ((uVar5 != 0) && (uVar5 != 0x7fffffff)) {
    *(uint *)(puVar4 + 2) = uVar5;
  }
LAB_0056e797:
  return CONCAT31((int3)(uVar5 >> 8),uVar2);
}

