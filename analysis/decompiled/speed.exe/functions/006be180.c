/* speed.exe 006be180 FUN_006be180; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 */

void __fastcall FUN_006be180(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00466340(DAT_00982a8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *param_1 = puVar1;
    return;
  }
  *param_1 = 0;
  return;
}

