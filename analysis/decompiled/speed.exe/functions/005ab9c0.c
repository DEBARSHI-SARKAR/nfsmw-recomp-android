/* speed.exe 005ab9c0 FUN_005ab9c0; analysis pseudocode, not buildable source.
 * calls 0058fea0 FUN_0058fea0
 * calls 00576bd0 FUN_00576bd0
 * calls 00600b20 FUN_00600b20
 * calls 005ab450 FUN_005ab450
 * calls 00576340 FUN_00576340
 * calls 00590d40 FUN_00590d40
 * calls 005f7730 FUN_005f7730
 * calls 0057fb50 FUN_0057fb50
 */

void __fastcall FUN_005ab9c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_005ab450(0,1);
  FUN_0058fea0();
  uVar1 = FUN_0057fb50();
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa8) = uVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00590d40();
  *(undefined1 *)(DAT_0091cb20 + 0x24) = 0;
  FUN_00576340();
  puVar2 = &DAT_0091d92c;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 3;
  } while ((int)puVar2 < 0x91dc20);
  FUN_00576bd0();
  if (DAT_0091e004 != 0) {
    FUN_00600b20();
  }
  if (DAT_0091e00c != 0) {
    FUN_005f7730();
    return;
  }
  return;
}

