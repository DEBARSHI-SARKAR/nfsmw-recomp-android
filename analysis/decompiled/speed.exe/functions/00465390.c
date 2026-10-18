/* speed.exe 00465390 FUN_00465390; analysis pseudocode, not buildable source.
 * calls 00464b40 FUN_00464b40
 * calls 00464a70 FUN_00464a70
 * calls 00464720 FUN_00464720
 */

uint __fastcall FUN_00465390(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00464b40();
  if (((int)uVar1 < -0x80) || (0xff < (int)uVar1)) {
    uVar2 = FUN_00464a70();
    FUN_00464720(param_1,"Parameter %d wouldn\'t fit into char in %s\n",uVar1,uVar2);
  }
  return uVar1 & 0xff;
}

