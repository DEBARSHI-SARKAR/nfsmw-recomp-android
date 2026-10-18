/* speed.exe 0057a110 FUN_0057a110; analysis pseudocode, not buildable source.
 * calls 00735620 FUN_00735620
 * calls 00514c70 FUN_00514c70
 * calls 00579840 FUN_00579840
 * calls 005675d0 FUN_005675d0
 */

void __fastcall FUN_0057a110(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [12];
  
  uVar4 = 0;
  cVar1 = FUN_00735620();
  iVar2 = (-(uint)(cVar1 != '\0') & 4) + 3;
  puVar6 = (undefined4 *)(&DAT_0092cd1c)[iVar2 * 0x18];
  if (puVar6 != puVar6 + (&DAT_0092cd24)[iVar2 * 0x18]) {
    puVar5 = (undefined4 *)(param_1 + 0xf0);
    uVar4 = 0;
    do {
      cVar1 = (**(code **)(*(int *)*puVar6 + 0x88))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*(int *)*puVar6 + 4))();
        FUN_00579840(auStack_10,auStack_18,uVar3);
        FUN_005675d0(auStack_10,auStack_18,*puVar5,0);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined4 *)
                       ((&DAT_0092cd1c)[iVar2 * 0x18] + (&DAT_0092cd24)[iVar2 * 0x18] * 4));
  }
  if (uVar4 < 8) {
    puVar6 = (undefined4 *)(param_1 + 0xf0 + uVar4 * 4);
    iVar2 = 8 - uVar4;
    do {
      FUN_00514c70(*puVar6);
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

