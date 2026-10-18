/* speed.exe 005991b0 FUN_005991b0; analysis pseudocode, not buildable source.
 * calls 0058fb00 FUN_0058fb00
 * calls 0056bfc0 FUN_0056bfc0
 * calls 0056be80 FUN_0056be80
 * calls 004611c0 FUN_004611c0
 * calls 00586580 FUN_00586580
 */

void __fastcall FUN_005991b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0091cf84 == 0) {
    FUN_004611c0(&DAT_0091d5b0);
  }
  else {
    FUN_0056bfc0(&DAT_0091d5b0,0x200,&DAT_0091d4b0);
  }
  FUN_0056be80(&DAT_0091d7b4,0x100,&DAT_0091d5b0);
  FUN_0058fb00(0);
  (**(code **)(*(int *)param_1[1] + 4))(0xc9d30688,*param_1,0,0);
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

