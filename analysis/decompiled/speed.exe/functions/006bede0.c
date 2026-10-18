/* speed.exe 006bede0 FUN_006bede0; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 */

void __fastcall FUN_006bede0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  puVar2 = (undefined4 *)FUN_00466340(DAT_00982adc);
  *puVar2 = *(undefined4 *)(iVar1 + 0x18);
  return;
}

