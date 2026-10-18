/* speed.exe 00591af0 FUN_00591af0; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 */

undefined4 * __fastcall FUN_00591af0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  DAT_0091cf9c = FUN_004662e0(0x70,0x180,"FERenderObjectSlotPool",0);
  DAT_0091cfa0 = FUN_004662e0(0xc0,0x348,"FERenderEPolySlotPool",0);
  puVar2 = param_1 + 4;
  for (iVar1 = 0x1ef0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

