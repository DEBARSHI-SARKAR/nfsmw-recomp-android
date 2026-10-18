/* speed.exe 0081d8de FUN_0081d8de; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081e9e7 FUN_0081e9e7
 */

undefined4 FUN_0081d8de(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0081bccb();
  puVar1 = (undefined4 *)FUN_0081e9e7(0x2c);
  FUN_0081bcd9();
  FUN_00822050(puVar1,0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  puVar1[1] = param_2;
  *puVar1 = 0x46584253;
  puVar3 = puVar1 + 2;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0x3f800000;
    puVar3 = puVar3 + 1;
  }
  puVar1[8] = param_1;
  puVar1[9] = 1;
  *param_3 = puVar1;
  return 0;
}

