/* speed.exe 00599100 FUN_00599100; analysis pseudocode, not buildable source.
 * calls 0058fb00 FUN_0058fb00
 * calls 005247a0 FUN_005247a0
 * calls 00460c50 FUN_00460c50
 * calls 0056be80 FUN_0056be80
 * calls 00586580 FUN_00586580
 */

void __fastcall FUN_00599100(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0091d8b4 == 6) {
    FUN_0056be80(&DAT_0091d7b4,0x100,&DAT_0091d5b0);
    iVar1 = FUN_00460c50(&DAT_0091d7b4);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_005247a0();
  FUN_0058fb00(0);
  (**(code **)(*(int *)param_1[1] + 4))(0xda5b8712,*param_1,0,0);
  DAT_0091d8c0 = 0;
  DAT_0091d8c4 = 0;
  puVar2 = &DAT_0091d5b0;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0091d7b4;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0091d4b0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00586580();
  return;
}

